// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsPolicy.h"

#ifdef LEARNINGAGENTS_LearningAgentsPolicy_generated_h
#error "LearningAgentsPolicy.generated.h already included, missing '#pragma once' in LearningAgentsPolicy.h"
#endif
#define LEARNINGAGENTS_LearningAgentsPolicy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsNeuralNetwork;
class ULearningAgentsPolicy;
struct FLearningAgentsPolicySettings;

// ********** Begin ScriptStruct FLearningAgentsPolicySettings *************************************
struct Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLearningAgentsPolicySettings_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FLearningAgentsPolicySettings;
// ********** End ScriptStruct FLearningAgentsPolicySettings ***************************************

// ********** Begin Class ULearningAgentsPolicy ****************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
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


struct Z_Construct_UClass_ULearningAgentsPolicy_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsPolicy_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsPolicy(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsPolicy, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsPolicy_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsPolicy)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsPolicy(ULearningAgentsPolicy&&) = delete; \
	ULearningAgentsPolicy(const ULearningAgentsPolicy&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsPolicy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsPolicy)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_70_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsPolicy;

// ********** End Class ULearningAgentsPolicy ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsPolicy_h

// ********** Begin Enum ELearningAgentsMemoryCell *************************************************
#define FOREACH_ENUM_ELEARNINGAGENTSMEMORYCELL(op) \
	op(ELearningAgentsMemoryCell::NoMemoryCell) \
	op(ELearningAgentsMemoryCell::LearningAgentsGRU) \
	op(ELearningAgentsMemoryCell::StandardGRU) 

enum class ELearningAgentsMemoryCell : uint8;
template<> struct TIsUEnumClass<ELearningAgentsMemoryCell> { enum { Value = true }; };
template<> LEARNINGAGENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELearningAgentsMemoryCell>();
// ********** End Enum ELearningAgentsMemoryCell ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
