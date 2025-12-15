// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineMetadataDetailsFactory.h"

#ifdef DETAILCUSTOMIZATIONS_SplineMetadataDetailsFactory_generated_h
#error "SplineMetadataDetailsFactory.generated.h already included, missing '#pragma once' in SplineMetadataDetailsFactory.h"
#endif
#define DETAILCUSTOMIZATIONS_SplineMetadataDetailsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USplineMetadataDetailsFactoryBase ****************************************
struct Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics;
DETAILCUSTOMIZATIONS_API UClass* Z_Construct_UClass_USplineMetadataDetailsFactoryBase_NoRegister();

#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSplineMetadataDetailsFactoryBase(); \
	friend struct ::Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DETAILCUSTOMIZATIONS_API UClass* ::Z_Construct_UClass_USplineMetadataDetailsFactoryBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USplineMetadataDetailsFactoryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DetailCustomizations"), Z_Construct_UClass_USplineMetadataDetailsFactoryBase_NoRegister) \
	DECLARE_SERIALIZER(USplineMetadataDetailsFactoryBase)


#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DETAILCUSTOMIZATIONS_API USplineMetadataDetailsFactoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMetadataDetailsFactoryBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DETAILCUSTOMIZATIONS_API, USplineMetadataDetailsFactoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMetadataDetailsFactoryBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineMetadataDetailsFactoryBase(USplineMetadataDetailsFactoryBase&&) = delete; \
	USplineMetadataDetailsFactoryBase(const USplineMetadataDetailsFactoryBase&) = delete; \
	DETAILCUSTOMIZATIONS_API virtual ~USplineMetadataDetailsFactoryBase();


#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_INCLASS \
	FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineMetadataDetailsFactoryBase;

// ********** End Class USplineMetadataDetailsFactoryBase ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
