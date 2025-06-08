// Copyright Epic Games, Inc. All Rights Reserved.

#include "TexturePresetManager.h"

#include "ISettingsModule.h"
#include "TexturePresetApplier.h"
#include "TexturePresetDataAsset.h"
#include "TexturePresetDataAssetCustomization.h"
#include "TexturePresetPluginSettings.h"
#include "Misc/WildcardString.h"

#define LOCTEXT_NAMESPACE "FTexturePresetManagerModule"

void FTexturePresetManagerModule::StartupModule()
{
	// Register custom details panel for the preset asset
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyEditorModule.RegisterCustomClassLayout("TexturePresetDataAsset", FOnGetDetailCustomizationInstance::CreateStatic(&FTexturePresetDataAssetCustomization::MakeInstance));

	// Register settings in Project Settings > Plugins > Texture Preset Manager
	if (ISettingsModule* SettingsModule = FModuleManager::LoadModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings(
			"Project",
			"Plugins",
			"TexturePresetManager",
			LOCTEXT("TexturePresetManagerName", "Texture Preset Manager"),
			LOCTEXT("TexturePresetManagerDesc", "Automatically apply texture presets based on import paths."),
			GetMutableDefault<UTexturePresetPluginSettings>());
	}

	// Delay-hook into import system after engine fully loads
	FCoreDelegates::OnPostEngineInit.AddRaw(this, &FTexturePresetManagerModule::RegisterImportHook);
}

void FTexturePresetManagerModule::ShutdownModule()
{
	// Unregister details panel customization
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyEditorModule.UnregisterCustomClassLayout("TexturePresetDataAsset");
	}

	// Unregister import hook
	if (GEditor)
	{
		if (UImportSubsystem* ImportSubsystem = GEditor->GetEditorSubsystem<UImportSubsystem>())
		{
			ImportSubsystem->OnAssetPostImport.RemoveAll(this);
		}
	}
}

void FTexturePresetManagerModule::OnAssetImported(UFactory* Factory, UObject* Object)
{
	// Only act on UTexture2D imports
	if (UTexture2D* Texture = Cast<UTexture2D>(Object))
	{
		const UTexturePresetPluginSettings* Settings = GetDefault<UTexturePresetPluginSettings>();

		// Skip if disabled
		if (!Settings->bEnableAutoApply)
		{
			if (Settings->bShowOutputLog)
			{
				UE_LOG(LogTemp, Log, TEXT("[TexturePreset] Auto-apply disabled."));
			}
			return;
		}

		const FString TexturePath = Texture->GetPathName();

		// Iterate over user-defined path → preset mappings
		for (const FTexturePresetPathMapping& Mapping : Settings->AutoApplyMappings)
		{
			const FString& Pattern = Mapping.Folder;

			// Match direct prefix or wildcard patterns
			if (TexturePath.StartsWith(Pattern) || MatchesWildcard(TexturePath, Pattern))
			{
				if (const UTexturePresetDataAsset* Preset = Mapping.Preset.LoadSynchronous())
				{
					const TArray<UTexture2D*> Textures = { Texture };
					UTexturePresetApplier::ApplyPresetToTextures(Textures, Preset);

					if (Settings->bShowOutputLog)
					{
						UE_LOG(LogTemp, Log, TEXT("[TexturePreset] Applied preset '%s' to imported texture: %s"), *Preset->GetName(), *Texture->GetPathName());
					}
				}
				break;
			}
		}
	}
}

bool FTexturePresetManagerModule::MatchesWildcard(const FString& Path, const FString& Pattern)
{
	// Normalize path separators
	const FString NormalizedPath = Path.Replace(TEXT("\\"), TEXT("/"));
	const FString NormalizedPattern = Pattern.Replace(TEXT("\\"), TEXT("/"));

	// Handle recursive match pattern: "/Path/**"
	if (NormalizedPattern.EndsWith(TEXT("/**")))
	{
		const FString BasePath = NormalizedPattern.LeftChop(3);
		return NormalizedPath.StartsWith(BasePath);
	}

	// Handle wildcard character: "*"
	return FWildcardString::IsMatch(*NormalizedPath, *NormalizedPattern);
}

void FTexturePresetManagerModule::RegisterImportHook()
{
	// Bind post-import handler once engine and editor subsystems are ready
	if (GEditor)
	{
		if (UImportSubsystem* ImportSubsystem = GEditor->GetEditorSubsystem<UImportSubsystem>())
		{
			ImportSubsystem->OnAssetPostImport.AddRaw(this, &FTexturePresetManagerModule::OnAssetImported);
		}
	}
}

#undef LOCTEXT_NAMESPACE
