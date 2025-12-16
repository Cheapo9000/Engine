// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsCritic.h"

#ifdef LEARNINGAGENTS_LearningAgentsCritic_generated_h
#error "LearningAgentsCritic.generated.h already included, missing '#pragma once' in LearningAgentsCritic.h"
#endif
#define LEARNINGAGENTS_LearningAgentsCritic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsCritic;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsNeuralNetwork;
class ULearningAgentsPolicy;
struct FLearningAgentsCriticSettings;

// ********** Begin ScriptStruct FLearningAgentsCriticSettings *************************************
struct Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsCriticSettings_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsCriticSettings;
// ********** End ScriptStruct FLearningAgentsCriticSettings ***************************************

// ********** Begin Class ULearningAgentsCritic ****************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCriticNetworkAsset); \
	DECLARE_FUNCTION(execGetEstimatedDiscountedReturn); \
	DECLARE_FUNCTION(execEvaluateCritic); \
	DECLARE_FUNCTION(execSetupCritic); \
	DECLARE_FUNCTION(execMakeCritic);


struct Z_Construct_UClass_ULearningAgentsCritic_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsCritic_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsCritic(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsCritic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsCritic_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsCritic, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsCritic_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsCritic)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsCritic(ULearningAgentsCritic&&) = delete; \
	ULearningAgentsCritic(const ULearningAgentsCritic&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsCritic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsCritic)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsCritic;

// ********** End Class ULearningAgentsCritic ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsCritic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
