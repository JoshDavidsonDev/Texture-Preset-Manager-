// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TexturePresetManager/Public/TexturePresetDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexturePresetDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetDataAsset();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetDataAsset_NoRegister();
TEXTUREPRESETMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FTexture2DPresetSettings();
UPackage* Z_Construct_UPackage__Script_TexturePresetManager();
// End Cross Module References

// Begin ScriptStruct FTexture2DPresetSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Texture2DPresetSettings;
class UScriptStruct* FTexture2DPresetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Texture2DPresetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Texture2DPresetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexture2DPresetSettings, (UObject*)Z_Construct_UPackage__Script_TexturePresetManager(), TEXT("Texture2DPresetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_Texture2DPresetSettings.OuterSingleton;
}
template<> TEXTUREPRESETMANAGER_API UScriptStruct* StaticStruct<FTexture2DPresetSettings>()
{
	return FTexture2DPresetSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Controls how mipmaps are generated for this texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Defines which LODGroup the texture belongs to (affects streaming and compression settings)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Bias applied to the mipmap selection (positive = lower res)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceMiplevelsToBeResident_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "If enabled, forces all mip levels to stay loaded in memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Compression method used for the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Defines the quality of compression applied to the texture (ASTC only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Amount of lossy compression applied (used by Oodle or similar systems)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Texture filtering method (e.g., point, bilinear, trilinear)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureStreaming_MetaData[] = {
		{ "Category", "Virtual Texture" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Enables Virtual Texture Streaming for this texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "If true, applies gamma correction for sRGB output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Defines how the texture wraps on the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Defines how the texture wraps on the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Adjusts the brightness of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Exponent applied to brightness curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Adjusts overall color saturation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Adjusts perceived color intensity (vibrance)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Exponent applied to RGB color curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Adjusts hue shift in degrees." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Minimum alpha value remap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Maximum alpha value remap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveBorder_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Preserves border pixels during mipmap generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoScaleMipsForAlphaCoverage_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Scales mipmaps to preserve alpha coverage when generating mips." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCoverageThresholds_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Thresholds used for alpha coverage preservation on each channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipGreenChannel_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Flips the green channel (useful for some normal maps)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[] = {
		{ "Category", "Chroma Key" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "If true, enables chroma key removal using specified color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[] = {
		{ "Category", "Chroma Key" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Color that should be made transparent when chroma keying is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyThreshold_MetaData[] = {
		{ "Category", "Chroma Key" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Tolerance threshold for chroma key matching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeTextureMode_MetaData[] = {
		{ "Category", "Compositing" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Mode used when compositing with another texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositePower_MetaData[] = {
		{ "Category", "Compositing" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Power scalar applied when compositing textures." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODGroup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
	static void NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResident;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
	static void NewProp_VirtualTextureStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VirtualTextureStreaming;
	static void NewProp_SRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
	static void NewProp_bPreserveBorder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveBorder;
	static void NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoScaleMipsForAlphaCoverage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCoverageThresholds;
	static void NewProp_bFlipGreenChannel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipGreenChannel;
	static void NewProp_bChromaKeyTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeyThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompositeTextureMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompositePower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexture2DPresetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipGenSettings_MetaData), NewProp_MipGenSettings_MetaData) }; // 3164791778
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODGroup_MetaData), NewProp_LODGroup_MetaData) }; // 2065735531
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_MetaData), NewProp_LODBias_MetaData) };
void Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj)
{
	((FTexture2DPresetSettings*)Obj)->bForceMiplevelsToBeResident = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bForceMiplevelsToBeResident = { "bForceMiplevelsToBeResident", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexture2DPresetSettings), &Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bForceMiplevelsToBeResident_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceMiplevelsToBeResident_MetaData), NewProp_bForceMiplevelsToBeResident_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionSettings_MetaData), NewProp_CompressionSettings_MetaData) }; // 2977833603
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, CompressionQuality), Z_Construct_UEnum_Engine_ETextureCompressionQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionQuality_MetaData), NewProp_CompressionQuality_MetaData) }; // 301197728
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LossyCompressionAmount_MetaData), NewProp_LossyCompressionAmount_MetaData) }; // 1608486090
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 525537855
void Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_VirtualTextureStreaming_SetBit(void* Obj)
{
	((FTexture2DPresetSettings*)Obj)->VirtualTextureStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_VirtualTextureStreaming = { "VirtualTextureStreaming", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexture2DPresetSettings), &Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_VirtualTextureStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureStreaming_MetaData), NewProp_VirtualTextureStreaming_MetaData) };
void Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_SRGB_SetBit(void* Obj)
{
	((FTexture2DPresetSettings*)Obj)->SRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexture2DPresetSettings), &Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SRGB_MetaData), NewProp_SRGB_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightness_MetaData), NewProp_AdjustBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustBrightnessCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightnessCurve_MetaData), NewProp_AdjustBrightnessCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustSaturation_MetaData), NewProp_AdjustSaturation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustVibrance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustVibrance_MetaData), NewProp_AdjustVibrance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustRGBCurve = { "AdjustRGBCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustRGBCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustRGBCurve_MetaData), NewProp_AdjustRGBCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustHue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustHue_MetaData), NewProp_AdjustHue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustMinAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMinAlpha_MetaData), NewProp_AdjustMinAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AdjustMaxAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMaxAlpha_MetaData), NewProp_AdjustMaxAlpha_MetaData) };
void Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bPreserveBorder_SetBit(void* Obj)
{
	((FTexture2DPresetSettings*)Obj)->bPreserveBorder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bPreserveBorder = { "bPreserveBorder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexture2DPresetSettings), &Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bPreserveBorder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveBorder_MetaData), NewProp_bPreserveBorder_MetaData) };
void Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj)
{
	((FTexture2DPresetSettings*)Obj)->bDoScaleMipsForAlphaCoverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bDoScaleMipsForAlphaCoverage = { "bDoScaleMipsForAlphaCoverage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexture2DPresetSettings), &Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoScaleMipsForAlphaCoverage_MetaData), NewProp_bDoScaleMipsForAlphaCoverage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AlphaCoverageThresholds = { "AlphaCoverageThresholds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, AlphaCoverageThresholds), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCoverageThresholds_MetaData), NewProp_AlphaCoverageThresholds_MetaData) };
void Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bFlipGreenChannel_SetBit(void* Obj)
{
	((FTexture2DPresetSettings*)Obj)->bFlipGreenChannel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bFlipGreenChannel = { "bFlipGreenChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexture2DPresetSettings), &Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bFlipGreenChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipGreenChannel_MetaData), NewProp_bFlipGreenChannel_MetaData) };
void Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bChromaKeyTexture_SetBit(void* Obj)
{
	((FTexture2DPresetSettings*)Obj)->bChromaKeyTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bChromaKeyTexture = { "bChromaKeyTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexture2DPresetSettings), &Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bChromaKeyTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChromaKeyTexture_MetaData), NewProp_bChromaKeyTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_ChromaKeyColor = { "ChromaKeyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, ChromaKeyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChromaKeyColor_MetaData), NewProp_ChromaKeyColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_ChromaKeyThreshold = { "ChromaKeyThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, ChromaKeyThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChromaKeyThreshold_MetaData), NewProp_ChromaKeyThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompositeTextureMode = { "CompositeTextureMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, CompositeTextureMode), Z_Construct_UEnum_Engine_ECompositeTextureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeTextureMode_MetaData), NewProp_CompositeTextureMode_MetaData) }; // 1369033822
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompositePower = { "CompositePower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexture2DPresetSettings, CompositePower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositePower_MetaData), NewProp_CompositePower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_MipGenSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_LODGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_LODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bForceMiplevelsToBeResident,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompressionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_LossyCompressionAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_VirtualTextureStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_SRGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustBrightnessCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustVibrance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustRGBCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustHue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustMinAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AdjustMaxAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bPreserveBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bDoScaleMipsForAlphaCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_AlphaCoverageThresholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bFlipGreenChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_bChromaKeyTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_ChromaKeyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_ChromaKeyThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompositeTextureMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewProp_CompositePower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TexturePresetManager,
	nullptr,
	&NewStructOps,
	"Texture2DPresetSettings",
	Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::PropPointers),
	sizeof(FTexture2DPresetSettings),
	alignof(FTexture2DPresetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTexture2DPresetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_Texture2DPresetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Texture2DPresetSettings.InnerSingleton, Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Texture2DPresetSettings.InnerSingleton;
}
// End ScriptStruct FTexture2DPresetSettings

// Begin Class UTexturePresetDataAsset
void UTexturePresetDataAsset::StaticRegisterNativesUTexturePresetDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexturePresetDataAsset);
UClass* Z_Construct_UClass_UTexturePresetDataAsset_NoRegister()
{
	return UTexturePresetDataAsset::StaticClass();
}
struct Z_Construct_UClass_UTexturePresetDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TexturePresetDataAsset.h" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Preset Metadata" },
		{ "Comment", "// Name of the preset created\n" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ToolTip", "Name of the preset created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetSettings_MetaData[] = {
		{ "Category", "Preset Settings" },
		{ "Comment", "// Texture Preset Settings\n" },
		{ "ModuleRelativePath", "Public/TexturePresetDataAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Texture Preset Settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexturePresetDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTexturePresetDataAsset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexturePresetDataAsset, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexturePresetDataAsset_Statics::NewProp_PresetSettings = { "PresetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexturePresetDataAsset, PresetSettings), Z_Construct_UScriptStruct_FTexture2DPresetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetSettings_MetaData), NewProp_PresetSettings_MetaData) }; // 3191864165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexturePresetDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexturePresetDataAsset_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexturePresetDataAsset_Statics::NewProp_PresetSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTexturePresetDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TexturePresetManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexturePresetDataAsset_Statics::ClassParams = {
	&UTexturePresetDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTexturePresetDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UTexturePresetDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTexturePresetDataAsset()
{
	if (!Z_Registration_Info_UClass_UTexturePresetDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexturePresetDataAsset.OuterSingleton, Z_Construct_UClass_UTexturePresetDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTexturePresetDataAsset.OuterSingleton;
}
template<> TEXTUREPRESETMANAGER_API UClass* StaticClass<UTexturePresetDataAsset>()
{
	return UTexturePresetDataAsset::StaticClass();
}
UTexturePresetDataAsset::UTexturePresetDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTexturePresetDataAsset);
UTexturePresetDataAsset::~UTexturePresetDataAsset() {}
// End Class UTexturePresetDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTexture2DPresetSettings::StaticStruct, Z_Construct_UScriptStruct_FTexture2DPresetSettings_Statics::NewStructOps, TEXT("Texture2DPresetSettings"), &Z_Registration_Info_UScriptStruct_Texture2DPresetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTexture2DPresetSettings), 3191864165U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTexturePresetDataAsset, UTexturePresetDataAsset::StaticClass, TEXT("UTexturePresetDataAsset"), &Z_Registration_Info_UClass_UTexturePresetDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexturePresetDataAsset), 2377763779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetDataAsset_h_3460958889(TEXT("/Script/TexturePresetManager"),
	Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
