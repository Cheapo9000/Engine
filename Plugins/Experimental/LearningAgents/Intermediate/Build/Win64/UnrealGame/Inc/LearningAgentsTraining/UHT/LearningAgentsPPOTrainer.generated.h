// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsPPOTrainer.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsPPOTrainer_generated_h
#error "LearningAgentsPPOTrainer.generated.h already included, missing '#pragma once' in LearningAgentsPPOTrainer.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsPPOTrainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
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

// ********** Begin ScriptStruct FLearningAgentsPPOTrainerSettings *********************************
struct Z_Construct_UScriptStruct_FLearningAgentsPPOTrainerSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsPPOTrainerSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsPPOTrainerSettings;
// ********** End ScriptStruct FLearningAgentsPPOTrainerSettings ***********************************

// ********** Begin ScriptStruct FLearningAgentsPPOTrainingSettings ********************************
struct Z_Construct_UScriptStruct_FLearningAgentsPPOTrainingSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsPPOTrainingSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsPPOTrainingSettings;
// ********** End ScriptStruct FLearningAgentsPPOTrainingSettings **********************************

// ********** Begin Class ULearningAgentsPPOTrainer ************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasTrainingFailed); \
	DECLARE_FUNCTION(execGetEpisodeStepNum); \
	DECLARE_FUNCTION(execRunTraining); \
	DECLARE_FUNCTION(execProcessExperience); \
	DECLARE_FUNCTION(execEndTraining); \
	DECLARE_FUNCTION(execBeginTraining); \
	DECLARE_FUNCTION(execIsTraining); \
	DECLARE_FUNCTION(execSetupPPOTrainer); \
	DECLARE_FUNCTION(execMakePPOTrainer);


struct Z_Construct_UClass_ULearningAgentsPPOTrainer_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsPPOTrainer_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsPPOTrainer(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsPPOTrainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsPPOTrainer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsPPOTrainer, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsPPOTrainer_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsPPOTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_265_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsPPOTrainer(ULearningAgentsPPOTrainer&&) = delete; \
	ULearningAgentsPPOTrainer(const ULearningAgentsPPOTrainer&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsPPOTrainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsPPOTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_262_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_265_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsPPOTrainer;

// ********** End Class ULearningAgentsPPOTrainer **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsPPOTrainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
