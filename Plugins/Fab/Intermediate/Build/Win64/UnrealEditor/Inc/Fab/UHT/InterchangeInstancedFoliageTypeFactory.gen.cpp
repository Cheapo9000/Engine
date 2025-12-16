// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Factories/InterchangeInstancedFoliageTypeFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInterchangeInstancedFoliageTypeFactory() {}

// ********** Begin Cross Module References ********************************************************
FAB_API UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory();
FAB_API UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInterchangeInstancedFoliageTypeFactory **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory;
UClass* UInterchangeInstancedFoliageTypeFactory::GetPrivateStaticClass()
{
	using TClass = UInterchangeInstancedFoliageTypeFactory;
	if (!Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InterchangeInstancedFoliageTypeFactory"),
			Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory.InnerSingleton,
			StaticRegisterNativesUInterchangeInstancedFoliageTypeFactory,
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
	return Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_NoRegister()
{
	return UInterchangeInstancedFoliageTypeFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pipelines/Factories/InterchangeInstancedFoliageTypeFactory.h" },
		{ "ModuleRelativePath", "Private/Pipelines/Factories/InterchangeInstancedFoliageTypeFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInterchangeInstancedFoliageTypeFactory constinit property declarations **
// ********** End Class UInterchangeInstancedFoliageTypeFactory constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeInstancedFoliageTypeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics
UObject* (*const Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics::ClassParams = {
	&UInterchangeInstancedFoliageTypeFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics::Class_MetaDataParams)
};
void UInterchangeInstancedFoliageTypeFactory::StaticRegisterNativesUInterchangeInstancedFoliageTypeFactory()
{
}
UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory.OuterSingleton, Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory.OuterSingleton;
}
UInterchangeInstancedFoliageTypeFactory::UInterchangeInstancedFoliageTypeFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInterchangeInstancedFoliageTypeFactory);
UInterchangeInstancedFoliageTypeFactory::~UInterchangeInstancedFoliageTypeFactory() {}
// ********** End Class UInterchangeInstancedFoliageTypeFactory ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Factories_InterchangeInstancedFoliageTypeFactory_h__Script_Fab_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactory, UInterchangeInstancedFoliageTypeFactory::StaticClass, TEXT("UInterchangeInstancedFoliageTypeFactory"), &Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeInstancedFoliageTypeFactory), 3764259551U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Factories_InterchangeInstancedFoliageTypeFactory_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Factories_InterchangeInstancedFoliageTypeFactory_h__Script_Fab_3210916156{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Factories_InterchangeInstancedFoliageTypeFactory_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Factories_InterchangeInstancedFoliageTypeFactory_h__Script_Fab_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
