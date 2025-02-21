// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsCommunicator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLearningAgentsCommunicator;
struct FLearningAgentsSharedMemoryCommunicatorSettings;
struct FLearningAgentsSocketCommunicatorSettings;
struct FLearningAgentsTrainerProcess;
struct FLearningAgentsTrainerProcessSettings;
#ifdef LEARNINGAGENTSTRAINING_LearningAgentsCommunicator_generated_h
#error "LearningAgentsCommunicator.generated.h already included, missing '#pragma once' in LearningAgentsCommunicator.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsCommunicator_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsSharedMemoryCommunicatorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsSharedMemoryCommunicatorSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsSocketCommunicatorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsSocketCommunicatorSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsTrainerProcess_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsTrainerProcess>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsCommunicator_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTSTRAINING_API UScriptStruct* StaticStruct<struct FLearningAgentsCommunicator>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeSocketCommunicator); \
	DECLARE_FUNCTION(execSpawnSocketTrainingProcess); \
	DECLARE_FUNCTION(execMakeSharedMemoryCommunicator); \
	DECLARE_FUNCTION(execSpawnSharedMemoryTrainingProcess);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsCommunicatorLibrary(); \
	friend struct Z_Construct_UClass_ULearningAgentsCommunicatorLibrary_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsCommunicatorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsCommunicatorLibrary)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULearningAgentsCommunicatorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsCommunicatorLibrary(ULearningAgentsCommunicatorLibrary&&); \
	ULearningAgentsCommunicatorLibrary(const ULearningAgentsCommunicatorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULearningAgentsCommunicatorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsCommunicatorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsCommunicatorLibrary) \
	NO_API virtual ~ULearningAgentsCommunicatorLibrary();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_80_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTSTRAINING_API UClass* StaticClass<class ULearningAgentsCommunicatorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsCommunicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
