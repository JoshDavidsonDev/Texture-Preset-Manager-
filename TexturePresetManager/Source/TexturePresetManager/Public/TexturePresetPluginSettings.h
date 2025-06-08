// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TexturePresetPluginSettings.generated.h"

class UTexturePresetDataAsset;

USTRUCT()
struct FTexturePresetPathMapping
{
	GENERATED_BODY()

	// Path to the folder to auto apply presets -> right click folder & copy path
	UPROPERTY(EditAnywhere, Category="Mapping")
	FString Folder;

	// Preset to apply to the selected folder
	UPROPERTY(EditAnywhere, Category="Mapping")
	TSoftObjectPtr<UTexturePresetDataAsset> Preset;
};

UCLASS(config=EditorPerProjectUserSettings, defaultconfig, BlueprintType, meta = (DisplayName = "Josh Davidson's - Texture Preset Plugin Settings"))
class UTexturePresetPluginSettings : public UObject
{
	GENERATED_BODY()

public:
	// If True, selected folders from AutoApplyMappings will get auto updated with their texture presets
	UPROPERTY(EditAnywhere, config, Category = "Auto Apply")
	bool bEnableAutoApply = true;

	// List of folders and texture presets 
	UPROPERTY(EditAnywhere, config, Category = "Auto Apply")
	TArray<FTexturePresetPathMapping> AutoApplyMappings;

	// If true update the output log with all changes
	UPROPERTY(EditAnywhere, config, Category = "Auto Apply")
	bool bShowOutputLog = true;
};
