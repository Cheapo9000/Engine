// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utilities/FabLocalAssets.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFabLocalAssets() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FAB_API UClass* Z_Construct_UClass_UFabLocalAssets();
FAB_API UClass* Z_Construct_UClass_UFabLocalAssets_NoRegister();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFabLocalAssets **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFabLocalAssets;
UClass* UFabLocalAssets::GetPrivateStaticClass()
{
	using TClass = UFabLocalAssets;
	if (!Z_Registration_Info_UClass_UFabLocalAssets.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FabLocalAssets"),
			Z_Registration_Info_UClass_UFabLocalAssets.InnerSingleton,
			StaticRegisterNativesUFabLocalAssets,
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
	return Z_Registration_Info_UClass_UFabLocalAssets.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabLocalAssets_NoRegister()
{
	return UFabLocalAssets::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabLocalAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/FabLocalAssets.h" },
		{ "ModuleRelativePath", "Private/Utilities/FabLocalAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathsListingID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/FabLocalAssets.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFabLocalAssets constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathsListingID_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathsListingID_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PathsListingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFabLocalAssets constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabLocalAssets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFabLocalAssets_Statics

// ********** Begin Class UFabLocalAssets Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFabLocalAssets_Statics::NewProp_PathsListingID_ValueProp = { "PathsListingID", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFabLocalAssets_Statics::NewProp_PathsListingID_Key_KeyProp = { "PathsListingID_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFabLocalAssets_Statics::NewProp_PathsListingID = { "PathsListingID", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFabLocalAssets, PathsListingID), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathsListingID_MetaData), NewProp_PathsListingID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFabLocalAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabLocalAssets_Statics::NewProp_PathsListingID_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabLocalAssets_Statics::NewProp_PathsListingID_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabLocalAssets_Statics::NewProp_PathsListingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabLocalAssets_Statics::PropPointers) < 2048);
// ********** End Class UFabLocalAssets Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UFabLocalAssets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabLocalAssets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabLocalAssets_Statics::ClassParams = {
	&UFabLocalAssets::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFabLocalAssets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFabLocalAssets_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabLocalAssets_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabLocalAssets_Statics::Class_MetaDataParams)
};
void UFabLocalAssets::StaticRegisterNativesUFabLocalAssets()
{
}
UClass* Z_Construct_UClass_UFabLocalAssets()
{
	if (!Z_Registration_Info_UClass_UFabLocalAssets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabLocalAssets.OuterSingleton, Z_Construct_UClass_UFabLocalAssets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabLocalAssets.OuterSingleton;
}
UFabLocalAssets::UFabLocalAssets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFabLocalAssets);
UFabLocalAssets::~UFabLocalAssets() {}
// ********** End Class UFabLocalAssets ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h__Script_Fab_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabLocalAssets, UFabLocalAssets::StaticClass, TEXT("UFabLocalAssets"), &Z_Registration_Info_UClass_UFabLocalAssets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabLocalAssets), 3300265884U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h__Script_Fab_397984752{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h__Script_Fab_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
