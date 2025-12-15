// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/Distribution.h"

#ifdef ENGINE_Distribution_generated_h
#error "Distribution.generated.h already included, missing '#pragma once' in Distribution.h"
#endif
#define ENGINE_Distribution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistribution ************************************************************
struct Z_Construct_UClass_UDistribution_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistribution_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUDistribution(); \
	friend struct ::Z_Construct_UClass_UDistribution_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistribution_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistribution, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistribution_NoRegister) \
	DECLARE_SERIALIZER(UDistribution)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistribution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistribution) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistribution); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistribution); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistribution(UDistribution&&) = delete; \
	UDistribution(const UDistribution&) = delete; \
	ENGINE_API virtual ~UDistribution();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_64_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistribution;

// ********** End Class UDistribution **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h

// ********** Begin Enum DistributionParamMode *****************************************************
#define FOREACH_ENUM_DISTRIBUTIONPARAMMODE(op) \
	op(DPM_Normal) \
	op(DPM_Abs) \
	op(DPM_Direct) 

enum DistributionParamMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<DistributionParamMode>();
// ********** End Enum DistributionParamMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
