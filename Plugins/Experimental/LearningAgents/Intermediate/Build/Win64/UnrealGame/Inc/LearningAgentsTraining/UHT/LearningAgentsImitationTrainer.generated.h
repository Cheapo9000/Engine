// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsImitationTrainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsImitationTrainer;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsPolicy;
class ULearningAgentsRecording;
struct FLearningAgentsCommunicator;
struct FLearningAgentsImitationTrainerSettings;
struct FLearningAgentsImitationTrainerTrainingSettings;
struct FLearningAgentsTrainerProcessSettings;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsImitationTrainer_generated_h
#error "LearningAgentsImitationTrainer.generated.h already included, missing '#pragma once' in LearningAgentsImitationTrainer.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsImitationTrainer_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsImitationTrainerSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsImitationTrainerTrainingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsImitationTrainerTrainingSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunTraining); \
	DECLARE_FUNCTION(execIterateTraining); \
	DECLARE_FUNCTION(execEndTraining); \
	DECLARE_FUNCTION(execBeginTraining); \
	DECLARE_FUNCTION(execHasTrainingFailed); \
	DECLARE_FUNCTION(execIsTraining); \
	DECLARE_FUNCTION(execMakeImitationTrainer);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsImitationTrainer(); \
	friend struct Z_Construct_UClass_ULearningAgentsImitationTrainer_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsImitationTrainer, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsImitationTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsImitationTrainer(ULearningAgentsImitationTrainer&&); \
	ULearningAgentsImitationTrainer(const ULearningAgentsImitationTrainer&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsImitationTrainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsImitationTrainer)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_119_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsImitationTrainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsImitationTrainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
