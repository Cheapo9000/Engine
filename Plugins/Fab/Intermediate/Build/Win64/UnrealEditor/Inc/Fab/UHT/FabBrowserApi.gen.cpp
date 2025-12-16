// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FabBrowserApi.h"
#include "Workflows/FabWorkflow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFabBrowserApi() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FAB_API UClass* Z_Construct_UClass_UFabBrowserApi();
FAB_API UClass* Z_Construct_UClass_UFabBrowserApi_NoRegister();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabApiVersion();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabAssetMetadata();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabFrontendSettings();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFabApiVersion ****************************************************
struct Z_Construct_UScriptStruct_FFabApiVersion_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFabApiVersion); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFabApiVersion); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ue_MetaData[] = {
		{ "Comment", "// These three uproperties need to be in this case (NOT PascalCase)\n// otherwise we will break compatibility with the engine plugin \n// Fab's JS on the macOS WebKit WebBrowser plugin backend.\n" },
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
		{ "ToolTip", "These three uproperties need to be in this case (NOT PascalCase)\notherwise we will break compatibility with the engine plugin\nFab's JS on the macOS WebKit WebBrowser plugin backend." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_api_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pluginversion_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_platform_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFabApiVersion constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_api;
	static const UECodeGen_Private::FStrPropertyParams NewProp_pluginversion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_platform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFabApiVersion constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabApiVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFabApiVersion_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFabApiVersion;
class UScriptStruct* FFabApiVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFabApiVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFabApiVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabApiVersion, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabApiVersion"));
	}
	return Z_Registration_Info_UScriptStruct_FFabApiVersion.OuterSingleton;
	}

// ********** Begin ScriptStruct FFabApiVersion Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_ue = { "ue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, ue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ue_MetaData), NewProp_ue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_api = { "api", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, api), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_api_MetaData), NewProp_api_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_pluginversion = { "pluginversion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, pluginversion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pluginversion_MetaData), NewProp_pluginversion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabApiVersion, platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_platform_MetaData), NewProp_platform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_ue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_api,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_pluginversion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewProp_platform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFabApiVersion Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabApiVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabApiVersion",
	Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabApiVersion_Statics::PropPointers),
	sizeof(FFabApiVersion),
	alignof(FFabApiVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabApiVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabApiVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabApiVersion()
{
	if (!Z_Registration_Info_UScriptStruct_FFabApiVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFabApiVersion.InnerSingleton, Z_Construct_UScriptStruct_FFabApiVersion_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFabApiVersion.InnerSingleton);
}
// ********** End ScriptStruct FFabApiVersion ******************************************************

// ********** Begin ScriptStruct FFabFrontendSettings **********************************************
struct Z_Construct_UScriptStruct_FFabFrontendSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFabFrontendSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFabFrontendSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_preferredformat_MetaData[] = {
		{ "Comment", "// These two uproperties need to be in this case (NOT PascalCase)\n// otherwise we will break compatibility with the engine plugin \n// Fab's JS on the macOS WebKit WebBrowser plugin backend.\n" },
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
		{ "ToolTip", "These two uproperties need to be in this case (NOT PascalCase)\notherwise we will break compatibility with the engine plugin\nFab's JS on the macOS WebKit WebBrowser plugin backend." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_preferredquality_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFabFrontendSettings constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_preferredformat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_preferredquality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFabFrontendSettings constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabFrontendSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFabFrontendSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFabFrontendSettings;
class UScriptStruct* FFabFrontendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFabFrontendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFabFrontendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabFrontendSettings, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabFrontendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FFabFrontendSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FFabFrontendSettings Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_preferredformat = { "preferredformat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabFrontendSettings, preferredformat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_preferredformat_MetaData), NewProp_preferredformat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_preferredquality = { "preferredquality", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabFrontendSettings, preferredquality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_preferredquality_MetaData), NewProp_preferredquality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_preferredformat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewProp_preferredquality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFabFrontendSettings Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabFrontendSettings",
	Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::PropPointers),
	sizeof(FFabFrontendSettings),
	alignof(FFabFrontendSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabFrontendSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FFabFrontendSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFabFrontendSettings.InnerSingleton, Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFabFrontendSettings.InnerSingleton);
}
// ********** End ScriptStruct FFabFrontendSettings ************************************************

// ********** Begin Class UFabBrowserApi Function AddToProject *************************************
struct Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics
{
	struct FabBrowserApi_eventAddToProject_Parms
	{
		FString DownloadUrl;
		FFabAssetMetadata AssetMetadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddToProject constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadUrl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddToProject constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddToProject Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_DownloadUrl = { "DownloadUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventAddToProject_Parms, DownloadUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadUrl_MetaData), NewProp_DownloadUrl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_AssetMetadata = { "AssetMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventAddToProject_Parms, AssetMetadata), Z_Construct_UScriptStruct_FFabAssetMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMetadata_MetaData), NewProp_AssetMetadata_MetaData) }; // 2910424828
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_DownloadUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::NewProp_AssetMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers) < 2048);
// ********** End Function AddToProject Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "AddToProject", 	Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FabBrowserApi_eventAddToProject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FabBrowserApi_eventAddToProject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_AddToProject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_AddToProject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execAddToProject)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DownloadUrl);
	P_GET_STRUCT_REF(FFabAssetMetadata,Z_Param_Out_AssetMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToProject(Z_Param_DownloadUrl,Z_Param_Out_AssetMetadata);
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function AddToProject ***************************************

// ********** Begin Class UFabBrowserApi Function CopyToClipboard **********************************
struct Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics
{
	struct FabBrowserApi_eventCopyToClipboard_Parms
	{
		FString Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyToClipboard constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyToClipboard constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyToClipboard Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventCopyToClipboard_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers) < 2048);
// ********** End Function CopyToClipboard Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "CopyToClipboard", 	Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FabBrowserApi_eventCopyToClipboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FabBrowserApi_eventCopyToClipboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execCopyToClipboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyToClipboard(Z_Param_Content);
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function CopyToClipboard ************************************

// ********** Begin Class UFabBrowserApi Function DragStart ****************************************
struct Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics
{
	struct FabBrowserApi_eventDragStart_Parms
	{
		FFabAssetMetadata AssetMetadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DragStart constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DragStart constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DragStart Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::NewProp_AssetMetadata = { "AssetMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventDragStart_Parms, AssetMetadata), Z_Construct_UScriptStruct_FFabAssetMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMetadata_MetaData), NewProp_AssetMetadata_MetaData) }; // 2910424828
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::NewProp_AssetMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers) < 2048);
// ********** End Function DragStart Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "DragStart", 	Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FabBrowserApi_eventDragStart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FabBrowserApi_eventDragStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_DragStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_DragStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execDragStart)
{
	P_GET_STRUCT_REF(FFabAssetMetadata,Z_Param_Out_AssetMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DragStart(Z_Param_Out_AssetMetadata);
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function DragStart ******************************************

// ********** Begin Class UFabBrowserApi Function GetApiVersion ************************************
struct Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics
{
	struct FabBrowserApi_eventGetApiVersion_Parms
	{
		FFabApiVersion ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetApiVersion constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetApiVersion constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetApiVersion Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetApiVersion_Parms, ReturnValue), Z_Construct_UScriptStruct_FFabApiVersion, METADATA_PARAMS(0, nullptr) }; // 1207737244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers) < 2048);
// ********** End Function GetApiVersion Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetApiVersion", 	Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FabBrowserApi_eventGetApiVersion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FabBrowserApi_eventGetApiVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetApiVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetApiVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetApiVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFabApiVersion*)Z_Param__Result=UFabBrowserApi::GetApiVersion();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function GetApiVersion **************************************

// ********** Begin Class UFabBrowserApi Function GetAuthToken *************************************
struct Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics
{
	struct FabBrowserApi_eventGetAuthToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAuthToken constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAuthToken constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAuthToken Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetAuthToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers) < 2048);
// ********** End Function GetAuthToken Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetAuthToken", 	Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FabBrowserApi_eventGetAuthToken_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FabBrowserApi_eventGetAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetAuthToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAuthToken();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function GetAuthToken ***************************************

// ********** Begin Class UFabBrowserApi Function GetRefreshToken **********************************
struct Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics
{
	struct FabBrowserApi_eventGetRefreshToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRefreshToken constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRefreshToken constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRefreshToken Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetRefreshToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers) < 2048);
// ********** End Function GetRefreshToken Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetRefreshToken", 	Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FabBrowserApi_eventGetRefreshToken_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FabBrowserApi_eventGetRefreshToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetRefreshToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetRefreshToken();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function GetRefreshToken ************************************

// ********** Begin Class UFabBrowserApi Function GetSettings **************************************
struct Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics
{
	struct FabBrowserApi_eventGetSettings_Parms
	{
		FFabFrontendSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSettings constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSettings constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSettings Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FFabFrontendSettings, METADATA_PARAMS(0, nullptr) }; // 2700309942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers) < 2048);
// ********** End Function GetSettings Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetSettings", 	Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FabBrowserApi_eventGetSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FabBrowserApi_eventGetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFabFrontendSettings*)Z_Param__Result=P_THIS->GetSettings();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function GetSettings ****************************************

// ********** Begin Class UFabBrowserApi Function GetUrl *******************************************
struct Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics
{
	struct FabBrowserApi_eventGetUrl_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUrl constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUrl constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUrl Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers) < 2048);
// ********** End Function GetUrl Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "GetUrl", 	Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FabBrowserApi_eventGetUrl_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FabBrowserApi_eventGetUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_GetUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_GetUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execGetUrl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUrl();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function GetUrl *********************************************

// ********** Begin Class UFabBrowserApi Function Login ********************************************
struct Z_Construct_UFunction_UFabBrowserApi_Login_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Login constinit property declarations *********************************
// ********** End Function Login constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_Login_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "Login", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_Login_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFabBrowserApi_Login()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_Login_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execLogin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Login();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function Login **********************************************

// ********** Begin Class UFabBrowserApi Function Logout *******************************************
struct Z_Construct_UFunction_UFabBrowserApi_Logout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Logout constinit property declarations ********************************
// ********** End Function Logout constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "Logout", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFabBrowserApi_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execLogout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function Logout *********************************************

// ********** Begin Class UFabBrowserApi Function OnDragInfoFailure ********************************
struct Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics
{
	struct FabBrowserApi_eventOnDragInfoFailure_Parms
	{
		FString AssetId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDragInfoFailure constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDragInfoFailure constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDragInfoFailure Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOnDragInfoFailure_Parms, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::NewProp_AssetId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers) < 2048);
// ********** End Function OnDragInfoFailure Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OnDragInfoFailure", 	Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FabBrowserApi_eventOnDragInfoFailure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FabBrowserApi_eventOnDragInfoFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOnDragInfoFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragInfoFailure(Z_Param_AssetId);
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function OnDragInfoFailure **********************************

// ********** Begin Class UFabBrowserApi Function OnDragInfoSuccess ********************************
struct Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics
{
	struct FabBrowserApi_eventOnDragInfoSuccess_Parms
	{
		FString DownloadUrl;
		FFabAssetMetadata AssetMetadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDragInfoSuccess constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadUrl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDragInfoSuccess constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDragInfoSuccess Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_DownloadUrl = { "DownloadUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOnDragInfoSuccess_Parms, DownloadUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadUrl_MetaData), NewProp_DownloadUrl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_AssetMetadata = { "AssetMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOnDragInfoSuccess_Parms, AssetMetadata), Z_Construct_UScriptStruct_FFabAssetMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMetadata_MetaData), NewProp_AssetMetadata_MetaData) }; // 2910424828
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_DownloadUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::NewProp_AssetMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers) < 2048);
// ********** End Function OnDragInfoSuccess Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OnDragInfoSuccess", 	Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FabBrowserApi_eventOnDragInfoSuccess_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FabBrowserApi_eventOnDragInfoSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOnDragInfoSuccess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DownloadUrl);
	P_GET_STRUCT_REF(FFabAssetMetadata,Z_Param_Out_AssetMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragInfoSuccess(Z_Param_DownloadUrl,Z_Param_Out_AssetMetadata);
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function OnDragInfoSuccess **********************************

// ********** Begin Class UFabBrowserApi Function OpenPluginSettings *******************************
struct Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenPluginSettings constinit property declarations ********************
// ********** End Function OpenPluginSettings constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OpenPluginSettings", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOpenPluginSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenPluginSettings();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function OpenPluginSettings *********************************

// ********** Begin Class UFabBrowserApi Function OpenUrlInBrowser *********************************
struct Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics
{
	struct FabBrowserApi_eventOpenUrlInBrowser_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenUrlInBrowser constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenUrlInBrowser constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenUrlInBrowser Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventOpenUrlInBrowser_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers) < 2048);
// ********** End Function OpenUrlInBrowser Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "OpenUrlInBrowser", 	Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FabBrowserApi_eventOpenUrlInBrowser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FabBrowserApi_eventOpenUrlInBrowser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execOpenUrlInBrowser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenUrlInBrowser(Z_Param_Url);
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function OpenUrlInBrowser ***********************************

// ********** Begin Class UFabBrowserApi Function PluginOpened *************************************
struct Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PluginOpened constinit property declarations **************************
// ********** End Function PluginOpened constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "PluginOpened", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFabBrowserApi_PluginOpened()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_PluginOpened_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execPluginOpened)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PluginOpened();
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function PluginOpened ***************************************

// ********** Begin Class UFabBrowserApi Function SetPreferredQualityTier **************************
struct Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics
{
	struct FabBrowserApi_eventSetPreferredQualityTier_Parms
	{
		FString PreferredQuality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPreferredQualityTier constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPreferredQualityTier constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPreferredQualityTier Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::NewProp_PreferredQuality = { "PreferredQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabBrowserApi_eventSetPreferredQualityTier_Parms, PreferredQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredQuality_MetaData), NewProp_PreferredQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::NewProp_PreferredQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers) < 2048);
// ********** End Function SetPreferredQualityTier Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabBrowserApi, nullptr, "SetPreferredQualityTier", 	Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FabBrowserApi_eventSetPreferredQualityTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FabBrowserApi_eventSetPreferredQualityTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabBrowserApi::execSetPreferredQualityTier)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PreferredQuality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPreferredQualityTier(Z_Param_PreferredQuality);
	P_NATIVE_END;
}
// ********** End Class UFabBrowserApi Function SetPreferredQualityTier ****************************

// ********** Begin Class UFabBrowserApi ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFabBrowserApi;
UClass* UFabBrowserApi::GetPrivateStaticClass()
{
	using TClass = UFabBrowserApi;
	if (!Z_Registration_Info_UClass_UFabBrowserApi.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FabBrowserApi"),
			Z_Registration_Info_UClass_UFabBrowserApi.InnerSingleton,
			StaticRegisterNativesUFabBrowserApi,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFabBrowserApi.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabBrowserApi_NoRegister()
{
	return UFabBrowserApi::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabBrowserApi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabBrowserApi.h" },
		{ "ModuleRelativePath", "Private/FabBrowserApi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFabBrowserApi constinit property declarations ***************************
// ********** End Class UFabBrowserApi constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddToProject"), .Pointer = &UFabBrowserApi::execAddToProject },
		{ .NameUTF8 = UTF8TEXT("CopyToClipboard"), .Pointer = &UFabBrowserApi::execCopyToClipboard },
		{ .NameUTF8 = UTF8TEXT("DragStart"), .Pointer = &UFabBrowserApi::execDragStart },
		{ .NameUTF8 = UTF8TEXT("GetApiVersion"), .Pointer = &UFabBrowserApi::execGetApiVersion },
		{ .NameUTF8 = UTF8TEXT("GetAuthToken"), .Pointer = &UFabBrowserApi::execGetAuthToken },
		{ .NameUTF8 = UTF8TEXT("GetRefreshToken"), .Pointer = &UFabBrowserApi::execGetRefreshToken },
		{ .NameUTF8 = UTF8TEXT("GetSettings"), .Pointer = &UFabBrowserApi::execGetSettings },
		{ .NameUTF8 = UTF8TEXT("GetUrl"), .Pointer = &UFabBrowserApi::execGetUrl },
		{ .NameUTF8 = UTF8TEXT("Login"), .Pointer = &UFabBrowserApi::execLogin },
		{ .NameUTF8 = UTF8TEXT("Logout"), .Pointer = &UFabBrowserApi::execLogout },
		{ .NameUTF8 = UTF8TEXT("OnDragInfoFailure"), .Pointer = &UFabBrowserApi::execOnDragInfoFailure },
		{ .NameUTF8 = UTF8TEXT("OnDragInfoSuccess"), .Pointer = &UFabBrowserApi::execOnDragInfoSuccess },
		{ .NameUTF8 = UTF8TEXT("OpenPluginSettings"), .Pointer = &UFabBrowserApi::execOpenPluginSettings },
		{ .NameUTF8 = UTF8TEXT("OpenUrlInBrowser"), .Pointer = &UFabBrowserApi::execOpenUrlInBrowser },
		{ .NameUTF8 = UTF8TEXT("PluginOpened"), .Pointer = &UFabBrowserApi::execPluginOpened },
		{ .NameUTF8 = UTF8TEXT("SetPreferredQualityTier"), .Pointer = &UFabBrowserApi::execSetPreferredQualityTier },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFabBrowserApi_AddToProject, "AddToProject" }, // 3050277917
		{ &Z_Construct_UFunction_UFabBrowserApi_CopyToClipboard, "CopyToClipboard" }, // 1282916756
		{ &Z_Construct_UFunction_UFabBrowserApi_DragStart, "DragStart" }, // 701721195
		{ &Z_Construct_UFunction_UFabBrowserApi_GetApiVersion, "GetApiVersion" }, // 3354786386
		{ &Z_Construct_UFunction_UFabBrowserApi_GetAuthToken, "GetAuthToken" }, // 528038036
		{ &Z_Construct_UFunction_UFabBrowserApi_GetRefreshToken, "GetRefreshToken" }, // 8339921
		{ &Z_Construct_UFunction_UFabBrowserApi_GetSettings, "GetSettings" }, // 2316520348
		{ &Z_Construct_UFunction_UFabBrowserApi_GetUrl, "GetUrl" }, // 1816682881
		{ &Z_Construct_UFunction_UFabBrowserApi_Login, "Login" }, // 133306297
		{ &Z_Construct_UFunction_UFabBrowserApi_Logout, "Logout" }, // 1451237523
		{ &Z_Construct_UFunction_UFabBrowserApi_OnDragInfoFailure, "OnDragInfoFailure" }, // 2691445027
		{ &Z_Construct_UFunction_UFabBrowserApi_OnDragInfoSuccess, "OnDragInfoSuccess" }, // 3453404452
		{ &Z_Construct_UFunction_UFabBrowserApi_OpenPluginSettings, "OpenPluginSettings" }, // 768933029
		{ &Z_Construct_UFunction_UFabBrowserApi_OpenUrlInBrowser, "OpenUrlInBrowser" }, // 2101268234
		{ &Z_Construct_UFunction_UFabBrowserApi_PluginOpened, "PluginOpened" }, // 3243471870
		{ &Z_Construct_UFunction_UFabBrowserApi_SetPreferredQualityTier, "SetPreferredQualityTier" }, // 506218346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabBrowserApi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFabBrowserApi_Statics
UObject* (*const Z_Construct_UClass_UFabBrowserApi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabBrowserApi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabBrowserApi_Statics::ClassParams = {
	&UFabBrowserApi::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabBrowserApi_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabBrowserApi_Statics::Class_MetaDataParams)
};
void UFabBrowserApi::StaticRegisterNativesUFabBrowserApi()
{
	UClass* Class = UFabBrowserApi::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFabBrowserApi_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFabBrowserApi()
{
	if (!Z_Registration_Info_UClass_UFabBrowserApi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabBrowserApi.OuterSingleton, Z_Construct_UClass_UFabBrowserApi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabBrowserApi.OuterSingleton;
}
UFabBrowserApi::UFabBrowserApi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFabBrowserApi);
UFabBrowserApi::~UFabBrowserApi() {}
// ********** End Class UFabBrowserApi *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h__Script_Fab_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFabApiVersion::StaticStruct, Z_Construct_UScriptStruct_FFabApiVersion_Statics::NewStructOps, TEXT("FabApiVersion"),&Z_Registration_Info_UScriptStruct_FFabApiVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabApiVersion), 1207737244U) },
		{ FFabFrontendSettings::StaticStruct, Z_Construct_UScriptStruct_FFabFrontendSettings_Statics::NewStructOps, TEXT("FabFrontendSettings"),&Z_Registration_Info_UScriptStruct_FFabFrontendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabFrontendSettings), 2700309942U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabBrowserApi, UFabBrowserApi::StaticClass, TEXT("UFabBrowserApi"), &Z_Registration_Info_UClass_UFabBrowserApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabBrowserApi), 3154440U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h__Script_Fab_9658830{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h__Script_Fab_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h__Script_Fab_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h__Script_Fab_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
