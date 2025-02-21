// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsRecording.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsRecording;
struct FFilePath;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsRecording_generated_h
#error "LearningAgentsRecording.generated.h already included, missing '#pragma once' in LearningAgentsRecording.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsRecording_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsRecord>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActionVector); \
	DECLARE_FUNCTION(execGetObservationVector); \
	DECLARE_FUNCTION(execGetRecordStepNum); \
	DECLARE_FUNCTION(execGetRecordNum); \
	DECLARE_FUNCTION(execAppendRecordingToAsset); \
	DECLARE_FUNCTION(execSaveRecordingToAsset); \
	DECLARE_FUNCTION(execLoadRecordingFromAsset); \
	DECLARE_FUNCTION(execAppendRecordingFromFile); \
	DECLARE_FUNCTION(execSaveRecordingToFile); \
	DECLARE_FUNCTION(execLoadRecordingFromFile); \
	DECLARE_FUNCTION(execResetRecording);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsRecording(); \
	friend struct Z_Construct_UClass_ULearningAgentsRecording_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsRecording, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsRecording)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsRecording(ULearningAgentsRecording&&); \
	ULearningAgentsRecording(const ULearningAgentsRecording&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsRecording); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsRecording)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_52_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsRecording>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
