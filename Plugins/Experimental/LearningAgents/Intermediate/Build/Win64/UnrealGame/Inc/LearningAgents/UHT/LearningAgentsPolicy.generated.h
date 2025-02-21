// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsPolicy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsNeuralNetwork;
class ULearningAgentsPolicy;
struct FLearningAgentsPolicySettings;
#ifdef LEARNINGAGENTS_LearningAgentsPolicy_generated_h
#error "LearningAgentsPolicy.generated.h already included, missing '#pragma once' in LearningAgentsPolicy.h"
#endif
#define LEARNINGAGENTS_LearningAgentsPolicy_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEARNINGAGENTS_API UScriptStruct* StaticStruct<struct FLearningAgentsPolicySettings>();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDecoderNetworkAsset); \
	DECLARE_FUNCTION(execGetPolicyNetworkAsset); \
	DECLARE_FUNCTION(execGetEncoderNetworkAsset); \
	DECLARE_FUNCTION(execGetMemoryStateSize); \
	DECLARE_FUNCTION(execSetMemoryState); \
	DECLARE_FUNCTION(execGetMemoryState); \
	DECLARE_FUNCTION(execRunInference); \
	DECLARE_FUNCTION(execDecodeAndSampleActions); \
	DECLARE_FUNCTION(execEvaluatePolicy); \
	DECLARE_FUNCTION(execEncodeObservations); \
	DECLARE_FUNCTION(execSetupPolicy); \
	DECLARE_FUNCTION(execMakePolicy);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsPolicy(); \
	friend struct Z_Construct_UClass_ULearningAgentsPolicy_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsPolicy, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsPolicy)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsPolicy(ULearningAgentsPolicy&&); \
	ULearningAgentsPolicy(const ULearningAgentsPolicy&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsPolicy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsPolicy)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsPolicy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
