// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterSplineMetadataDetails.h"

#ifdef WATEREDITOR_WaterSplineMetadataDetails_generated_h
#error "WaterSplineMetadataDetails.generated.h already included, missing '#pragma once' in WaterSplineMetadataDetails.h"
#endif
#define WATEREDITOR_WaterSplineMetadataDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterSplineMetadataDetailsFactory ***************************************
struct Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWaterSplineMetadataDetailsFactory(); \
	friend struct ::Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterSplineMetadataDetailsFactory, USplineMetadataDetailsFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterSplineMetadataDetailsFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterSplineMetadataDetailsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSplineMetadataDetailsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSplineMetadataDetailsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSplineMetadataDetailsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterSplineMetadataDetailsFactory(UWaterSplineMetadataDetailsFactory&&) = delete; \
	UWaterSplineMetadataDetailsFactory(const UWaterSplineMetadataDetailsFactory&) = delete;


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterSplineMetadataDetailsFactory;

// ********** End Class UWaterSplineMetadataDetailsFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
