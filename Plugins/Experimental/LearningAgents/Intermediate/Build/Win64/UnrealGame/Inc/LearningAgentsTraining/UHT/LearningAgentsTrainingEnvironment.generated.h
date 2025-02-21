// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsTrainingEnvironment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsManager;
class ULearningAgentsTrainingEnvironment;
enum class ELearningAgentsCompletion : uint8;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsTrainingEnvironment_generated_h
#error "LearningAgentsTrainingEnvironment.generated.h already included, missing '#pragma once' in LearningAgentsTrainingEnvironment.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsTrainingEnvironment_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResetAgentEpisodes_Implementation(TArray<int32> const& AgentIds); \
	virtual void ResetAgentEpisode_Implementation(const int32 AgentId); \
	virtual void GatherAgentCompletions_Implementation(TArray<ELearningAgentsCompletion>& OutCompletions, TArray<int32> const& AgentIds); \
	virtual void GatherAgentCompletion_Implementation(ELearningAgentsCompletion& OutCompletion, const int32 AgentId); \
	virtual void GatherAgentRewards_Implementation(TArray<float>& OutRewards, TArray<int32> const& AgentIds); \
	virtual void GatherAgentReward_Implementation(float& OutReward, const int32 AgentId); \
	DECLARE_FUNCTION(execGetEpisodeTime); \
	DECLARE_FUNCTION(execGetCompletion); \
	DECLARE_FUNCTION(execGetReward); \
	DECLARE_FUNCTION(execHasCompletion); \
	DECLARE_FUNCTION(execHasReward); \
	DECLARE_FUNCTION(execGatherCompletions); \
	DECLARE_FUNCTION(execGatherRewards); \
	DECLARE_FUNCTION(execResetAgentEpisodes); \
	DECLARE_FUNCTION(execResetAgentEpisode); \
	DECLARE_FUNCTION(execGatherAgentCompletions); \
	DECLARE_FUNCTION(execGatherAgentCompletion); \
	DECLARE_FUNCTION(execGatherAgentRewards); \
	DECLARE_FUNCTION(execGatherAgentReward); \
	DECLARE_FUNCTION(execSetupTrainingEnvironment); \
	DECLARE_FUNCTION(execMakeTrainingEnvironment);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsTrainingEnvironment(); \
	friend struct Z_Construct_UClass_ULearningAgentsTrainingEnvironment_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsTrainingEnvironment, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsTrainingEnvironment)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsTrainingEnvironment(ULearningAgentsTrainingEnvironment&&); \
	ULearningAgentsTrainingEnvironment(const ULearningAgentsTrainingEnvironment&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsTrainingEnvironment); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsTrainingEnvironment)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsTrainingEnvironment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
