// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionFloatUniformCurve.h"

#ifdef ENGINE_DistributionFloatUniformCurve_generated_h
#error "DistributionFloatUniformCurve.generated.h already included, missing '#pragma once' in DistributionFloatUniformCurve.h"
#endif
#define ENGINE_DistributionFloatUniformCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionFloatUniformCurve *******************************************
struct Z_Construct_UClass_UDistributionFloatUniformCurve_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionFloatUniformCurve(); \
	friend struct ::Z_Construct_UClass_UDistributionFloatUniformCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionFloatUniformCurve, UDistributionFloat, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister) \
	DECLARE_SERIALIZER(UDistributionFloatUniformCurve)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatUniformCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatUniformCurve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatUniformCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatUniformCurve); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionFloatUniformCurve(UDistributionFloatUniformCurve&&) = delete; \
	UDistributionFloatUniformCurve(const UDistributionFloatUniformCurve&) = delete; \
	ENGINE_API virtual ~UDistributionFloatUniformCurve();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionFloatUniformCurve;

// ********** End Class UDistributionFloatUniformCurve *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
