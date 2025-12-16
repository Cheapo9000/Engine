// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMSSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialAssetSettings();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialAssetSettings_NoRegister();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialBlendSettings();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialBlendSettings_NoRegister();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialPresetsSettings();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialPresetsSettings_NoRegister();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMegascansSettings();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMegascansSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMegascansSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMegascansSettings;
UClass* UMegascansSettings::GetPrivateStaticClass()
{
	using TClass = UMegascansSettings;
	if (!Z_Registration_Info_UClass_UMegascansSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MegascansSettings"),
			Z_Registration_Info_UClass_UMegascansSettings.InnerSingleton,
			StaticRegisterNativesUMegascansSettings,
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
	return Z_Registration_Info_UClass_UMegascansSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMegascansSettings_NoRegister()
{
	return UMegascansSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMegascansSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateFoliage_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Populate Foliage Editor with Foliage Types for 3D Plants. */" },
		{ "DisplayName", "Auto-Populate Foliage Painter" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Populate Foliage Editor with Foliage Types for 3D Plants." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToSelection_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Apply imported Surface on selected Actors in Editor. */" },
		{ "DisplayName", "Apply to Selection" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Apply imported Surface on selected Actors in Editor." },
	};
#endif // WITH_METADATA

// ********** Begin Class UMegascansSettings constinit property declarations ***********************
	static void NewProp_bCreateFoliage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateFoliage;
	static void NewProp_bApplyToSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMegascansSettings constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMegascansSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMegascansSettings_Statics

// ********** Begin Class UMegascansSettings Property Definitions **********************************
void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_SetBit(void* Obj)
{
	((UMegascansSettings*)Obj)->bCreateFoliage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage = { "bCreateFoliage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateFoliage_MetaData), NewProp_bCreateFoliage_MetaData) };
void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_SetBit(void* Obj)
{
	((UMegascansSettings*)Obj)->bApplyToSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection = { "bApplyToSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyToSelection_MetaData), NewProp_bApplyToSelection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMegascansSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::PropPointers) < 2048);
// ********** End Class UMegascansSettings Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UMegascansSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMegascansSettings_Statics::ClassParams = {
	&UMegascansSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMegascansSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams)
};
void UMegascansSettings::StaticRegisterNativesUMegascansSettings()
{
}
UClass* Z_Construct_UClass_UMegascansSettings()
{
	if (!Z_Registration_Info_UClass_UMegascansSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMegascansSettings.OuterSingleton, Z_Construct_UClass_UMegascansSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMegascansSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMegascansSettings);
UMegascansSettings::~UMegascansSettings() {}
// ********** End Class UMegascansSettings *********************************************************

// ********** Begin Class UMaterialBlendSettings ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialBlendSettings;
UClass* UMaterialBlendSettings::GetPrivateStaticClass()
{
	using TClass = UMaterialBlendSettings;
	if (!Z_Registration_Info_UClass_UMaterialBlendSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MaterialBlendSettings"),
			Z_Registration_Info_UClass_UMaterialBlendSettings.InnerSingleton,
			StaticRegisterNativesUMaterialBlendSettings,
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
	return Z_Registration_Info_UClass_UMaterialBlendSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialBlendSettings_NoRegister()
{
	return UMaterialBlendSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialBlendSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendedMaterialName_MetaData[] = {
		{ "Category", "MaterialBlendSettings" },
		{ "Comment", "/** Package name for Material Blend instance. */" },
		{ "DisplayName", "Material Name" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Package name for Material Blend instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendedMaterialPath_MetaData[] = {
		{ "Category", "MaterialBlendSettings" },
		{ "Comment", "/** Destination path for Material Blend instance. */" },
		{ "ContentDir", "" },
		{ "DisplayName", "Destination Path" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Destination path for Material Blend instance." },
	};
#endif // WITH_METADATA

// ********** Begin Class UMaterialBlendSettings constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlendedMaterialName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendedMaterialPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMaterialBlendSettings constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialBlendSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMaterialBlendSettings_Statics

// ********** Begin Class UMaterialBlendSettings Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName = { "BlendedMaterialName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialBlendSettings, BlendedMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendedMaterialName_MetaData), NewProp_BlendedMaterialName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath = { "BlendedMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialBlendSettings, BlendedMaterialPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendedMaterialPath_MetaData), NewProp_BlendedMaterialPath_MetaData) }; // 1225349189
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers) < 2048);
// ********** End Class UMaterialBlendSettings Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UMaterialBlendSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialBlendSettings_Statics::ClassParams = {
	&UMaterialBlendSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams)
};
void UMaterialBlendSettings::StaticRegisterNativesUMaterialBlendSettings()
{
}
UClass* Z_Construct_UClass_UMaterialBlendSettings()
{
	if (!Z_Registration_Info_UClass_UMaterialBlendSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialBlendSettings.OuterSingleton, Z_Construct_UClass_UMaterialBlendSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialBlendSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMaterialBlendSettings);
UMaterialBlendSettings::~UMaterialBlendSettings() {}
// ********** End Class UMaterialBlendSettings *****************************************************

// ********** Begin Class UMaterialAssetSettings ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialAssetSettings;
UClass* UMaterialAssetSettings::GetPrivateStaticClass()
{
	using TClass = UMaterialAssetSettings;
	if (!Z_Registration_Info_UClass_UMaterialAssetSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MaterialAssetSettings"),
			Z_Registration_Info_UClass_UMaterialAssetSettings.InnerSingleton,
			StaticRegisterNativesUMaterialAssetSettings,
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
	return Z_Registration_Info_UClass_UMaterialAssetSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialAssetSettings_NoRegister()
{
	return UMaterialAssetSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialAssetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial3d_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "3D Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialSurface_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "Surface Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialPlant_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "Plant Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMaterialAssetSettings constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterMaterial3d;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterMaterialSurface;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterMaterialPlant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMaterialAssetSettings constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialAssetSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMaterialAssetSettings_Statics

// ********** Begin Class UMaterialAssetSettings Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d = { "MasterMaterial3d", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterial3d), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterMaterial3d_MetaData), NewProp_MasterMaterial3d_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface = { "MasterMaterialSurface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterialSurface), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterMaterialSurface_MetaData), NewProp_MasterMaterialSurface_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant = { "MasterMaterialPlant", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterialPlant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterMaterialPlant_MetaData), NewProp_MasterMaterialPlant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers) < 2048);
// ********** End Class UMaterialAssetSettings Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UMaterialAssetSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialAssetSettings_Statics::ClassParams = {
	&UMaterialAssetSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams)
};
void UMaterialAssetSettings::StaticRegisterNativesUMaterialAssetSettings()
{
}
UClass* Z_Construct_UClass_UMaterialAssetSettings()
{
	if (!Z_Registration_Info_UClass_UMaterialAssetSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialAssetSettings.OuterSingleton, Z_Construct_UClass_UMaterialAssetSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialAssetSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMaterialAssetSettings);
UMaterialAssetSettings::~UMaterialAssetSettings() {}
// ********** End Class UMaterialAssetSettings *****************************************************

// ********** Begin Class UMaterialPresetsSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialPresetsSettings;
UClass* UMaterialPresetsSettings::GetPrivateStaticClass()
{
	using TClass = UMaterialPresetsSettings;
	if (!Z_Registration_Info_UClass_UMaterialPresetsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MaterialPresetsSettings"),
			Z_Registration_Info_UClass_UMaterialPresetsSettings.InnerSingleton,
			StaticRegisterNativesUMaterialPresetsSettings,
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
	return Z_Registration_Info_UClass_UMaterialPresetsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialPresetsSettings_NoRegister()
{
	return UMaterialPresetsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialPresetsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial3d_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all 3D assets. Default material is used if field is left empty. */" },
		{ "DisplayName", "3D Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all 3D assets. Default material is used if field is left empty." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialSurface_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all Surfaces. Default material is used if field is left empty. */" },
		{ "DisplayName", "Surface Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all Surfaces. Default material is used if field is left empty." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialPlant_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all 3D Plants. Default material is used if field is left empty. */" },
		{ "DisplayName", "Plant Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all 3D Plants. Default material is used if field is left empty." },
	};
#endif // WITH_METADATA

// ********** Begin Class UMaterialPresetsSettings constinit property declarations *****************
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterial3d;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterialSurface;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterialPlant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMaterialPresetsSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialPresetsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMaterialPresetsSettings_Statics

// ********** Begin Class UMaterialPresetsSettings Property Definitions ****************************
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d = { "MasterMaterial3d", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterial3d), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterMaterial3d_MetaData), NewProp_MasterMaterial3d_MetaData) };
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface = { "MasterMaterialSurface", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterialSurface), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterMaterialSurface_MetaData), NewProp_MasterMaterialSurface_MetaData) };
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant = { "MasterMaterialPlant", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterialPlant), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterMaterialPlant_MetaData), NewProp_MasterMaterialPlant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers) < 2048);
// ********** End Class UMaterialPresetsSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UMaterialPresetsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::ClassParams = {
	&UMaterialPresetsSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams)
};
void UMaterialPresetsSettings::StaticRegisterNativesUMaterialPresetsSettings()
{
}
UClass* Z_Construct_UClass_UMaterialPresetsSettings()
{
	if (!Z_Registration_Info_UClass_UMaterialPresetsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialPresetsSettings.OuterSingleton, Z_Construct_UClass_UMaterialPresetsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialPresetsSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMaterialPresetsSettings);
UMaterialPresetsSettings::~UMaterialPresetsSettings() {}
// ********** End Class UMaterialPresetsSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h__Script_MegascansPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMegascansSettings, UMegascansSettings::StaticClass, TEXT("UMegascansSettings"), &Z_Registration_Info_UClass_UMegascansSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMegascansSettings), 2357421438U) },
		{ Z_Construct_UClass_UMaterialBlendSettings, UMaterialBlendSettings::StaticClass, TEXT("UMaterialBlendSettings"), &Z_Registration_Info_UClass_UMaterialBlendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialBlendSettings), 1739941712U) },
		{ Z_Construct_UClass_UMaterialAssetSettings, UMaterialAssetSettings::StaticClass, TEXT("UMaterialAssetSettings"), &Z_Registration_Info_UClass_UMaterialAssetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialAssetSettings), 1412808803U) },
		{ Z_Construct_UClass_UMaterialPresetsSettings, UMaterialPresetsSettings::StaticClass, TEXT("UMaterialPresetsSettings"), &Z_Registration_Info_UClass_UMaterialPresetsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialPresetsSettings), 2687288751U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h__Script_MegascansPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h__Script_MegascansPlugin_3635694858{
	TEXT("/Script/MegascansPlugin"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h__Script_MegascansPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h__Script_MegascansPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
