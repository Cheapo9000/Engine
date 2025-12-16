// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Workflows/FabWorkflow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFabWorkflow() {}

// ********** Begin Cross Module References ********************************************************
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabAssetMetadata();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFabAssetMetadata *************************************************
struct Z_Construct_UScriptStruct_FFabAssetMetadata_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFabAssetMetadata); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFabAssetMetadata); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListingType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetNamespace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionPointBaseUrls_MetaData[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsQuixel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Workflows/FabWorkflow.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFabAssetMetadata constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ListingType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetNamespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DistributionPointBaseUrls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DistributionPointBaseUrls;
	static void NewProp_IsQuixel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsQuixel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFabAssetMetadata constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabAssetMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFabAssetMetadata_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFabAssetMetadata;
class UScriptStruct* FFabAssetMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAssetMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFabAssetMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabAssetMetadata, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabAssetMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_FFabAssetMetadata.OuterSingleton;
	}

// ********** Begin ScriptStruct FFabAssetMetadata Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_ListingType = { "ListingType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, ListingType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListingType_MetaData), NewProp_ListingType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetNamespace = { "AssetNamespace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, AssetNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetNamespace_MetaData), NewProp_AssetNamespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls_Inner = { "DistributionPointBaseUrls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls = { "DistributionPointBaseUrls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetadata, DistributionPointBaseUrls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionPointBaseUrls_MetaData), NewProp_DistributionPointBaseUrls_MetaData) };
void Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel_SetBit(void* Obj)
{
	((FFabAssetMetadata*)Obj)->IsQuixel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel = { "IsQuixel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFabAssetMetadata), &Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsQuixel_MetaData), NewProp_IsQuixel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_ListingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_AssetNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_DistributionPointBaseUrls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewProp_IsQuixel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFabAssetMetadata Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabAssetMetadata",
	Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::PropPointers),
	sizeof(FFabAssetMetadata),
	alignof(FFabAssetMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabAssetMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAssetMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFabAssetMetadata.InnerSingleton, Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFabAssetMetadata.InnerSingleton);
}
// ********** End ScriptStruct FFabAssetMetadata ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Workflows_FabWorkflow_h__Script_Fab_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFabAssetMetadata::StaticStruct, Z_Construct_UScriptStruct_FFabAssetMetadata_Statics::NewStructOps, TEXT("FabAssetMetadata"),&Z_Registration_Info_UScriptStruct_FFabAssetMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabAssetMetadata), 2910424828U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Workflows_FabWorkflow_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Workflows_FabWorkflow_h__Script_Fab_3149255477{
	TEXT("/Script/Fab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Workflows_FabWorkflow_h__Script_Fab_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Workflows_FabWorkflow_h__Script_Fab_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
