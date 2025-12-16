// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FabBrowser.h"
#include "FabBrowserApi.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFabBrowser() {}

// ********** Begin Cross Module References ********************************************************
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabAnalyticsEventValue();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabAnalyticsPayload();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FFabApiVersion();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFabAnalyticsEventValue *******************************************
struct Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFabAnalyticsEventValue); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFabAnalyticsEventValue); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFabAnalyticsEventValue constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApiVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFabAnalyticsEventValue constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabAnalyticsEventValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue;
class UScriptStruct* FFabAnalyticsEventValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabAnalyticsEventValue, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabAnalyticsEventValue"));
	}
	return Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue.OuterSingleton;
	}

// ********** Begin ScriptStruct FFabAnalyticsEventValue Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsEventValue, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::NewProp_ApiVersion = { "ApiVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsEventValue, ApiVersion), Z_Construct_UScriptStruct_FFabApiVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiVersion_MetaData), NewProp_ApiVersion_MetaData) }; // 1207737244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::NewProp_ApiVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFabAnalyticsEventValue Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabAnalyticsEventValue",
	Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::PropPointers),
	sizeof(FFabAnalyticsEventValue),
	alignof(FFabAnalyticsEventValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabAnalyticsEventValue()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue.InnerSingleton, Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue.InnerSingleton);
}
// ********** End ScriptStruct FFabAnalyticsEventValue *********************************************

// ********** Begin ScriptStruct FFabAnalyticsPayload **********************************************
struct Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFabAnalyticsPayload); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFabAnalyticsPayload); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventCategory_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventAction_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventLabel_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabBrowser.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFabAnalyticsPayload constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventAction;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventLabel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFabAnalyticsPayload constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabAnalyticsPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload;
class UScriptStruct* FFabAnalyticsPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabAnalyticsPayload, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("FabAnalyticsPayload"));
	}
	return Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload.OuterSingleton;
	}

// ********** Begin ScriptStruct FFabAnalyticsPayload Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsPayload, InteractionType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionType_MetaData), NewProp_InteractionType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventCategory = { "EventCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsPayload, EventCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventCategory_MetaData), NewProp_EventCategory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventAction = { "EventAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsPayload, EventAction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventAction_MetaData), NewProp_EventAction_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventLabel = { "EventLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsPayload, EventLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventLabel_MetaData), NewProp_EventLabel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsPayload, EventType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventType_MetaData), NewProp_EventType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventValue = { "EventValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAnalyticsPayload, EventValue), Z_Construct_UScriptStruct_FFabAnalyticsEventValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventValue_MetaData), NewProp_EventValue_MetaData) }; // 2648047689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewProp_EventValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFabAnalyticsPayload Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"FabAnalyticsPayload",
	Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::PropPointers),
	sizeof(FFabAnalyticsPayload),
	alignof(FFabAnalyticsPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabAnalyticsPayload()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload.InnerSingleton, Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload.InnerSingleton);
}
// ********** End ScriptStruct FFabAnalyticsPayload ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowser_h__Script_Fab_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFabAnalyticsEventValue::StaticStruct, Z_Construct_UScriptStruct_FFabAnalyticsEventValue_Statics::NewStructOps, TEXT("FabAnalyticsEventValue"),&Z_Registration_Info_UScriptStruct_FFabAnalyticsEventValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabAnalyticsEventValue), 2648047689U) },
		{ FFabAnalyticsPayload::StaticStruct, Z_Construct_UScriptStruct_FFabAnalyticsPayload_Statics::NewStructOps, TEXT("FabAnalyticsPayload"),&Z_Registration_Info_UScriptStruct_FFabAnalyticsPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabAnalyticsPayload), 3996008862U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowser_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowser_h__Script_Fab_188033805{
	TEXT("/Script/Fab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowser_h__Script_Fab_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowser_h__Script_Fab_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
