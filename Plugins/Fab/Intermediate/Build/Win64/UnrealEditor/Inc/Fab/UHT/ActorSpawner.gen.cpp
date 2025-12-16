// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Importers/ActorSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActorSpawner() {}

// ********** Begin Cross Module References ********************************************************
FAB_API UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner_NoRegister();
FAB_API UClass* Z_Construct_UClass_UFabPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabPlaceholderSpawner_NoRegister();
FAB_API UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_NoRegister();
FAB_API UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner();
FAB_API UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFabPlaceholderSpawner ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFabPlaceholderSpawner;
UClass* UFabPlaceholderSpawner::GetPrivateStaticClass()
{
	using TClass = UFabPlaceholderSpawner;
	if (!Z_Registration_Info_UClass_UFabPlaceholderSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FabPlaceholderSpawner"),
			Z_Registration_Info_UClass_UFabPlaceholderSpawner.InnerSingleton,
			StaticRegisterNativesUFabPlaceholderSpawner,
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
	return Z_Registration_Info_UClass_UFabPlaceholderSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabPlaceholderSpawner_NoRegister()
{
	return UFabPlaceholderSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Public/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFabPlaceholderSpawner constinit property declarations *******************
// ********** End Class UFabPlaceholderSpawner constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFabPlaceholderSpawner_Statics
UObject* (*const Z_Construct_UClass_UFabPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabPlaceholderSpawner_Statics::ClassParams = {
	&UFabPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabPlaceholderSpawner_Statics::Class_MetaDataParams)
};
void UFabPlaceholderSpawner::StaticRegisterNativesUFabPlaceholderSpawner()
{
}
UClass* Z_Construct_UClass_UFabPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabPlaceholderSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFabPlaceholderSpawner);
UFabPlaceholderSpawner::~UFabPlaceholderSpawner() {}
// ********** End Class UFabPlaceholderSpawner *****************************************************

// ********** Begin Class UFabStaticMeshPlaceholderSpawner *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner;
UClass* UFabStaticMeshPlaceholderSpawner::GetPrivateStaticClass()
{
	using TClass = UFabStaticMeshPlaceholderSpawner;
	if (!Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FabStaticMeshPlaceholderSpawner"),
			Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.InnerSingleton,
			StaticRegisterNativesUFabStaticMeshPlaceholderSpawner,
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
	return Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_NoRegister()
{
	return UFabStaticMeshPlaceholderSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Public/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFabStaticMeshPlaceholderSpawner constinit property declarations *********
// ********** End Class UFabStaticMeshPlaceholderSpawner constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabStaticMeshPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics
UObject* (*const Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFabPlaceholderSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::ClassParams = {
	&UFabStaticMeshPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::Class_MetaDataParams)
};
void UFabStaticMeshPlaceholderSpawner::StaticRegisterNativesUFabStaticMeshPlaceholderSpawner()
{
}
UClass* Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFabStaticMeshPlaceholderSpawner);
UFabStaticMeshPlaceholderSpawner::~UFabStaticMeshPlaceholderSpawner() {}
// ********** End Class UFabStaticMeshPlaceholderSpawner *******************************************

// ********** Begin Class UFabSkeletalMeshPlaceholderSpawner ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner;
UClass* UFabSkeletalMeshPlaceholderSpawner::GetPrivateStaticClass()
{
	using TClass = UFabSkeletalMeshPlaceholderSpawner;
	if (!Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FabSkeletalMeshPlaceholderSpawner"),
			Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.InnerSingleton,
			StaticRegisterNativesUFabSkeletalMeshPlaceholderSpawner,
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
	return Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_NoRegister()
{
	return UFabSkeletalMeshPlaceholderSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Public/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFabSkeletalMeshPlaceholderSpawner constinit property declarations *******
// ********** End Class UFabSkeletalMeshPlaceholderSpawner constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabSkeletalMeshPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics
UObject* (*const Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFabPlaceholderSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::ClassParams = {
	&UFabSkeletalMeshPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::Class_MetaDataParams)
};
void UFabSkeletalMeshPlaceholderSpawner::StaticRegisterNativesUFabSkeletalMeshPlaceholderSpawner()
{
}
UClass* Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFabSkeletalMeshPlaceholderSpawner);
UFabSkeletalMeshPlaceholderSpawner::~UFabSkeletalMeshPlaceholderSpawner() {}
// ********** End Class UFabSkeletalMeshPlaceholderSpawner *****************************************

// ********** Begin Class UFabDecalPlaceholderSpawner **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner;
UClass* UFabDecalPlaceholderSpawner::GetPrivateStaticClass()
{
	using TClass = UFabDecalPlaceholderSpawner;
	if (!Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FabDecalPlaceholderSpawner"),
			Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.InnerSingleton,
			StaticRegisterNativesUFabDecalPlaceholderSpawner,
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
	return Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner_NoRegister()
{
	return UFabDecalPlaceholderSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importers/ActorSpawner.h" },
		{ "ModuleRelativePath", "Public/Importers/ActorSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFabDecalPlaceholderSpawner constinit property declarations **************
// ********** End Class UFabDecalPlaceholderSpawner constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabDecalPlaceholderSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics
UObject* (*const Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFabPlaceholderSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::ClassParams = {
	&UFabDecalPlaceholderSpawner::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::Class_MetaDataParams)
};
void UFabDecalPlaceholderSpawner::StaticRegisterNativesUFabDecalPlaceholderSpawner()
{
}
UClass* Z_Construct_UClass_UFabDecalPlaceholderSpawner()
{
	if (!Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.OuterSingleton, Z_Construct_UClass_UFabDecalPlaceholderSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFabDecalPlaceholderSpawner);
UFabDecalPlaceholderSpawner::~UFabDecalPlaceholderSpawner() {}
// ********** End Class UFabDecalPlaceholderSpawner ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Importers_ActorSpawner_h__Script_Fab_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabPlaceholderSpawner, UFabPlaceholderSpawner::StaticClass, TEXT("UFabPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabPlaceholderSpawner), 1785188289U) },
		{ Z_Construct_UClass_UFabStaticMeshPlaceholderSpawner, UFabStaticMeshPlaceholderSpawner::StaticClass, TEXT("UFabStaticMeshPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabStaticMeshPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabStaticMeshPlaceholderSpawner), 1698829448U) },
		{ Z_Construct_UClass_UFabSkeletalMeshPlaceholderSpawner, UFabSkeletalMeshPlaceholderSpawner::StaticClass, TEXT("UFabSkeletalMeshPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabSkeletalMeshPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabSkeletalMeshPlaceholderSpawner), 1469777175U) },
		{ Z_Construct_UClass_UFabDecalPlaceholderSpawner, UFabDecalPlaceholderSpawner::StaticClass, TEXT("UFabDecalPlaceholderSpawner"), &Z_Registration_Info_UClass_UFabDecalPlaceholderSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabDecalPlaceholderSpawner), 1413427846U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Importers_ActorSpawner_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Importers_ActorSpawner_h__Script_Fab_3711688643{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Importers_ActorSpawner_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Public_Importers_ActorSpawner_h__Script_Fab_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
