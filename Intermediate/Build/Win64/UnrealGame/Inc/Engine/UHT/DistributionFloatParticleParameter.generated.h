// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionFloatParticleParameter.h"

#ifdef ENGINE_DistributionFloatParticleParameter_generated_h
#error "DistributionFloatParticleParameter.generated.h already included, missing '#pragma once' in DistributionFloatParticleParameter.h"
#endif
#define ENGINE_DistributionFloatParticleParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionFloatParticleParameter **************************************
struct Z_Construct_UClass_UDistributionFloatParticleParameter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionFloatParticleParameter(); \
	friend struct ::Z_Construct_UClass_UDistributionFloatParticleParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionFloatParticleParameter, UDistributionFloatParameterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister) \
	DECLARE_SERIALIZER(UDistributionFloatParticleParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatParticleParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatParticleParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatParticleParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatParticleParameter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionFloatParticleParameter(UDistributionFloatParticleParameter&&) = delete; \
	UDistributionFloatParticleParameter(const UDistributionFloatParticleParameter&) = delete; \
	ENGINE_API virtual ~UDistributionFloatParticleParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionFloatParticleParameter;

// ********** End Class UDistributionFloatParticleParameter ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
