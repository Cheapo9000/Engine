// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsCommunicator.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsCommunicator_generated_h
#error "LearningAgentsCommunicator.generated.h already included, missing '#pragma once' in LearningAgentsCommunicator.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsCommunicator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLearningAgentsCommunicator;
struct FLearningAgentsSharedMemoryCommunicatorSettings;
struct FLearningAgentsSharedMemoryTrainerProcess;
struct FLearningAgentsSocketCommunicatorSettings;
struct FLearningAgentsSocketTrainerProcess;
struct FLearningAgentsTrainerProcessSettings;

// ********** Begin ScriptStruct FLearningAgentsSharedMemoryCommunicatorSettings *******************
struct Z_Construct_UScriptStruct_FLearningAgentsSharedMemoryCommunicatorSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsSharedMemoryCommunicatorSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsSharedMemoryCommunicatorSettings;
// ********** End ScriptStruct FLearningAgentsSharedMemoryCommunicatorSettings *********************

// ********** Begin ScriptStruct FLearningAgentsSocketCommunicatorSettings *************************
struct Z_Construct_UScriptStruct_FLearningAgentsSocketCommunicatorSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsSocketCommunicatorSettings_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsSocketCommunicatorSettings;
// ********** End ScriptStruct FLearningAgentsSocketCommunicatorSettings ***************************

// ********** Begin ScriptStruct FLearningAgentsSharedMemoryTrainerProcess *************************
struct Z_Construct_UScriptStruct_FLearningAgentsSharedMemoryTrainerProcess_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsSharedMemoryTrainerProcess_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsSharedMemoryTrainerProcess;
// ********** End ScriptStruct FLearningAgentsSharedMemoryTrainerProcess ***************************

// ********** Begin ScriptStruct FLearningAgentsSocketTrainerProcess *******************************
struct Z_Construct_UScriptStruct_FLearningAgentsSocketTrainerProcess_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsSocketTrainerProcess_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsSocketTrainerProcess;
// ********** End ScriptStruct FLearningAgentsSocketTrainerProcess *********************************

// ********** Begin ScriptStruct FLearningAgentsCommunicator ***************************************
struct Z_Construct_UScriptStruct_FLearningAgentsCommunicator_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsCommunicator_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsCommunicator;
// ********** End ScriptStruct FLearningAgentsCommunicator *****************************************

// ********** Begin Class ULearningAgentsCommunicatorLibrary ***************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeSocketCommunicator); \
	DECLARE_FUNCTION(execSpawnSocketTrainingProcess); \
	DECLARE_FUNCTION(execMakeSocketTrainingProcess); \
	DECLARE_FUNCTION(execMakeSharedMemoryCommunicator); \
	DECLARE_FUNCTION(execSpawnSharedMemoryTrainingProcess); \
	DECLARE_FUNCTION(execMakeSharedMemoryTrainingProcess);


struct Z_Construct_UClass_ULearningAgentsCommunicatorLibrary_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsCommunicatorLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsCommunicatorLibrary(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsCommunicatorLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ULearningAgentsCommunicatorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsCommunicatorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ULearningAgentsCommunicatorLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsCommunicatorLibrary)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTSTRAINING_API ULearningAgentsCommunicatorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsCommunicatorLibrary(ULearningAgentsCommunicatorLibrary&&) = delete; \
	ULearningAgentsCommunicatorLibrary(const ULearningAgentsCommunicatorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ULearningAgentsCommunicatorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsCommunicatorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsCommunicatorLibrary) \
	LEARNINGAGENTSTRAINING_API virtual ~ULearningAgentsCommunicatorLibrary();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_104_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsCommunicatorLibrary;

// ********** End Class ULearningAgentsCommunicatorLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
