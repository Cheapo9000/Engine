// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsImitationTrainerEditor.h"

#ifdef LEARNINGAGENTSTRAININGEDITOR_LearningAgentsImitationTrainerEditor_generated_h
#error "LearningAgentsImitationTrainerEditor.generated.h already included, missing '#pragma once' in LearningAgentsImitationTrainerEditor.h"
#endif
#define LEARNINGAGENTSTRAININGEDITOR_LearningAgentsImitationTrainerEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDirectoryPath;
struct FLearningAgentsCommunicator;

// ********** Begin Class ALearningAgentsImitationTrainerEditor ************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeFileCommunicator); \
	DECLARE_FUNCTION(execStopTraining); \
	DECLARE_FUNCTION(execStartTraining);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ALearningAgentsImitationTrainerEditor_Statics;
LEARNINGAGENTSTRAININGEDITOR_API UClass* Z_Construct_UClass_ALearningAgentsImitationTrainerEditor_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALearningAgentsImitationTrainerEditor(); \
	friend struct ::Z_Construct_UClass_ALearningAgentsImitationTrainerEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAININGEDITOR_API UClass* ::Z_Construct_UClass_ALearningAgentsImitationTrainerEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALearningAgentsImitationTrainerEditor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgentsTrainingEditor"), Z_Construct_UClass_ALearningAgentsImitationTrainerEditor_NoRegister) \
	DECLARE_SERIALIZER(ALearningAgentsImitationTrainerEditor)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALearningAgentsImitationTrainerEditor(ALearningAgentsImitationTrainerEditor&&) = delete; \
	ALearningAgentsImitationTrainerEditor(const ALearningAgentsImitationTrainerEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALearningAgentsImitationTrainerEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearningAgentsImitationTrainerEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALearningAgentsImitationTrainerEditor) \
	NO_API virtual ~ALearningAgentsImitationTrainerEditor();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALearningAgentsImitationTrainerEditor;

// ********** End Class ALearningAgentsImitationTrainerEditor **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTrainingEditor_Public_LearningAgentsImitationTrainerEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
