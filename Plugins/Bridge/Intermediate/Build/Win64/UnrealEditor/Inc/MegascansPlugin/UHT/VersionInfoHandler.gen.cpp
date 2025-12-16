// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utilities/VersionInfoHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVersionInfoHandler() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UVersionInfoHandler();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UVersionInfoHandler_NoRegister();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAssetImportTime();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAssetInfo();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FImportTimeData();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVersionData();
UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAssetInfo ********************************************************
struct Z_Construct_UScriptStruct_FAssetInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAssetInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAssetInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAssetInfo constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAssetInfo constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAssetInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetInfo;
class UScriptStruct* FAssetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("AssetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FAssetInfo Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetInfo, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetInfo, version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_version_MetaData), NewProp_version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAssetInfo Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"AssetInfo",
	Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers),
	sizeof(FAssetInfo),
	alignof(FAssetInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetInfo.InnerSingleton, Z_Construct_UScriptStruct_FAssetInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAssetInfo.InnerSingleton);
}
// ********** End ScriptStruct FAssetInfo **********************************************************

// ********** Begin ScriptStruct FVersionData ******************************************************
struct Z_Construct_UScriptStruct_FVersionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FVersionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FVersionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FVersionData constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FVersionData constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FVersionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVersionData;
class UScriptStruct* FVersionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVersionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVersionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersionData, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("VersionData"));
	}
	return Z_Registration_Info_UScriptStruct_FVersionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FVersionData Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets_Inner = { "assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetInfo, METADATA_PARAMS(0, nullptr) }; // 39629016
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets = { "assets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionData, assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assets_MetaData), NewProp_assets_MetaData) }; // 39629016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FVersionData Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"VersionData",
	Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers),
	sizeof(FVersionData),
	alignof(FVersionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVersionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVersionData()
{
	if (!Z_Registration_Info_UScriptStruct_FVersionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVersionData.InnerSingleton, Z_Construct_UScriptStruct_FVersionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FVersionData.InnerSingleton);
}
// ********** End ScriptStruct FVersionData ********************************************************

// ********** Begin ScriptStruct FAssetImportTime **************************************************
struct Z_Construct_UScriptStruct_FAssetImportTime_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAssetImportTime); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAssetImportTime); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAssetImportTime constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAssetImportTime constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetImportTime>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAssetImportTime_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetImportTime;
class UScriptStruct* FAssetImportTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetImportTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetImportTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetImportTime, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("AssetImportTime"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetImportTime.OuterSingleton;
	}

// ********** Begin ScriptStruct FAssetImportTime Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetImportTime, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetImportTime, time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_time_MetaData), NewProp_time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAssetImportTime Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetImportTime_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"AssetImportTime",
	Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers),
	sizeof(FAssetImportTime),
	alignof(FAssetImportTime),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetImportTime_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetImportTime()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetImportTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetImportTime.InnerSingleton, Z_Construct_UScriptStruct_FAssetImportTime_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAssetImportTime.InnerSingleton);
}
// ********** End ScriptStruct FAssetImportTime ****************************************************

// ********** Begin ScriptStruct FImportTimeData ***************************************************
struct Z_Construct_UScriptStruct_FImportTimeData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FImportTimeData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FImportTimeData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FImportTimeData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FImportTimeData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportTimeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FImportTimeData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FImportTimeData;
class UScriptStruct* FImportTimeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FImportTimeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FImportTimeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportTimeData, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("ImportTimeData"));
	}
	return Z_Registration_Info_UScriptStruct_FImportTimeData.OuterSingleton;
	}

// ********** Begin ScriptStruct FImportTimeData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets_Inner = { "assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetImportTime, METADATA_PARAMS(0, nullptr) }; // 3974108911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets = { "assets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportTimeData, assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assets_MetaData), NewProp_assets_MetaData) }; // 3974108911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FImportTimeData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportTimeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"ImportTimeData",
	Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers),
	sizeof(FImportTimeData),
	alignof(FImportTimeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportTimeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImportTimeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImportTimeData()
{
	if (!Z_Registration_Info_UScriptStruct_FImportTimeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FImportTimeData.InnerSingleton, Z_Construct_UScriptStruct_FImportTimeData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FImportTimeData.InnerSingleton);
}
// ********** End ScriptStruct FImportTimeData *****************************************************

// ********** Begin Class UVersionInfoHandler Function Get *****************************************
struct Z_Construct_UFunction_UVersionInfoHandler_Get_Statics
{
	struct VersionInfoHandler_eventGet_Parms
	{
		UVersionInfoHandler* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersionInfoHandler_eventGet_Parms, ReturnValue), Z_Construct_UClass_UVersionInfoHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVersionInfoHandler, nullptr, "Get", 	Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::VersionInfoHandler_eventGet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::VersionInfoHandler_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVersionInfoHandler_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVersionInfoHandler::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVersionInfoHandler**)Z_Param__Result=UVersionInfoHandler::Get();
	P_NATIVE_END;
}
// ********** End Class UVersionInfoHandler Function Get *******************************************

// ********** Begin Class UVersionInfoHandler ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UVersionInfoHandler;
UClass* UVersionInfoHandler::GetPrivateStaticClass()
{
	using TClass = UVersionInfoHandler;
	if (!Z_Registration_Info_UClass_UVersionInfoHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VersionInfoHandler"),
			Z_Registration_Info_UClass_UVersionInfoHandler.InnerSingleton,
			StaticRegisterNativesUVersionInfoHandler,
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
	return Z_Registration_Info_UClass_UVersionInfoHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UVersionInfoHandler_NoRegister()
{
	return UVersionInfoHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVersionInfoHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utilities/VersionInfoHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonVersionData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UVersionInfoHandler constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonVersionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UVersionInfoHandler constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &UVersionInfoHandler::execGet },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVersionInfoHandler_Get, "Get" }, // 1700919026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVersionInfoHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UVersionInfoHandler_Statics

// ********** Begin Class UVersionInfoHandler Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVersionInfoHandler_Statics::NewProp_CommonVersionData = { "CommonVersionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersionInfoHandler, CommonVersionData), Z_Construct_UScriptStruct_FVersionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonVersionData_MetaData), NewProp_CommonVersionData_MetaData) }; // 3821656603
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVersionInfoHandler_Statics::NewProp_CommonVersionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers) < 2048);
// ********** End Class UVersionInfoHandler Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UVersionInfoHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVersionInfoHandler_Statics::ClassParams = {
	&UVersionInfoHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVersionInfoHandler_Statics::Class_MetaDataParams)
};
void UVersionInfoHandler::StaticRegisterNativesUVersionInfoHandler()
{
	UClass* Class = UVersionInfoHandler::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UVersionInfoHandler_Statics::Funcs));
}
UClass* Z_Construct_UClass_UVersionInfoHandler()
{
	if (!Z_Registration_Info_UClass_UVersionInfoHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVersionInfoHandler.OuterSingleton, Z_Construct_UClass_UVersionInfoHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVersionInfoHandler.OuterSingleton;
}
UVersionInfoHandler::UVersionInfoHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UVersionInfoHandler);
UVersionInfoHandler::~UVersionInfoHandler() {}
// ********** End Class UVersionInfoHandler ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h__Script_MegascansPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetInfo::StaticStruct, Z_Construct_UScriptStruct_FAssetInfo_Statics::NewStructOps, TEXT("AssetInfo"),&Z_Registration_Info_UScriptStruct_FAssetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetInfo), 39629016U) },
		{ FVersionData::StaticStruct, Z_Construct_UScriptStruct_FVersionData_Statics::NewStructOps, TEXT("VersionData"),&Z_Registration_Info_UScriptStruct_FVersionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersionData), 3821656603U) },
		{ FAssetImportTime::StaticStruct, Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewStructOps, TEXT("AssetImportTime"),&Z_Registration_Info_UScriptStruct_FAssetImportTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetImportTime), 3974108911U) },
		{ FImportTimeData::StaticStruct, Z_Construct_UScriptStruct_FImportTimeData_Statics::NewStructOps, TEXT("ImportTimeData"),&Z_Registration_Info_UScriptStruct_FImportTimeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportTimeData), 1629116016U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVersionInfoHandler, UVersionInfoHandler::StaticClass, TEXT("UVersionInfoHandler"), &Z_Registration_Info_UClass_UVersionInfoHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVersionInfoHandler), 1277970599U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h__Script_MegascansPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h__Script_MegascansPlugin_2299855385{
	TEXT("/Script/MegascansPlugin"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h__Script_MegascansPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h__Script_MegascansPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h__Script_MegascansPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h__Script_MegascansPlugin_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
