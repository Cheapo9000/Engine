// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsCritic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsCritic;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsNeuralNetwork;
class ULearningAgentsPolicy;
struct FLearningAgentsCriticSettings;
#ifdef LEARNINGAGENTS_LearningAgentsCritic_generated_h
#error "LearningAgentsCritic.generated.h already included, missing '#pragma once' in LearningAgentsCritic.h"
#endif
#define LEARNINGAGENTS_LearningAgentsCritic_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<struct FLearningAgentsCriticSettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCriticNetworkAsset); \
	DECLARE_FUNCTION(execGetEstimatedDiscountedReturn); \
	DECLARE_FUNCTION(execEvaluateCritic); \
	DECLARE_FUNCTION(execSetupCritic); \
	DECLARE_FUNCTION(execMakeCritic);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsCritic(); \
	friend struct Z_Construct_UClass_ULearningAgentsCritic_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsCritic, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsCritic)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsCritic(ULearningAgentsCritic&&); \
	ULearningAgentsCritic(const ULearningAgentsCritic&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsCritic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsCritic)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsCritic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
