// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TexturePresetManager/Public/TexturePresetApplier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexturePresetApplier() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetApplier();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetApplier_NoRegister();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_TexturePresetManager();
// End Cross Module References

// Begin Class UTexturePresetApplier Function ApplyPresetToTextures
struct Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics
{
	struct TexturePresetApplier_eventApplyPresetToTextures_Parms
	{
		TArray<UTexture2D*> Textures;
		const UTexturePresetDataAsset* Preset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture Presets" },
		{ "Comment", "// Apply the stored texture presets to the selected assets in the content browser\n" },
		{ "ModuleRelativePath", "Public/TexturePresetApplier.h" },
		{ "ToolTip", "Apply the stored texture presets to the selected assets in the content browser" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TexturePresetApplier_eventApplyPresetToTextures_Parms, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TexturePresetApplier_eventApplyPresetToTextures_Parms, Preset), Z_Construct_UClass_UTexturePresetDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexturePresetApplier, nullptr, "ApplyPresetToTextures", nullptr, nullptr, Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::TexturePresetApplier_eventApplyPresetToTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::TexturePresetApplier_eventApplyPresetToTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTexturePresetApplier::execApplyPresetToTextures)
{
	P_GET_TARRAY_REF(UTexture2D*,Z_Param_Out_Textures);
	P_GET_OBJECT(UTexturePresetDataAsset,Z_Param_Preset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTexturePresetApplier::ApplyPresetToTextures(Z_Param_Out_Textures,Z_Param_Preset);
	P_NATIVE_END;
}
// End Class UTexturePresetApplier Function ApplyPresetToTextures

// Begin Class UTexturePresetApplier
void UTexturePresetApplier::StaticRegisterNativesUTexturePresetApplier()
{
	UClass* Class = UTexturePresetApplier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyPresetToTextures", &UTexturePresetApplier::execApplyPresetToTextures },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexturePresetApplier);
UClass* Z_Construct_UClass_UTexturePresetApplier_NoRegister()
{
	return UTexturePresetApplier::StaticClass();
}
struct Z_Construct_UClass_UTexturePresetApplier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TexturePresetApplier.h" },
		{ "ModuleRelativePath", "Public/TexturePresetApplier.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTexturePresetApplier_ApplyPresetToTextures, "ApplyPresetToTextures" }, // 1498657150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexturePresetApplier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTexturePresetApplier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TexturePresetManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetApplier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexturePresetApplier_Statics::ClassParams = {
	&UTexturePresetApplier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetApplier_Statics::Class_MetaDataParams), Z_Construct_UClass_UTexturePresetApplier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTexturePresetApplier()
{
	if (!Z_Registration_Info_UClass_UTexturePresetApplier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexturePresetApplier.OuterSingleton, Z_Construct_UClass_UTexturePresetApplier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTexturePresetApplier.OuterSingleton;
}
template<> TEXTUREPRESETMANAGER_API UClass* StaticClass<UTexturePresetApplier>()
{
	return UTexturePresetApplier::StaticClass();
}
UTexturePresetApplier::UTexturePresetApplier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTexturePresetApplier);
UTexturePresetApplier::~UTexturePresetApplier() {}
// End Class UTexturePresetApplier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetApplier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTexturePresetApplier, UTexturePresetApplier::StaticClass, TEXT("UTexturePresetApplier"), &Z_Registration_Info_UClass_UTexturePresetApplier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexturePresetApplier), 4087674009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetApplier_h_2189091719(TEXT("/Script/TexturePresetManager"),
	Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetApplier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetApplier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
