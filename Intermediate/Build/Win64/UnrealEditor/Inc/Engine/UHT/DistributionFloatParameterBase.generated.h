// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionFloatParameterBase.h"

#ifdef ENGINE_DistributionFloatParameterBase_generated_h
#error "DistributionFloatParameterBase.generated.h already included, missing '#pragma once' in DistributionFloatParameterBase.h"
#endif
#define ENGINE_DistributionFloatParameterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistributionFloatParameterBase ******************************************
struct Z_Construct_UClass_UDistributionFloatParameterBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionFloatParameterBase(); \
	friend struct ::Z_Construct_UClass_UDistributionFloatParameterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionFloatParameterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionFloatParameterBase, UDistributionFloatConstant, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionFloatParameterBase_NoRegister) \
	DECLARE_SERIALIZER(UDistributionFloatParameterBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatParameterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatParameterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatParameterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatParameterBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionFloatParameterBase(UDistributionFloatParameterBase&&) = delete; \
	UDistributionFloatParameterBase(const UDistributionFloatParameterBase&) = delete; \
	ENGINE_API virtual ~UDistributionFloatParameterBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionFloatParameterBase;

// ********** End Class UDistributionFloatParameterBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParameterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
