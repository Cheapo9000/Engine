// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utilities/QuixelAssetTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeQuixelAssetTypes() {}

// ********** Begin Cross Module References ********************************************************
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FAssetMetaDataJson();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FSemanticTags();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSemanticTags *****************************************************
struct Z_Construct_UScriptStruct_FSemanticTags_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSemanticTags); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSemanticTags); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSemanticTags constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Asset_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSemanticTags constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSemanticTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSemanticTags_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSemanticTags;
class UScriptStruct* FSemanticTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSemanticTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSemanticTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSemanticTags, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("SemanticTags"));
	}
	return Z_Registration_Info_UScriptStruct_FSemanticTags.OuterSingleton;
	}

// ********** Begin ScriptStruct FSemanticTags Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSemanticTags_Statics::NewProp_Asset_Type = { "Asset_Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSemanticTags, Asset_Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_Type_MetaData), NewProp_Asset_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSemanticTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSemanticTags_Statics::NewProp_Asset_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSemanticTags_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSemanticTags Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSemanticTags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"SemanticTags",
	Z_Construct_UScriptStruct_FSemanticTags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSemanticTags_Statics::PropPointers),
	sizeof(FSemanticTags),
	alignof(FSemanticTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSemanticTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSemanticTags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSemanticTags()
{
	if (!Z_Registration_Info_UScriptStruct_FSemanticTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSemanticTags.InnerSingleton, Z_Construct_UScriptStruct_FSemanticTags_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSemanticTags.InnerSingleton);
}
// ********** End ScriptStruct FSemanticTags *******************************************************

// ********** Begin ScriptStruct FAssetMetaDataJson ************************************************
struct Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAssetMetaDataJson); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAssetMetaDataJson); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_Bias_Tier1_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_Scale_Tier1_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/QuixelAssetTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAssetMetaDataJson constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SemanticTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Displacement_Bias_Tier1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Displacement_Scale_Tier1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAssetMetaDataJson constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetMetaDataJson>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetMetaDataJson;
class UScriptStruct* FAssetMetaDataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetMetaDataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetMetaDataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetMetaDataJson, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("AssetMetaDataJson"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetMetaDataJson.OuterSingleton;
	}

// ********** Begin ScriptStruct FAssetMetaDataJson Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMetaDataJson, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMetaDataJson, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_SemanticTags = { "SemanticTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMetaDataJson, SemanticTags), Z_Construct_UScriptStruct_FSemanticTags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticTags_MetaData), NewProp_SemanticTags_MetaData) }; // 1088108627
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Displacement_Bias_Tier1 = { "Displacement_Bias_Tier1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMetaDataJson, Displacement_Bias_Tier1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Displacement_Bias_Tier1_MetaData), NewProp_Displacement_Bias_Tier1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Displacement_Scale_Tier1 = { "Displacement_Scale_Tier1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMetaDataJson, Displacement_Scale_Tier1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Displacement_Scale_Tier1_MetaData), NewProp_Displacement_Scale_Tier1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Categories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_SemanticTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Displacement_Bias_Tier1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewProp_Displacement_Scale_Tier1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAssetMetaDataJson Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"AssetMetaDataJson",
	Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::PropPointers),
	sizeof(FAssetMetaDataJson),
	alignof(FAssetMetaDataJson),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetMetaDataJson()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetMetaDataJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetMetaDataJson.InnerSingleton, Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAssetMetaDataJson.InnerSingleton);
}
// ********** End ScriptStruct FAssetMetaDataJson **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_QuixelAssetTypes_h__Script_Fab_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSemanticTags::StaticStruct, Z_Construct_UScriptStruct_FSemanticTags_Statics::NewStructOps, TEXT("SemanticTags"),&Z_Registration_Info_UScriptStruct_FSemanticTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSemanticTags), 1088108627U) },
		{ FAssetMetaDataJson::StaticStruct, Z_Construct_UScriptStruct_FAssetMetaDataJson_Statics::NewStructOps, TEXT("AssetMetaDataJson"),&Z_Registration_Info_UScriptStruct_FAssetMetaDataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetMetaDataJson), 2993148921U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_QuixelAssetTypes_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_QuixelAssetTypes_h__Script_Fab_1169720255{
	TEXT("/Script/Fab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_QuixelAssetTypes_h__Script_Fab_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_QuixelAssetTypes_h__Script_Fab_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
