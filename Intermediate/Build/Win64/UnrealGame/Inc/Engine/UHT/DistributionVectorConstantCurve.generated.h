// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVectorConstantCurve.h"

#ifdef ENGINE_DistributionVectorConstantCurve_generated_h
#error "DistributionVectorConstantCurve.generated.h already included, missing '#pragma once' in DistributionVectorConstantCurve.h"
#endif
#define ENGINE_DistributionVectorConstantCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionVectorConstantCurve *****************************************
struct Z_Construct_UClass_UDistributionVectorConstantCurve_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVectorConstantCurve(); \
	friend struct ::Z_Construct_UClass_UDistributionVectorConstantCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionVectorConstantCurve, UDistributionVector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister) \
	DECLARE_SERIALIZER(UDistributionVectorConstantCurve)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionVectorConstantCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVectorConstantCurve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVectorConstantCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVectorConstantCurve); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionVectorConstantCurve(UDistributionVectorConstantCurve&&) = delete; \
	UDistributionVectorConstantCurve(const UDistributionVectorConstantCurve&) = delete; \
	ENGINE_API virtual ~UDistributionVectorConstantCurve();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionVectorConstantCurve;

// ********** End Class UDistributionVectorConstantCurve *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
