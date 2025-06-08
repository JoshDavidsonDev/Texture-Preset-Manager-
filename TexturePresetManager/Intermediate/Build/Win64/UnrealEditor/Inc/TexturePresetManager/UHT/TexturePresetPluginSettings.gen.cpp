// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TexturePresetManager/Public/TexturePresetPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexturePresetPluginSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetDataAsset_NoRegister();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetPluginSettings();
TEXTUREPRESETMANAGER_API UClass* Z_Construct_UClass_UTexturePresetPluginSettings_NoRegister();
TEXTUREPRESETMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FTexturePresetPathMapping();
UPackage* Z_Construct_UPackage__Script_TexturePresetManager();
// End Cross Module References

// Begin ScriptStruct FTexturePresetPathMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TexturePresetPathMapping;
class UScriptStruct* FTexturePresetPathMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TexturePresetPathMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TexturePresetPathMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturePresetPathMapping, (UObject*)Z_Construct_UPackage__Script_TexturePresetManager(), TEXT("TexturePresetPathMapping"));
	}
	return Z_Registration_Info_UScriptStruct_TexturePresetPathMapping.OuterSingleton;
}
template<> TEXTUREPRESETMANAGER_API UScriptStruct* StaticStruct<FTexturePresetPathMapping>()
{
	return FTexturePresetPathMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TexturePresetPluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Path to the folder to auto apply presets -> right click folder & copy path\n" },
		{ "ModuleRelativePath", "Public/TexturePresetPluginSettings.h" },
		{ "ToolTip", "Path to the folder to auto apply presets -> right click folder & copy path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Preset to apply to the selected folder\n" },
		{ "ModuleRelativePath", "Public/TexturePresetPluginSettings.h" },
		{ "ToolTip", "Preset to apply to the selected folder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturePresetPathMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturePresetPathMapping, Folder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Folder_MetaData), NewProp_Folder_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturePresetPathMapping, Preset), Z_Construct_UClass_UTexturePresetDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TexturePresetManager,
	nullptr,
	&NewStructOps,
	"TexturePresetPathMapping",
	Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::PropPointers),
	sizeof(FTexturePresetPathMapping),
	alignof(FTexturePresetPathMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTexturePresetPathMapping()
{
	if (!Z_Registration_Info_UScriptStruct_TexturePresetPathMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TexturePresetPathMapping.InnerSingleton, Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TexturePresetPathMapping.InnerSingleton;
}
// End ScriptStruct FTexturePresetPathMapping

// Begin Class UTexturePresetPluginSettings
void UTexturePresetPluginSettings::StaticRegisterNativesUTexturePresetPluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexturePresetPluginSettings);
UClass* Z_Construct_UClass_UTexturePresetPluginSettings_NoRegister()
{
	return UTexturePresetPluginSettings::StaticClass();
}
struct Z_Construct_UClass_UTexturePresetPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Josh Davidson's - Texture Preset Plugin Settings" },
		{ "IncludePath", "TexturePresetPluginSettings.h" },
		{ "ModuleRelativePath", "Public/TexturePresetPluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoApply_MetaData[] = {
		{ "Category", "Auto Apply" },
		{ "Comment", "// If True, selected folders from AutoApplyMappings will get auto updated with their texture presets\n" },
		{ "ModuleRelativePath", "Public/TexturePresetPluginSettings.h" },
		{ "ToolTip", "If True, selected folders from AutoApplyMappings will get auto updated with their texture presets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoApplyMappings_MetaData[] = {
		{ "Category", "Auto Apply" },
		{ "Comment", "// List of folders and texture presets \n" },
		{ "ModuleRelativePath", "Public/TexturePresetPluginSettings.h" },
		{ "ToolTip", "List of folders and texture presets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutputLog_MetaData[] = {
		{ "Category", "Auto Apply" },
		{ "Comment", "// If true update the output log with all changes\n" },
		{ "ModuleRelativePath", "Public/TexturePresetPluginSettings.h" },
		{ "ToolTip", "If true update the output log with all changes" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAutoApply_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoApplyMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoApplyMappings;
	static void NewProp_bShowOutputLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutputLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexturePresetPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bEnableAutoApply_SetBit(void* Obj)
{
	((UTexturePresetPluginSettings*)Obj)->bEnableAutoApply = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bEnableAutoApply = { "bEnableAutoApply", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexturePresetPluginSettings), &Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bEnableAutoApply_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoApply_MetaData), NewProp_bEnableAutoApply_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_AutoApplyMappings_Inner = { "AutoApplyMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTexturePresetPathMapping, METADATA_PARAMS(0, nullptr) }; // 3531012707
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_AutoApplyMappings = { "AutoApplyMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexturePresetPluginSettings, AutoApplyMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoApplyMappings_MetaData), NewProp_AutoApplyMappings_MetaData) }; // 3531012707
void Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bShowOutputLog_SetBit(void* Obj)
{
	((UTexturePresetPluginSettings*)Obj)->bShowOutputLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bShowOutputLog = { "bShowOutputLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexturePresetPluginSettings), &Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bShowOutputLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOutputLog_MetaData), NewProp_bShowOutputLog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexturePresetPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bEnableAutoApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_AutoApplyMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_AutoApplyMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexturePresetPluginSettings_Statics::NewProp_bShowOutputLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetPluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTexturePresetPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TexturePresetManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexturePresetPluginSettings_Statics::ClassParams = {
	&UTexturePresetPluginSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTexturePresetPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetPluginSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePresetPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTexturePresetPluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTexturePresetPluginSettings()
{
	if (!Z_Registration_Info_UClass_UTexturePresetPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexturePresetPluginSettings.OuterSingleton, Z_Construct_UClass_UTexturePresetPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTexturePresetPluginSettings.OuterSingleton;
}
template<> TEXTUREPRESETMANAGER_API UClass* StaticClass<UTexturePresetPluginSettings>()
{
	return UTexturePresetPluginSettings::StaticClass();
}
UTexturePresetPluginSettings::UTexturePresetPluginSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTexturePresetPluginSettings);
UTexturePresetPluginSettings::~UTexturePresetPluginSettings() {}
// End Class UTexturePresetPluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetPluginSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTexturePresetPathMapping::StaticStruct, Z_Construct_UScriptStruct_FTexturePresetPathMapping_Statics::NewStructOps, TEXT("TexturePresetPathMapping"), &Z_Registration_Info_UScriptStruct_TexturePresetPathMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTexturePresetPathMapping), 3531012707U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTexturePresetPluginSettings, UTexturePresetPluginSettings::StaticClass, TEXT("UTexturePresetPluginSettings"), &Z_Registration_Info_UClass_UTexturePresetPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexturePresetPluginSettings), 193371517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetPluginSettings_h_3080988872(TEXT("/Script/TexturePresetManager"),
	Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetPluginSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetPluginSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Josh_Documents_My_UE_Tools_PackageTools_TexturePresetTool_V_2_0_TexturePresetManager_HostProject_Plugins_TexturePresetManager_Source_TexturePresetManager_Public_TexturePresetPluginSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
