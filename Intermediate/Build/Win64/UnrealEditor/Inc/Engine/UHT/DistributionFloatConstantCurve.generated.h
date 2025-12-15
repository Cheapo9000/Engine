// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionFloatConstantCurve.h"

#ifdef ENGINE_DistributionFloatConstantCurve_generated_h
#error "DistributionFloatConstantCurve.generated.h already included, missing '#pragma once' in DistributionFloatConstantCurve.h"
#endif
#define ENGINE_DistributionFloatConstantCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionFloatConstantCurve ******************************************
struct Z_Construct_UClass_UDistributionFloatConstantCurve_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionFloatConstantCurve(); \
	friend struct ::Z_Construct_UClass_UDistributionFloatConstantCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionFloatConstantCurve, UDistributionFloat, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister) \
	DECLARE_SERIALIZER(UDistributionFloatConstantCurve)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatConstantCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatConstantCurve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatConstantCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatConstantCurve); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionFloatConstantCurve(UDistributionFloatConstantCurve&&) = delete; \
	UDistributionFloatConstantCurve(const UDistributionFloatConstantCurve&) = delete; \
	ENGINE_API virtual ~UDistributionFloatConstantCurve();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionFloatConstantCurve;

// ********** End Class UDistributionFloatConstantCurve ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
