// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionFloatConstant.h"

#ifdef ENGINE_DistributionFloatConstant_generated_h
#error "DistributionFloatConstant.generated.h already included, missing '#pragma once' in DistributionFloatConstant.h"
#endif
#define ENGINE_DistributionFloatConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionFloatConstant ***********************************************
struct Z_Construct_UClass_UDistributionFloatConstant_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionFloatConstant(); \
	friend struct ::Z_Construct_UClass_UDistributionFloatConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionFloatConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionFloatConstant, UDistributionFloat, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionFloatConstant_NoRegister) \
	DECLARE_SERIALIZER(UDistributionFloatConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatConstant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionFloatConstant(UDistributionFloatConstant&&) = delete; \
	UDistributionFloatConstant(const UDistributionFloatConstant&) = delete; \
	ENGINE_API virtual ~UDistributionFloatConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionFloatConstant;

// ********** End Class UDistributionFloatConstant *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
