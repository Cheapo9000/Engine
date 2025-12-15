// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVectorConstant.h"

#ifdef ENGINE_DistributionVectorConstant_generated_h
#error "DistributionVectorConstant.generated.h already included, missing '#pragma once' in DistributionVectorConstant.h"
#endif
#define ENGINE_DistributionVectorConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionVectorConstant **********************************************
struct Z_Construct_UClass_UDistributionVectorConstant_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVectorConstant(); \
	friend struct ::Z_Construct_UClass_UDistributionVectorConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionVectorConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionVectorConstant, UDistributionVector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionVectorConstant_NoRegister) \
	DECLARE_SERIALIZER(UDistributionVectorConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionVectorConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVectorConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVectorConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVectorConstant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionVectorConstant(UDistributionVectorConstant&&) = delete; \
	UDistributionVectorConstant(const UDistributionVectorConstant&) = delete; \
	ENGINE_API virtual ~UDistributionVectorConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionVectorConstant;

// ********** End Class UDistributionVectorConstant ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
