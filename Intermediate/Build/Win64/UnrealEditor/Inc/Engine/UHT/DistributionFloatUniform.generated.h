// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionFloatUniform.h"

#ifdef ENGINE_DistributionFloatUniform_generated_h
#error "DistributionFloatUniform.generated.h already included, missing '#pragma once' in DistributionFloatUniform.h"
#endif
#define ENGINE_DistributionFloatUniform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionFloatUniform ************************************************
struct Z_Construct_UClass_UDistributionFloatUniform_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionFloatUniform(); \
	friend struct ::Z_Construct_UClass_UDistributionFloatUniform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionFloatUniform_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionFloatUniform, UDistributionFloat, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionFloatUniform_NoRegister) \
	DECLARE_SERIALIZER(UDistributionFloatUniform)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatUniform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatUniform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatUniform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatUniform); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionFloatUniform(UDistributionFloatUniform&&) = delete; \
	UDistributionFloatUniform(const UDistributionFloatUniform&) = delete; \
	ENGINE_API virtual ~UDistributionFloatUniform();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionFloatUniform;

// ********** End Class UDistributionFloatUniform **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
