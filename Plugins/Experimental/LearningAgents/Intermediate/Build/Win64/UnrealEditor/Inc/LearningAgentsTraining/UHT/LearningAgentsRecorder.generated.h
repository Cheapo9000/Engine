// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsRecorder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsRecorder;
class ULearningAgentsRecording;
struct FLearningAgentsRecorderPathSettings;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsRecorder_generated_h
#error "LearningAgentsRecorder.generated.h already included, missing '#pragma once' in LearningAgentsRecorder.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsRecorder_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsRecorderPathSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRecordingAsset); \
	DECLARE_FUNCTION(execAddExperience); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execEndRecordingAndDiscard); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execSetupRecorder); \
	DECLARE_FUNCTION(execMakeRecorder);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsRecorder(); \
	friend struct Z_Construct_UClass_ULearningAgentsRecorder_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsRecorder, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsRecorder)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsRecorder(ULearningAgentsRecorder&&); \
	ULearningAgentsRecorder(const ULearningAgentsRecorder&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsRecorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsRecorder)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_36_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
