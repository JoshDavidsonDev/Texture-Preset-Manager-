// This tool was developed by Josh Davidson

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TexturePresetDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FTexture2DPresetSettings
{
	GENERATED_BODY()

	// --- LOD & Group ---
    UPROPERTY(EditAnywhere, Category = "LOD", meta=(ToolTip="Controls how mipmaps are generated for this texture."))
    TEnumAsByte<TextureMipGenSettings> MipGenSettings = TMGS_FromTextureGroup;

    UPROPERTY(EditAnywhere, Category = "LOD", meta=(ToolTip="Defines which LODGroup the texture belongs to (affects streaming and compression settings)."))
    TEnumAsByte<TextureGroup> LODGroup = TEXTUREGROUP_World;

    UPROPERTY(EditAnywhere, Category = "LOD", meta=(ToolTip="Bias applied to the mipmap selection (positive = lower res)."))
    int32 LODBias = 0;

    UPROPERTY(EditAnywhere, Category = "Streaming", meta=(ToolTip="If enabled, forces all mip levels to stay loaded in memory."))
    bool bForceMiplevelsToBeResident = false;

    // --- Compression ---
    UPROPERTY(EditAnywhere, Category = "Compression", meta=(ToolTip="Compression method used for the texture."))
    TEnumAsByte<TextureCompressionSettings> CompressionSettings = TC_Default;

    UPROPERTY(EditAnywhere, Category = "Compression", meta=(ToolTip="Defines the quality of compression applied to the texture (ASTC only)."))
    TEnumAsByte<enum ETextureCompressionQuality> CompressionQuality = TCQ_Default;

    UPROPERTY(EditAnywhere, Category = "Compression", meta=(ToolTip="Amount of lossy compression applied (used by Oodle or similar systems)."))
    TEnumAsByte<ETextureLossyCompressionAmount> LossyCompressionAmount = TLCA_Default;

    // --- Filtering & Virtual Textures ---
    UPROPERTY(EditAnywhere, Category = "Filtering", meta=(ToolTip="Texture filtering method (e.g., point, bilinear, trilinear)."))
    TEnumAsByte<TextureFilter> Filter = TF_Default;

    UPROPERTY(EditAnywhere, Category = "Virtual Texture", meta=(ToolTip="Enables Virtual Texture Streaming for this texture."))
    bool VirtualTextureStreaming = false;

    // --- Addressing & Texture ---
    UPROPERTY(EditAnywhere, Category = "Texture", meta=(ToolTip="If true, applies gamma correction for sRGB output."))
    bool SRGB = true;

    UPROPERTY(EditAnywhere, Category = "Texture", meta=(ToolTip="Defines how the texture wraps on the X axis."))
    TEnumAsByte<TextureAddress> AddressX = TA_Wrap;

    UPROPERTY(EditAnywhere, Category = "Texture", meta=(ToolTip="Defines how the texture wraps on the Y axis."))
    TEnumAsByte<TextureAddress> AddressY = TA_Wrap;

    // --- Adjustments ---
    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Adjusts the brightness of the texture."))
    float AdjustBrightness = 1.0f;

    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Exponent applied to brightness curve."))
    float AdjustBrightnessCurve = 1.0f;

    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Adjusts overall color saturation."))
    float AdjustSaturation = 1.0f;

    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Adjusts perceived color intensity (vibrance)."))
    float AdjustVibrance = 0.0f;

    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Exponent applied to RGB color curve."))
    float AdjustRGBCurve = 1.0f;

    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Adjusts hue shift in degrees."))
    float AdjustHue = 0.0f;

    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Minimum alpha value remap."))
    float AdjustMinAlpha = 0.0f;

    UPROPERTY(EditAnywhere, Category = "Adjustments", meta=(ToolTip="Maximum alpha value remap."))
    float AdjustMaxAlpha = 1.0f;

    // --- Advanced ---
    UPROPERTY(EditAnywhere, Category = "Advanced", meta=(ToolTip="Preserves border pixels during mipmap generation."))
    bool bPreserveBorder = false;

    UPROPERTY(EditAnywhere, Category = "Advanced", meta=(ToolTip="Scales mipmaps to preserve alpha coverage when generating mips."))
    bool bDoScaleMipsForAlphaCoverage = false;

    UPROPERTY(EditAnywhere, Category = "Advanced", meta=(ToolTip="Thresholds used for alpha coverage preservation on each channel."))
    FVector4 AlphaCoverageThresholds = FVector4(0, 0, 0, 0.75f);

    UPROPERTY(EditAnywhere, Category = "Advanced", meta=(ToolTip="Flips the green channel (useful for some normal maps)."))
    bool bFlipGreenChannel = false;

    // --- Chroma Keying ---
    UPROPERTY(EditAnywhere, Category = "Chroma Key", meta=(ToolTip="If true, enables chroma key removal using specified color."))
    bool bChromaKeyTexture = false;

    UPROPERTY(EditAnywhere, Category = "Chroma Key", meta=(EditCondition="bChromaKeyTexture", ToolTip="Color that should be made transparent when chroma keying is enabled."))
    FColor ChromaKeyColor = FColor::Magenta;

    UPROPERTY(EditAnywhere, Category = "Chroma Key", meta=(EditCondition="bChromaKeyTexture", ToolTip="Tolerance threshold for chroma key matching."))
    float ChromaKeyThreshold = 0.003922f;

    // --- Compositing ---
    UPROPERTY(EditAnywhere, Category = "Compositing", meta=(ToolTip="Mode used when compositing with another texture."))
    TEnumAsByte<ECompositeTextureMode> CompositeTextureMode = CTM_Disabled;

    UPROPERTY(EditAnywhere, Category = "Compositing", meta=(ToolTip="Power scalar applied when compositing textures."))
    float CompositePower = 1.0f;
};

UCLASS(BlueprintType)
class TEXTUREPRESETMANAGER_API UTexturePresetDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	// Name of the preset created
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Preset Metadata")
	FName PresetName;

	// Texture Preset Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Preset Settings", meta=(ShowOnlyInnerProperties))
	FTexture2DPresetSettings PresetSettings;
};
