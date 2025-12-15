// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVectorUniform.h"

#ifdef ENGINE_DistributionVectorUniform_generated_h
#error "DistributionVectorUniform.generated.h already included, missing '#pragma once' in DistributionVectorUniform.h"
#endif
#define ENGINE_DistributionVectorUniform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionVectorUniform ***********************************************
struct Z_Construct_UClass_UDistributionVectorUniform_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniform_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVectorUniform(); \
	friend struct ::Z_Construct_UClass_UDistributionVectorUniform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionVectorUniform_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionVectorUniform, UDistributionVector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionVectorUniform_NoRegister) \
	DECLARE_SERIALIZER(UDistributionVectorUniform)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionVectorUniform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVectorUniform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVectorUniform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVectorUniform); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionVectorUniform(UDistributionVectorUniform&&) = delete; \
	UDistributionVectorUniform(const UDistributionVectorUniform&) = delete; \
	ENGINE_API virtual ~UDistributionVectorUniform();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionVectorUniform;

// ********** End Class UDistributionVectorUniform *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorUniform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
