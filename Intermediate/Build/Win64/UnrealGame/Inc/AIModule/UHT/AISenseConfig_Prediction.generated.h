// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Prediction.h"

#ifdef AIMODULE_AISenseConfig_Prediction_generated_h
#error "AISenseConfig_Prediction.generated.h already included, missing '#pragma once' in AISenseConfig_Prediction.h"
#endif
#define AIMODULE_AISenseConfig_Prediction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseConfig_Prediction ************************************************
struct Z_Construct_UClass_UAISenseConfig_Prediction_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Prediction(); \
	friend struct ::Z_Construct_UClass_UAISenseConfig_Prediction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseConfig_Prediction, UAISenseConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister) \
	DECLARE_SERIALIZER(UAISenseConfig_Prediction)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Prediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Prediction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Prediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Prediction); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseConfig_Prediction(UAISenseConfig_Prediction&&) = delete; \
	UAISenseConfig_Prediction(const UAISenseConfig_Prediction&) = delete; \
	AIMODULE_API virtual ~UAISenseConfig_Prediction();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseConfig_Prediction;

// ********** End Class UAISenseConfig_Prediction **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
