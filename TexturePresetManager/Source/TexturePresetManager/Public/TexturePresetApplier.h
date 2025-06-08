// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TexturePresetDataAsset.h"
#include "TexturePresetApplier.generated.h"

UCLASS()
class TEXTUREPRESETMANAGER_API UTexturePresetApplier : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Apply the stored texture presets to the selected assets in the content browser
	UFUNCTION(BlueprintCallable, Category = "Texture Presets")
	static void ApplyPresetToTextures(const TArray<UTexture2D*>& Textures, const UTexturePresetDataAsset* Preset);
};
