// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVectorUniformCurve.h"

#ifdef ENGINE_DistributionVectorUniformCurve_generated_h
#error "DistributionVectorUniformCurve.generated.h already included, missing '#pragma once' in DistributionVectorUniformCurve.h"
#endif
#define ENGINE_DistributionVectorUniformCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionVectorUniformCurve ******************************************
struct Z_Construct_UClass_UDistributionVectorUniformCurve_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVectorUniformCurve(); \
	friend struct ::Z_Construct_UClass_UDistributionVectorUniformCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionVectorUniformCurve, UDistributionVector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister) \
	DECLARE_SERIALIZER(UDistributionVectorUniformCurve)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionVectorUniformCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVectorUniformCurve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVectorUniformCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVectorUniformCurve); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionVectorUniformCurve(UDistributionVectorUniformCurve&&) = delete; \
	UDistributionVectorUniformCurve(const UDistributionVectorUniformCurve&) = delete; \
	ENGINE_API virtual ~UDistributionVectorUniformCurve();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionVectorUniformCurve;

// ********** End Class UDistributionVectorUniformCurve ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniformCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
