// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsNeuralNetwork.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsNeuralNetwork;
struct FFilePath;
#ifdef LEARNINGAGENTS_LearningAgentsNeuralNetwork_generated_h
#error "LearningAgentsNeuralNetwork.generated.h already included, missing '#pragma once' in LearningAgentsNeuralNetwork.h"
#endif
#define LEARNINGAGENTS_LearningAgentsNeuralNetwork_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveNetworkToAsset); \
	DECLARE_FUNCTION(execLoadNetworkFromAsset); \
	DECLARE_FUNCTION(execSaveNetworkToSnapshot); \
	DECLARE_FUNCTION(execLoadNetworkFromSnapshot); \
	DECLARE_FUNCTION(execResetNetwork);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsNeuralNetwork(); \
	friend struct Z_Construct_UClass_ULearningAgentsNeuralNetwork_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsNeuralNetwork, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsNeuralNetwork)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsNeuralNetwork(ULearningAgentsNeuralNetwork&&); \
	ULearningAgentsNeuralNetwork(const ULearningAgentsNeuralNetwork&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsNeuralNetwork); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsNeuralNetwork)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsNeuralNetwork>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsNeuralNetwork_h


#define FOREACH_ENUM_ELEARNINGAGENTSACTIVATIONFUNCTION(op) \
	op(ELearningAgentsActivationFunction::ReLU) \
	op(ELearningAgentsActivationFunction::ELU) \
	op(ELearningAgentsActivationFunction::TanH) 

enum class ELearningAgentsActivationFunction : uint8;
template<> struct TIsUEnumClass<ELearningAgentsActivationFunction> { enum { Value = true }; };
template<> LEARNINGAGENTS_API UEnum* StaticEnum<ELearningAgentsActivationFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
