// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVectorParticleParameter.h"

#ifdef ENGINE_DistributionVectorParticleParameter_generated_h
#error "DistributionVectorParticleParameter.generated.h already included, missing '#pragma once' in DistributionVectorParticleParameter.h"
#endif
#define ENGINE_DistributionVectorParticleParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionVectorParticleParameter *************************************
struct Z_Construct_UClass_UDistributionVectorParticleParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVectorParticleParameter(); \
	friend struct ::Z_Construct_UClass_UDistributionVectorParticleParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionVectorParticleParameter, UDistributionVectorParameterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister) \
	DECLARE_SERIALIZER(UDistributionVectorParticleParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionVectorParticleParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVectorParticleParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVectorParticleParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVectorParticleParameter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionVectorParticleParameter(UDistributionVectorParticleParameter&&) = delete; \
	UDistributionVectorParticleParameter(const UDistributionVectorParticleParameter&) = delete; \
	ENGINE_API virtual ~UDistributionVectorParticleParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionVectorParticleParameter;

// ********** End Class UDistributionVectorParticleParameter ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
