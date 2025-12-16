// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FabSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFabSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
FAB_API UClass* Z_Construct_UClass_UFabSettings();
FAB_API UClass* Z_Construct_UClass_UFabSettings_NoRegister();
FAB_API UEnum* Z_Construct_UEnum_Fab_EFabEnvironment();
FAB_API UEnum* Z_Construct_UEnum_Fab_EFabPreferredFormats();
FAB_API UEnum* Z_Construct_UEnum_Fab_EFabPreferredQualityTier();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFabEnvironment ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFabEnvironment;
static UEnum* EFabEnvironment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFabEnvironment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFabEnvironment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Fab_EFabEnvironment, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EFabEnvironment"));
	}
	return Z_Registration_Info_UEnum_EFabEnvironment.OuterSingleton;
}
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EFabEnvironment>()
{
	return EFabEnvironment_StaticEnum();
}
struct Z_Construct_UEnum_Fab_EFabEnvironment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CustomUrl.DisplayName", "Custom URL" },
		{ "CustomUrl.Name", "EFabEnvironment::CustomUrl" },
		{ "Gamedev.DisplayName", "Gamedev" },
		{ "Gamedev.Name", "EFabEnvironment::Gamedev" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "Prod.DisplayName", "Prod" },
		{ "Prod.Name", "EFabEnvironment::Prod" },
		{ "Test.DisplayName", "Test" },
		{ "Test.Name", "EFabEnvironment::Test" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFabEnvironment::Prod", (int64)EFabEnvironment::Prod },
		{ "EFabEnvironment::Gamedev", (int64)EFabEnvironment::Gamedev },
		{ "EFabEnvironment::Test", (int64)EFabEnvironment::Test },
		{ "EFabEnvironment::CustomUrl", (int64)EFabEnvironment::CustomUrl },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Fab_EFabEnvironment_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Fab_EFabEnvironment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	"EFabEnvironment",
	"EFabEnvironment",
	Z_Construct_UEnum_Fab_EFabEnvironment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EFabEnvironment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EFabEnvironment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Fab_EFabEnvironment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Fab_EFabEnvironment()
{
	if (!Z_Registration_Info_UEnum_EFabEnvironment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFabEnvironment.InnerSingleton, Z_Construct_UEnum_Fab_EFabEnvironment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFabEnvironment.InnerSingleton;
}
// ********** End Enum EFabEnvironment *************************************************************

// ********** Begin Enum EFabPreferredFormats ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFabPreferredFormats;
static UEnum* EFabPreferredFormats_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFabPreferredFormats.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFabPreferredFormats.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Fab_EFabPreferredFormats, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EFabPreferredFormats"));
	}
	return Z_Registration_Info_UEnum_EFabPreferredFormats.OuterSingleton;
}
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EFabPreferredFormats>()
{
	return EFabPreferredFormats_StaticEnum();
}
struct Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FBX.DisplayName", "fbx" },
		{ "FBX.Name", "EFabPreferredFormats::FBX" },
		{ "GLTF.DisplayName", "gltf / glb" },
		{ "GLTF.Name", "EFabPreferredFormats::GLTF" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFabPreferredFormats::GLTF", (int64)EFabPreferredFormats::GLTF },
		{ "EFabPreferredFormats::FBX", (int64)EFabPreferredFormats::FBX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	"EFabPreferredFormats",
	"EFabPreferredFormats",
	Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Fab_EFabPreferredFormats()
{
	if (!Z_Registration_Info_UEnum_EFabPreferredFormats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFabPreferredFormats.InnerSingleton, Z_Construct_UEnum_Fab_EFabPreferredFormats_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFabPreferredFormats.InnerSingleton;
}
// ********** End Enum EFabPreferredFormats ********************************************************

// ********** Begin Enum EFabPreferredQualityTier **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFabPreferredQualityTier;
static UEnum* EFabPreferredQualityTier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFabPreferredQualityTier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFabPreferredQualityTier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Fab_EFabPreferredQualityTier, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EFabPreferredQualityTier"));
	}
	return Z_Registration_Info_UEnum_EFabPreferredQualityTier.OuterSingleton;
}
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EFabPreferredQualityTier>()
{
	return EFabPreferredQualityTier_StaticEnum();
}
struct Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.DisplayName", "high" },
		{ "High.Name", "EFabPreferredQualityTier::High" },
		{ "Low.DisplayName", "low" },
		{ "Low.Name", "EFabPreferredQualityTier::Low" },
		{ "Medium.DisplayName", "medium" },
		{ "Medium.Name", "EFabPreferredQualityTier::Medium" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "Raw.DisplayName", "raw" },
		{ "Raw.Name", "EFabPreferredQualityTier::Raw" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFabPreferredQualityTier::Low", (int64)EFabPreferredQualityTier::Low },
		{ "EFabPreferredQualityTier::Medium", (int64)EFabPreferredQualityTier::Medium },
		{ "EFabPreferredQualityTier::High", (int64)EFabPreferredQualityTier::High },
		{ "EFabPreferredQualityTier::Raw", (int64)EFabPreferredQualityTier::Raw },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	"EFabPreferredQualityTier",
	"EFabPreferredQualityTier",
	Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Fab_EFabPreferredQualityTier()
{
	if (!Z_Registration_Info_UEnum_EFabPreferredQualityTier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFabPreferredQualityTier.InnerSingleton, Z_Construct_UEnum_Fab_EFabPreferredQualityTier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFabPreferredQualityTier.InnerSingleton;
}
// ********** End Enum EFabPreferredQualityTier ****************************************************

// ********** Begin Class UFabSettings *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFabSettings;
UClass* UFabSettings::GetPrivateStaticClass()
{
	using TClass = UFabSettings;
	if (!Z_Registration_Info_UClass_UFabSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FabSettings"),
			Z_Registration_Info_UClass_UFabSettings.InnerSingleton,
			StaticRegisterNativesUFabSettings,
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
	return Z_Registration_Info_UClass_UFabSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabSettings_NoRegister()
{
	return UFabSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "HiddenProperties" },
		{ "IncludePath", "FabSettings.h" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Environment_MetaData[] = {
		{ "Category", "Frontend" },
		{ "Comment", "/** Frontend used by the Fab plugin (reopen the tab to see the change) */" },
		{ "DevOnly", "TRUE" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "Frontend used by the Fab plugin (reopen the tab to see the change)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomUrl_MetaData[] = {
		{ "Category", "Frontend" },
		{ "Comment", "/** URL used when the [Fab (custom)] frontend is selected */" },
		{ "DevOnly", "TRUE" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "URL used when the [Fab (custom)] frontend is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomAuthToken_MetaData[] = {
		{ "Category", "Frontend" },
		{ "Comment", "/** Custom auth token used when it's non empty */" },
		{ "DevOnly", "TRUE" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "Custom auth token used when it's non empty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugOptions_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable chrome debug options - default is false */" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "Enable chrome debug options - default is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheDirectoryPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Path to the local library */" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "Path to the local library" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheDirectorySize_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Cache directory */" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "Cache directory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductFormatsSectionSubText_MetaData[] = {
		{ "Category", "ProductFormats" },
		{ "Comment", "/* The preferred format will always be selected, if not available, the best available format for the product will be chosen. */" },
		{ "DevOnly", "TRUE" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "The preferred format will always be selected, if not available, the best available format for the product will be chosen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredDefaultFormat_MetaData[] = {
		{ "Category", "ProductFormats" },
		{ "Comment", "/** Preferred default format */" },
		{ "DevOnly", "TRUE" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "Preferred default format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredQualityTier_MetaData[] = {
		{ "Category", "Megascans" },
		{ "Comment", "/** Preferred default quality for MS assets */" },
		{ "ModuleRelativePath", "Private/FabSettings.h" },
		{ "ToolTip", "Preferred default quality for MS assets" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFabSettings constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Environment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Environment;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomAuthToken;
	static void NewProp_bEnableDebugOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheDirectoryPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CacheDirectorySize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductFormatsSectionSubText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreferredDefaultFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreferredDefaultFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreferredQualityTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreferredQualityTier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFabSettings constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFabSettings_Statics

// ********** Begin Class UFabSettings Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_Environment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_Environment = { "Environment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, Environment), Z_Construct_UEnum_Fab_EFabEnvironment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Environment_MetaData), NewProp_Environment_MetaData) }; // 4288601575
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_CustomUrl = { "CustomUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, CustomUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomUrl_MetaData), NewProp_CustomUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_CustomAuthToken = { "CustomAuthToken", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, CustomAuthToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomAuthToken_MetaData), NewProp_CustomAuthToken_MetaData) };
void Z_Construct_UClass_UFabSettings_Statics::NewProp_bEnableDebugOptions_SetBit(void* Obj)
{
	((UFabSettings*)Obj)->bEnableDebugOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_bEnableDebugOptions = { "bEnableDebugOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFabSettings), &Z_Construct_UClass_UFabSettings_Statics::NewProp_bEnableDebugOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugOptions_MetaData), NewProp_bEnableDebugOptions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_CacheDirectoryPath = { "CacheDirectoryPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, CacheDirectoryPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheDirectoryPath_MetaData), NewProp_CacheDirectoryPath_MetaData) }; // 1225349189
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_CacheDirectorySize = { "CacheDirectorySize", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, CacheDirectorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheDirectorySize_MetaData), NewProp_CacheDirectorySize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_ProductFormatsSectionSubText = { "ProductFormatsSectionSubText", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, ProductFormatsSectionSubText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductFormatsSectionSubText_MetaData), NewProp_ProductFormatsSectionSubText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredDefaultFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredDefaultFormat = { "PreferredDefaultFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, PreferredDefaultFormat), Z_Construct_UEnum_Fab_EFabPreferredFormats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredDefaultFormat_MetaData), NewProp_PreferredDefaultFormat_MetaData) }; // 2168297387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredQualityTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredQualityTier = { "PreferredQualityTier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabSettings, PreferredQualityTier), Z_Construct_UEnum_Fab_EFabPreferredQualityTier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredQualityTier_MetaData), NewProp_PreferredQualityTier_MetaData) }; // 3473817695
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFabSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_Environment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_Environment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_CustomUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_CustomAuthToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_bEnableDebugOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_CacheDirectoryPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_CacheDirectorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_ProductFormatsSectionSubText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredDefaultFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredDefaultFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredQualityTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabSettings_Statics::NewProp_PreferredQualityTier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabSettings_Statics::PropPointers) < 2048);
// ********** End Class UFabSettings Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UFabSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabSettings_Statics::ClassParams = {
	&UFabSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFabSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFabSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabSettings_Statics::Class_MetaDataParams)
};
void UFabSettings::StaticRegisterNativesUFabSettings()
{
}
UClass* Z_Construct_UClass_UFabSettings()
{
	if (!Z_Registration_Info_UClass_UFabSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabSettings.OuterSingleton, Z_Construct_UClass_UFabSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFabSettings);
UFabSettings::~UFabSettings() {}
// ********** End Class UFabSettings ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h__Script_Fab_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFabEnvironment_StaticEnum, TEXT("EFabEnvironment"), &Z_Registration_Info_UEnum_EFabEnvironment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4288601575U) },
		{ EFabPreferredFormats_StaticEnum, TEXT("EFabPreferredFormats"), &Z_Registration_Info_UEnum_EFabPreferredFormats, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2168297387U) },
		{ EFabPreferredQualityTier_StaticEnum, TEXT("EFabPreferredQualityTier"), &Z_Registration_Info_UEnum_EFabPreferredQualityTier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3473817695U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabSettings, UFabSettings::StaticClass, TEXT("UFabSettings"), &Z_Registration_Info_UClass_UFabSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabSettings), 1615303887U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h__Script_Fab_16118437{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h__Script_Fab_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h__Script_Fab_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h__Script_Fab_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
