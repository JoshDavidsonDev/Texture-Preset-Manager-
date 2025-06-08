// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "TexturePresetDataAsset.h"
#include "Modules/ModuleManager.h"

class FTexturePresetManagerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void OnAssetImported(UFactory* Factory, UObject* Object);
	static bool MatchesWildcard(const FString& Path, const FString& Pattern);
	void RegisterImportHook();
};

IMPLEMENT_MODULE(FTexturePresetManagerModule, TexturePresetManager)

