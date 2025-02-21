// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsPPOTrainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsCritic;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsPolicy;
class ULearningAgentsPPOTrainer;
class ULearningAgentsTrainingEnvironment;
struct FLearningAgentsCommunicator;
struct FLearningAgentsPPOTrainerSettings;
struct FLearningAgentsPPOTrainingSettings;
struct FLearningAgentsTrainingGameSettings;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsPPOTrainer_generated_h
#error "LearningAgentsPPOTrainer.generated.h already included, missing '#pragma once' in LearningAgentsPPOTrainer.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsPPOTrainer_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsPPOTrainerSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsPPOTrainerSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsPPOTrainingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsPPOTrainingSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasTrainingFailed); \
	DECLARE_FUNCTION(execGetEpisodeStepNum); \
	DECLARE_FUNCTION(execRunTraining); \
	DECLARE_FUNCTION(execProcessExperience); \
	DECLARE_FUNCTION(execEndTraining); \
	DECLARE_FUNCTION(execBeginTraining); \
	DECLARE_FUNCTION(execIsTraining); \
	DECLARE_FUNCTION(execSetupPPOTrainer); \
	DECLARE_FUNCTION(execMakePPOTrainer);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsPPOTrainer(); \
	friend struct Z_Construct_UClass_ULearningAgentsPPOTrainer_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsPPOTrainer, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsPPOTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_246_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsPPOTrainer(ULearningAgentsPPOTrainer&&); \
	ULearningAgentsPPOTrainer(const ULearningAgentsPPOTrainer&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsPPOTrainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsPPOTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_243_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsPPOTrainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
