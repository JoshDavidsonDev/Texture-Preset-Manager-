// Content developed by Josh Davidson

#include "TexturePresetApplier.h"
#include "TexturePresetDataAsset.h"
#include "Engine/Texture2D.h"
#include "UObject/UnrealType.h"

void UTexturePresetApplier::ApplyPresetToTextures(const TArray<UTexture2D*>& Textures, const UTexturePresetDataAsset* Preset)
{
	// Validate preset asset
	if (!IsValid(Preset))
	{
		return;
	}

    const FTexture2DPresetSettings& Settings = Preset->PresetSettings;
	
    for (UTexture2D* Texture : Textures)
    {
        if (!IsValid(Texture))
        {
	        continue;
        }

        // LOD & Streaming
        Texture->MipGenSettings = Settings.MipGenSettings;
        Texture->LODGroup = Settings.LODGroup;
        Texture->LODBias = Settings.LODBias;
        Texture->bForceMiplevelsToBeResident = Settings.bForceMiplevelsToBeResident;

        // Compression
        Texture->CompressionSettings = Settings.CompressionSettings;
        Texture->CompressionQuality = Settings.CompressionQuality;
        Texture->LossyCompressionAmount = Settings.LossyCompressionAmount;

        // Filtering & VT
        Texture->Filter = Settings.Filter;
        Texture->VirtualTextureStreaming = Settings.VirtualTextureStreaming;

        // Texture properties
        Texture->SRGB = Settings.SRGB;
        Texture->AddressX = Settings.AddressX;
        Texture->AddressY = Settings.AddressY;

        // Adjustments (these need source art to be visible, but still assigning)
        Texture->AdjustBrightness = Settings.AdjustBrightness;
        Texture->AdjustBrightnessCurve = Settings.AdjustBrightnessCurve;
        Texture->AdjustSaturation = Settings.AdjustSaturation;
        Texture->AdjustVibrance = Settings.AdjustVibrance;
        Texture->AdjustRGBCurve = Settings.AdjustRGBCurve;
        Texture->AdjustHue = Settings.AdjustHue;
        Texture->AdjustMinAlpha = Settings.AdjustMinAlpha;
        Texture->AdjustMaxAlpha = Settings.AdjustMaxAlpha;

        // Advanced
        Texture->bPreserveBorder = Settings.bPreserveBorder;
        Texture->bDoScaleMipsForAlphaCoverage = Settings.bDoScaleMipsForAlphaCoverage;
        Texture->AlphaCoverageThresholds = Settings.AlphaCoverageThresholds;
        Texture->bFlipGreenChannel = Settings.bFlipGreenChannel;

        // Chroma Key
        Texture->bChromaKeyTexture = Settings.bChromaKeyTexture;
        Texture->ChromaKeyColor = Settings.ChromaKeyColor;
        Texture->ChromaKeyThreshold = Settings.ChromaKeyThreshold;

        // Compositing
        Texture->CompositeTextureMode = Settings.CompositeTextureMode;
        Texture->CompositePower = Settings.CompositePower;

    	// Notify the editor of property changes and mark asset dirty
        Texture->PostEditChange();
        Texture->MarkPackageDirty();
    }
}
