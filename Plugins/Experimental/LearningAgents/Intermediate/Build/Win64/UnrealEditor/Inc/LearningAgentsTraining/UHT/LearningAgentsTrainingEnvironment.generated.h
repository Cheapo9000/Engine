// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsTrainingEnvironment.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsTrainingEnvironment_generated_h
#error "LearningAgentsTrainingEnvironment.generated.h already included, missing '#pragma once' in LearningAgentsTrainingEnvironment.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsTrainingEnvironment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsManager;
class ULearningAgentsTrainingEnvironment;
enum class ELearningAgentsCompletion : uint8;

// ********** Begin Class ULearningAgentsTrainingEnvironment ***************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	LEARNINGAGENTSTRAINING_API virtual void ResetAgentEpisodes_Implementation(TArray<int32> const& AgentIds); \
	LEARNINGAGENTSTRAINING_API virtual void ResetAgentEpisode_Implementation(const int32 AgentId); \
	LEARNINGAGENTSTRAINING_API virtual void GatherAgentCompletions_Implementation(TArray<ELearningAgentsCompletion>& OutCompletions, TArray<int32> const& AgentIds); \
	LEARNINGAGENTSTRAINING_API virtual void GatherAgentCompletion_Implementation(ELearningAgentsCompletion& OutCompletion, const int32 AgentId); \
	LEARNINGAGENTSTRAINING_API virtual void GatherAgentRewards_Implementation(TArray<float>& OutRewards, TArray<int32> const& AgentIds); \
	LEARNINGAGENTSTRAINING_API virtual void GatherAgentReward_Implementation(float& OutReward, const int32 AgentId); \
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


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULearningAgentsTrainingEnvironment_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsTrainingEnvironment_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsTrainingEnvironment(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsTrainingEnvironment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsTrainingEnvironment_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsTrainingEnvironment, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsTrainingEnvironment_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsTrainingEnvironment)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsTrainingEnvironment(ULearningAgentsTrainingEnvironment&&) = delete; \
	ULearningAgentsTrainingEnvironment(const ULearningAgentsTrainingEnvironment&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsTrainingEnvironment); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsTrainingEnvironment)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsTrainingEnvironment;

// ********** End Class ULearningAgentsTrainingEnvironment *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsTrainingEnvironment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
