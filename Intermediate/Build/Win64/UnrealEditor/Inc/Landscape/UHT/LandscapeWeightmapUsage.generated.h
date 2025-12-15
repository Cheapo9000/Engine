// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeWeightmapUsage.h"

#ifdef LANDSCAPE_LandscapeWeightmapUsage_generated_h
#error "LandscapeWeightmapUsage.generated.h already included, missing '#pragma once' in LandscapeWeightmapUsage.h"
#endif
#define LANDSCAPE_LandscapeWeightmapUsage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeWeightmapUsage *************************************************
struct Z_Construct_UClass_ULandscapeWeightmapUsage_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeWeightmapUsage(); \
	friend struct ::Z_Construct_UClass_ULandscapeWeightmapUsage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeWeightmapUsage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeWeightmapUsage)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeWeightmapUsage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeWeightmapUsage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeWeightmapUsage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeWeightmapUsage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeWeightmapUsage(ULandscapeWeightmapUsage&&) = delete; \
	ULandscapeWeightmapUsage(const ULandscapeWeightmapUsage&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeWeightmapUsage();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_12_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_15_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeWeightmapUsage;

// ********** End Class ULandscapeWeightmapUsage ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
