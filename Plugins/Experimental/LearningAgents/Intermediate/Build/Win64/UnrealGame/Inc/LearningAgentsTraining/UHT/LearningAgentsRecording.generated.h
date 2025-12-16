// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsRecording.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsRecording_generated_h
#error "LearningAgentsRecording.generated.h already included, missing '#pragma once' in LearningAgentsRecording.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsRecording_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsRecording;
struct FFilePath;
struct FGameplayTag;
struct FLearningAgentsRecord;

// ********** Begin ScriptStruct FLearningAgentsSchema *********************************************
struct Z_Construct_UScriptStruct_FLearningAgentsSchema_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsSchema_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsSchema;
// ********** End ScriptStruct FLearningAgentsSchema ***********************************************

// ********** Begin ScriptStruct FLearningAgentsRecord *********************************************
struct Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsRecord_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsRecord;
// ********** End ScriptStruct FLearningAgentsRecord ***********************************************

// ********** Begin Class ULearningAgentsRecording *************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execAppendSchemaFromFile); \
	DECLARE_FUNCTION(execAppendSchema); \
	DECLARE_FUNCTION(execAppendAllRecordingsFromFolder); \
	DECLARE_FUNCTION(execAppendRecording); \
	DECLARE_FUNCTION(execResetRecording);


struct Z_Construct_UClass_ULearningAgentsRecording_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsRecording_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsRecording(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsRecording_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsRecording_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsRecording, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsRecording_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsRecording)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_86_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsRecording(ULearningAgentsRecording&&) = delete; \
	ULearningAgentsRecording(const ULearningAgentsRecording&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsRecording); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsRecording)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_83_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsRecording;

// ********** End Class ULearningAgentsRecording ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsRecording_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
