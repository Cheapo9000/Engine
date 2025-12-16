// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningNeuralNetwork.h"

#ifdef LEARNING_LearningNeuralNetwork_generated_h
#error "LearningNeuralNetwork.generated.h already included, missing '#pragma once' in LearningNeuralNetwork.h"
#endif
#define LEARNING_LearningNeuralNetwork_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULearningNeuralNetworkData ***********************************************
struct Z_Construct_UClass_ULearningNeuralNetworkData_Statics;
LEARNING_API UClass* Z_Construct_UClass_ULearningNeuralNetworkData_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_Learning_Public_LearningNeuralNetwork_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningNeuralNetworkData(); \
	friend struct ::Z_Construct_UClass_ULearningNeuralNetworkData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNING_API UClass* ::Z_Construct_UClass_ULearningNeuralNetworkData_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningNeuralNetworkData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Learning"), Z_Construct_UClass_ULearningNeuralNetworkData_NoRegister) \
	DECLARE_SERIALIZER(ULearningNeuralNetworkData)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_Learning_Public_LearningNeuralNetwork_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNING_API ULearningNeuralNetworkData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningNeuralNetworkData(ULearningNeuralNetworkData&&) = delete; \
	ULearningNeuralNetworkData(const ULearningNeuralNetworkData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNING_API, ULearningNeuralNetworkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningNeuralNetworkData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningNeuralNetworkData) \
	LEARNING_API virtual ~ULearningNeuralNetworkData();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_Learning_Public_LearningNeuralNetwork_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_Learning_Public_LearningNeuralNetwork_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_Learning_Public_LearningNeuralNetwork_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_Learning_Public_LearningNeuralNetwork_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningNeuralNetworkData;

// ********** End Class ULearningNeuralNetworkData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_Learning_Public_LearningNeuralNetwork_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
