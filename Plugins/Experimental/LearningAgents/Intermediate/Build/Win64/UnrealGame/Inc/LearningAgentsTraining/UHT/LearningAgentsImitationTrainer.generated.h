// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsImitationTrainer.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsImitationTrainer_generated_h
#error "LearningAgentsImitationTrainer.generated.h already included, missing '#pragma once' in LearningAgentsImitationTrainer.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsImitationTrainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsImitationTrainer;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsPolicy;
class ULearningAgentsRecording;
struct FLearningAgentsCommunicator;
struct FLearningAgentsImitationTrainerSettings;
struct FLearningAgentsImitationTrainerTrainingSettings;
struct FLearningAgentsTrainerProcessSettings;

// ********** Begin ScriptStruct FLearningAgentsImitationTrainerSettings ***************************
struct Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsImitationTrainerSettings;
// ********** End ScriptStruct FLearningAgentsImitationTrainerSettings *****************************

// ********** Begin ScriptStruct FLearningAgentsImitationTrainerTrainingSettings *******************
struct Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsImitationTrainerTrainingSettings;
// ********** End ScriptStruct FLearningAgentsImitationTrainerTrainingSettings *********************

// ********** Begin Class ULearningAgentsImitationTrainer ******************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunTraining); \
	DECLARE_FUNCTION(execIterateTraining); \
	DECLARE_FUNCTION(execEndTraining); \
	DECLARE_FUNCTION(execBeginTraining); \
	DECLARE_FUNCTION(execHasTrainingFailed); \
	DECLARE_FUNCTION(execIsTraining); \
	DECLARE_FUNCTION(execMakeImitationTrainer);


struct Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsImitationTrainer_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsImitationTrainer(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsImitationTrainer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsImitationTrainer, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsImitationTrainer_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsImitationTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_174_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsImitationTrainer(ULearningAgentsImitationTrainer&&) = delete; \
	ULearningAgentsImitationTrainer(const ULearningAgentsImitationTrainer&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsImitationTrainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsImitationTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_171_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsImitationTrainer;

// ********** End Class ULearningAgentsImitationTrainer ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
