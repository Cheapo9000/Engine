// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsRewards.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsManagerListener;
class USplineComponent;
struct FLinearColor;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsRewards_generated_h
#error "LearningAgentsRewards.generated.h already included, missing '#pragma once' in LearningAgentsRewards.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsRewards_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeRewardFromVelocityAlongSpline); \
	DECLARE_FUNCTION(execMakeRewardFromDirectionSimilarity); \
	DECLARE_FUNCTION(execMakeRewardFromAngleSimilarity); \
	DECLARE_FUNCTION(execMakeRewardFromRotationSimilarityAsQuats); \
	DECLARE_FUNCTION(execMakeRewardFromRotationSimilarity); \
	DECLARE_FUNCTION(execMakeRewardFromLocationSimilarity); \
	DECLARE_FUNCTION(execMakeRewardOnLocationDifferenceAboveThreshold); \
	DECLARE_FUNCTION(execMakeRewardOnLocationDifferenceBelowThreshold); \
	DECLARE_FUNCTION(execMakeRewardFromLocationDifference); \
	DECLARE_FUNCTION(execMakeRewardOnCondition); \
	DECLARE_FUNCTION(execMakeReward);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsRewards(); \
	friend struct Z_Construct_UClass_ULearningAgentsRewards_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsRewards, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsRewards)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULearningAgentsRewards(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsRewards(ULearningAgentsRewards&&); \
	ULearningAgentsRewards(const ULearningAgentsRewards&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULearningAgentsRewards); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsRewards); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsRewards) \
	NO_API virtual ~ULearningAgentsRewards();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsRewards>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRewards_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
