// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TexturePresetManager : ModuleRules
{
	public TexturePresetManager(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "UnrealEd", "AssetTools", "PropertyEditor", "Blutility"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate", "SlateCore", "EditorStyle", "InputCore"
		});
	}
}
