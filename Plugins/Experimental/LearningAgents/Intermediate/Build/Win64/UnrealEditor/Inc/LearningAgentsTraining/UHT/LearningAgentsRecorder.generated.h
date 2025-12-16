// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsRecorder.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsRecorder_generated_h
#error "LearningAgentsRecorder.generated.h already included, missing '#pragma once' in LearningAgentsRecorder.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsRecorder;
class ULearningAgentsRecording;
struct FLearningAgentsRecorderPathSettings;

// ********** Begin ScriptStruct FLearningAgentsRecorderPathSettings *******************************
struct Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsRecorderPathSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsRecorderPathSettings;
// ********** End ScriptStruct FLearningAgentsRecorderPathSettings *********************************

// ********** Begin Class ULearningAgentsRecorder **************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractor); \
	DECLARE_FUNCTION(execGetRecordingAsset); \
	DECLARE_FUNCTION(execAddExperience); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execEndRecordingAndDiscard); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execSetupRecorder); \
	DECLARE_FUNCTION(execMakeRecorder);


struct Z_Construct_UClass_ULearningAgentsRecorder_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecorder_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsRecorder(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsRecorder, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsRecorder_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsRecorder)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsRecorder(ULearningAgentsRecorder&&) = delete; \
	ULearningAgentsRecorder(const ULearningAgentsRecorder&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsRecorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsRecorder)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_41_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsRecorder;

// ********** End Class ULearningAgentsRecorder ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecorder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
