// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/InterchangeMegascansPipeline.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInterchangeMegascansPipeline() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
FAB_API UClass* Z_Construct_UClass_UInterchangeMegascansPipeline();
FAB_API UClass* Z_Construct_UClass_UInterchangeMegascansPipeline_NoRegister();
FAB_API UClass* Z_Construct_UClass_UMegascansMaterialParentSettings();
FAB_API UClass* Z_Construct_UClass_UMegascansMaterialParentSettings_NoRegister();
FAB_API UEnum* Z_Construct_UEnum_Fab_EMegascanImportTier();
FAB_API UEnum* Z_Construct_UEnum_Fab_EMegascanImportType();
FAB_API UEnum* Z_Construct_UEnum_Fab_EMegascanMaterialType();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FMegascanMaterialPair();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMegascanImportType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMegascanImportType;
static UEnum* EMegascanImportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMegascanImportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMegascanImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Fab_EMegascanImportType, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EMegascanImportType"));
	}
	return Z_Registration_Info_UEnum_EMegascanImportType.OuterSingleton;
}
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EMegascanImportType>()
{
	return EMegascanImportType_StaticEnum();
}
struct Z_Construct_UEnum_Fab_EMegascanImportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Decal.DisplayName", "Decal" },
		{ "Decal.Name", "EMegascanImportType::Decal" },
		{ "Imperfection.DisplayName", "Imperfection" },
		{ "Imperfection.Name", "EMegascanImportType::Imperfection" },
		{ "Model3D.DisplayName", "3D" },
		{ "Model3D.Name", "EMegascanImportType::Model3D" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
		{ "Plant.DisplayName", "Plant" },
		{ "Plant.Name", "EMegascanImportType::Plant" },
		{ "Surface.DisplayName", "Surface" },
		{ "Surface.Name", "EMegascanImportType::Surface" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMegascanImportType::Model3D", (int64)EMegascanImportType::Model3D },
		{ "EMegascanImportType::Surface", (int64)EMegascanImportType::Surface },
		{ "EMegascanImportType::Decal", (int64)EMegascanImportType::Decal },
		{ "EMegascanImportType::Imperfection", (int64)EMegascanImportType::Imperfection },
		{ "EMegascanImportType::Plant", (int64)EMegascanImportType::Plant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Fab_EMegascanImportType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Fab_EMegascanImportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	"EMegascanImportType",
	"EMegascanImportType",
	Z_Construct_UEnum_Fab_EMegascanImportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EMegascanImportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EMegascanImportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Fab_EMegascanImportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Fab_EMegascanImportType()
{
	if (!Z_Registration_Info_UEnum_EMegascanImportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMegascanImportType.InnerSingleton, Z_Construct_UEnum_Fab_EMegascanImportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMegascanImportType.InnerSingleton;
}
// ********** End Enum EMegascanImportType *********************************************************

// ********** Begin Enum EMegascanImportTier *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMegascanImportTier;
static UEnum* EMegascanImportTier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMegascanImportTier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMegascanImportTier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Fab_EMegascanImportTier, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EMegascanImportTier"));
	}
	return Z_Registration_Info_UEnum_EMegascanImportTier.OuterSingleton;
}
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EMegascanImportTier>()
{
	return EMegascanImportTier_StaticEnum();
}
struct Z_Construct_UEnum_Fab_EMegascanImportTier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.DisplayName", "High" },
		{ "High.Name", "EMegascanImportTier::High" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EMegascanImportTier::Invalid" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EMegascanImportTier::Low" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EMegascanImportTier::Medium" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
		{ "Raw.DisplayName", "Raw" },
		{ "Raw.Name", "EMegascanImportTier::Raw" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMegascanImportTier::Invalid", (int64)EMegascanImportTier::Invalid },
		{ "EMegascanImportTier::Raw", (int64)EMegascanImportTier::Raw },
		{ "EMegascanImportTier::High", (int64)EMegascanImportTier::High },
		{ "EMegascanImportTier::Medium", (int64)EMegascanImportTier::Medium },
		{ "EMegascanImportTier::Low", (int64)EMegascanImportTier::Low },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Fab_EMegascanImportTier_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Fab_EMegascanImportTier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	"EMegascanImportTier",
	"EMegascanImportTier",
	Z_Construct_UEnum_Fab_EMegascanImportTier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EMegascanImportTier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EMegascanImportTier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Fab_EMegascanImportTier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Fab_EMegascanImportTier()
{
	if (!Z_Registration_Info_UEnum_EMegascanImportTier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMegascanImportTier.InnerSingleton, Z_Construct_UEnum_Fab_EMegascanImportTier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMegascanImportTier.InnerSingleton;
}
// ********** End Enum EMegascanImportTier *********************************************************

// ********** Begin Enum EMegascanMaterialType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMegascanMaterialType;
static UEnum* EMegascanMaterialType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMegascanMaterialType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMegascanMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Fab_EMegascanMaterialType, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EMegascanMaterialType"));
	}
	return Z_Registration_Info_UEnum_EMegascanMaterialType.OuterSingleton;
}
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EMegascanMaterialType>()
{
	return EMegascanMaterialType_StaticEnum();
}
struct Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Base.DisplayName", "3D" },
		{ "Base.Name", "EMegascanMaterialType::Base" },
		{ "BaseFuzz.DisplayName", "3D Fuzz" },
		{ "BaseFuzz.Name", "EMegascanMaterialType::BaseFuzz" },
		{ "BaseMasked.DisplayName", "3D Masked" },
		{ "BaseMasked.Name", "EMegascanMaterialType::BaseMasked" },
		{ "BaseTransmission.DisplayName", "3D Transmission" },
		{ "BaseTransmission.Name", "EMegascanMaterialType::BaseTransmission" },
		{ "Decal.DisplayName", "Decal" },
		{ "Decal.Name", "EMegascanMaterialType::Decal" },
		{ "Fabric.DisplayName", "Fabric" },
		{ "Fabric.Name", "EMegascanMaterialType::Fabric" },
		{ "FabricMasked.DisplayName", "Fabric Masked" },
		{ "FabricMasked.Name", "EMegascanMaterialType::FabricMasked" },
		{ "Glass.DisplayName", "Glass" },
		{ "Glass.Name", "EMegascanMaterialType::Glass" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EMegascanMaterialType::Invalid" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
		{ "Plant.DisplayName", "Plant" },
		{ "Plant.Name", "EMegascanMaterialType::Plant" },
		{ "PlantBillboard.DisplayName", "Plant Billboard" },
		{ "PlantBillboard.Name", "EMegascanMaterialType::PlantBillboard" },
		{ "Surface.DisplayName", "Surface" },
		{ "Surface.Name", "EMegascanMaterialType::Surface" },
		{ "SurfaceFuzz.DisplayName", "Surface Fuzz" },
		{ "SurfaceFuzz.Name", "EMegascanMaterialType::SurfaceFuzz" },
		{ "SurfaceMasked.DisplayName", "Surface Masked" },
		{ "SurfaceMasked.Name", "EMegascanMaterialType::SurfaceMasked" },
		{ "SurfaceTransmission.DisplayName", "Surface Transmission" },
		{ "SurfaceTransmission.Name", "EMegascanMaterialType::SurfaceTransmission" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMegascanMaterialType::Invalid", (int64)EMegascanMaterialType::Invalid },
		{ "EMegascanMaterialType::Base", (int64)EMegascanMaterialType::Base },
		{ "EMegascanMaterialType::BaseMasked", (int64)EMegascanMaterialType::BaseMasked },
		{ "EMegascanMaterialType::BaseFuzz", (int64)EMegascanMaterialType::BaseFuzz },
		{ "EMegascanMaterialType::BaseTransmission", (int64)EMegascanMaterialType::BaseTransmission },
		{ "EMegascanMaterialType::Glass", (int64)EMegascanMaterialType::Glass },
		{ "EMegascanMaterialType::Surface", (int64)EMegascanMaterialType::Surface },
		{ "EMegascanMaterialType::SurfaceMasked", (int64)EMegascanMaterialType::SurfaceMasked },
		{ "EMegascanMaterialType::SurfaceFuzz", (int64)EMegascanMaterialType::SurfaceFuzz },
		{ "EMegascanMaterialType::SurfaceTransmission", (int64)EMegascanMaterialType::SurfaceTransmission },
		{ "EMegascanMaterialType::Fabric", (int64)EMegascanMaterialType::Fabric },
		{ "EMegascanMaterialType::FabricMasked", (int64)EMegascanMaterialType::FabricMasked },
		{ "EMegascanMaterialType::Decal", (int64)EMegascanMaterialType::Decal },
		{ "EMegascanMaterialType::Plant", (int64)EMegascanMaterialType::Plant },
		{ "EMegascanMaterialType::PlantBillboard", (int64)EMegascanMaterialType::PlantBillboard },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	"EMegascanMaterialType",
	"EMegascanMaterialType",
	Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Fab_EMegascanMaterialType()
{
	if (!Z_Registration_Info_UEnum_EMegascanMaterialType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMegascanMaterialType.InnerSingleton, Z_Construct_UEnum_Fab_EMegascanMaterialType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMegascanMaterialType.InnerSingleton;
}
// ********** End Enum EMegascanMaterialType *******************************************************

// ********** Begin ScriptStruct FMegascanMaterialPair *********************************************
struct Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMegascanMaterialPair); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMegascanMaterialPair); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardMaterial_MetaData[] = {
		{ "Category", "Standard Material" },
		{ "DisplayName", "Material" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VTMaterial_MetaData[] = {
		{ "Category", "Virtual Material" },
		{ "DisplayName", "Material (with VT support)" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMegascanMaterialPair constinit property declarations *************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StandardMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VTMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMegascanMaterialPair constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMegascanMaterialPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMegascanMaterialPair;
class UScriptStruct* FMegascanMaterialPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMegascanMaterialPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMegascanMaterialPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMegascanMaterialPair, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("MegascanMaterialPair"));
	}
	return Z_Registration_Info_UScriptStruct_FMegascanMaterialPair.OuterSingleton;
	}

// ********** Begin ScriptStruct FMegascanMaterialPair Property Definitions ************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::NewProp_StandardMaterial = { "StandardMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegascanMaterialPair, StandardMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardMaterial_MetaData), NewProp_StandardMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::NewProp_VTMaterial = { "VTMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegascanMaterialPair, VTMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VTMaterial_MetaData), NewProp_VTMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::NewProp_StandardMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::NewProp_VTMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMegascanMaterialPair Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"MegascanMaterialPair",
	Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::PropPointers),
	sizeof(FMegascanMaterialPair),
	alignof(FMegascanMaterialPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMegascanMaterialPair()
{
	if (!Z_Registration_Info_UScriptStruct_FMegascanMaterialPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMegascanMaterialPair.InnerSingleton, Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMegascanMaterialPair.InnerSingleton);
}
// ********** End ScriptStruct FMegascanMaterialPair ***********************************************

// ********** Begin Class UMegascansMaterialParentSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMegascansMaterialParentSettings;
UClass* UMegascansMaterialParentSettings::GetPrivateStaticClass()
{
	using TClass = UMegascansMaterialParentSettings;
	if (!Z_Registration_Info_UClass_UMegascansMaterialParentSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MegascansMaterialParentSettings"),
			Z_Registration_Info_UClass_UMegascansMaterialParentSettings.InnerSingleton,
			StaticRegisterNativesUMegascansMaterialParentSettings,
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
	return Z_Registration_Info_UClass_UMegascansMaterialParentSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMegascansMaterialParentSettings_NoRegister()
{
	return UMegascansMaterialParentSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMegascansMaterialParentSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Fab Megascans" },
		{ "IncludePath", "Pipelines/InterchangeMegascansPipeline.h" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParents_MetaData[] = {
		{ "Category", "Parent Materials" },
		{ "DisplayName", "Megascan Parent Materials" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMegascansMaterialParentSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParents_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialParents_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialParents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialParents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMegascansMaterialParentSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMegascansMaterialParentSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMegascansMaterialParentSettings_Statics

// ********** Begin Class UMegascansMaterialParentSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents_ValueProp = { "MaterialParents", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMegascanMaterialPair, METADATA_PARAMS(0, nullptr) }; // 1442477801
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents_Key_KeyProp = { "MaterialParents_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Fab_EMegascanMaterialType, METADATA_PARAMS(0, nullptr) }; // 1406005103
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents = { "MaterialParents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegascansMaterialParentSettings, MaterialParents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParents_MetaData), NewProp_MaterialParents_MetaData) }; // 1406005103 1442477801
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::NewProp_MaterialParents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::PropPointers) < 2048);
// ********** End Class UMegascansMaterialParentSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::ClassParams = {
	&UMegascansMaterialParentSettings::StaticClass,
	"Fab",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::Class_MetaDataParams)
};
void UMegascansMaterialParentSettings::StaticRegisterNativesUMegascansMaterialParentSettings()
{
}
UClass* Z_Construct_UClass_UMegascansMaterialParentSettings()
{
	if (!Z_Registration_Info_UClass_UMegascansMaterialParentSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMegascansMaterialParentSettings.OuterSingleton, Z_Construct_UClass_UMegascansMaterialParentSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMegascansMaterialParentSettings.OuterSingleton;
}
UMegascansMaterialParentSettings::UMegascansMaterialParentSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMegascansMaterialParentSettings);
UMegascansMaterialParentSettings::~UMegascansMaterialParentSettings() {}
// ********** End Class UMegascansMaterialParentSettings *******************************************

// ********** Begin Class UInterchangeMegascansPipeline ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInterchangeMegascansPipeline;
UClass* UInterchangeMegascansPipeline::GetPrivateStaticClass()
{
	using TClass = UInterchangeMegascansPipeline;
	if (!Z_Registration_Info_UClass_UInterchangeMegascansPipeline.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InterchangeMegascansPipeline"),
			Z_Registration_Info_UClass_UInterchangeMegascansPipeline.InnerSingleton,
			StaticRegisterNativesUInterchangeMegascansPipeline,
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
	return Z_Registration_Info_UClass_UInterchangeMegascansPipeline.InnerSingleton;
}
UClass* Z_Construct_UClass_UInterchangeMegascansPipeline_NoRegister()
{
	return UInterchangeMegascansPipeline::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInterchangeMegascansPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pipelines/InterchangeMegascansPipeline.h" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MegascanImportType_MetaData[] = {
		{ "Category", "Megascans" },
		{ "DisplayName", "Megascan Asset Import Type" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MegascansMaterialParentSettings_MetaData[] = {
		{ "Category", "Megascans" },
		{ "DisplayName", "Megascan Import Settings" },
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Pipelines/InterchangeMegascansPipeline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInterchangeMegascansPipeline constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MegascanImportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MegascanImportType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MegascansMaterialParentSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInterchangeMegascansPipeline constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMegascansPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInterchangeMegascansPipeline_Statics

// ********** Begin Class UInterchangeMegascansPipeline Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_MegascanImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_MegascanImportType = { "MegascanImportType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeMegascansPipeline, MegascanImportType), Z_Construct_UEnum_Fab_EMegascanImportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MegascanImportType_MetaData), NewProp_MegascanImportType_MetaData) }; // 1269594910
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_MegascansMaterialParentSettings = { "MegascansMaterialParentSettings", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeMegascansPipeline, MegascansMaterialParentSettings), Z_Construct_UClass_UMegascansMaterialParentSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MegascansMaterialParentSettings_MetaData), NewProp_MegascansMaterialParentSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeMegascansPipeline, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNodeContainer_MetaData), NewProp_BaseNodeContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_MegascanImportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_MegascanImportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_MegascansMaterialParentSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::NewProp_BaseNodeContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::PropPointers) < 2048);
// ********** End Class UInterchangeMegascansPipeline Property Definitions *************************
UObject* (*const Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::ClassParams = {
	&UInterchangeMegascansPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::Class_MetaDataParams)
};
void UInterchangeMegascansPipeline::StaticRegisterNativesUInterchangeMegascansPipeline()
{
}
UClass* Z_Construct_UClass_UInterchangeMegascansPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeMegascansPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMegascansPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeMegascansPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMegascansPipeline.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInterchangeMegascansPipeline);
UInterchangeMegascansPipeline::~UInterchangeMegascansPipeline() {}
// ********** End Class UInterchangeMegascansPipeline **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMegascanImportType_StaticEnum, TEXT("EMegascanImportType"), &Z_Registration_Info_UEnum_EMegascanImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1269594910U) },
		{ EMegascanImportTier_StaticEnum, TEXT("EMegascanImportTier"), &Z_Registration_Info_UEnum_EMegascanImportTier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2649576506U) },
		{ EMegascanMaterialType_StaticEnum, TEXT("EMegascanMaterialType"), &Z_Registration_Info_UEnum_EMegascanMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1406005103U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMegascanMaterialPair::StaticStruct, Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics::NewStructOps, TEXT("MegascanMaterialPair"),&Z_Registration_Info_UScriptStruct_FMegascanMaterialPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMegascanMaterialPair), 1442477801U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMegascansMaterialParentSettings, UMegascansMaterialParentSettings::StaticClass, TEXT("UMegascansMaterialParentSettings"), &Z_Registration_Info_UClass_UMegascansMaterialParentSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMegascansMaterialParentSettings), 2049969562U) },
		{ Z_Construct_UClass_UInterchangeMegascansPipeline, UInterchangeMegascansPipeline::StaticClass, TEXT("UInterchangeMegascansPipeline"), &Z_Registration_Info_UClass_UInterchangeMegascansPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMegascansPipeline), 3302127016U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_3755221724{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h__Script_Fab_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
