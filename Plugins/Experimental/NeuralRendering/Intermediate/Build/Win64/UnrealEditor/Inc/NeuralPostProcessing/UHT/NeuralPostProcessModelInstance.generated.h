// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralPostProcessModelInstance.h"

#ifdef NEURALPOSTPROCESSING_NeuralPostProcessModelInstance_generated_h
#error "NeuralPostProcessModelInstance.generated.h already included, missing '#pragma once' in NeuralPostProcessModelInstance.h"
#endif
#define NEURALPOSTPROCESSING_NeuralPostProcessModelInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralPostProcessModelInstance ******************************************
struct Z_Construct_UClass_UNeuralPostProcessModelInstance_Statics;
NEURALPOSTPROCESSING_API UClass* Z_Construct_UClass_UNeuralPostProcessModelInstance_NoRegister();

#define FID_Engine_Plugins_Experimental_NeuralRendering_Source_NeuralPostProcessing_Private_NeuralPostProcessModelInstance_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUNeuralPostProcessModelInstance(); \
	friend struct ::Z_Construct_UClass_UNeuralPostProcessModelInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEURALPOSTPROCESSING_API UClass* ::Z_Construct_UClass_UNeuralPostProcessModelInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralPostProcessModelInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralPostProcessing"), Z_Construct_UClass_UNeuralPostProcessModelInstance_NoRegister) \
	DECLARE_SERIALIZER(UNeuralPostProcessModelInstance)


#define FID_Engine_Plugins_Experimental_NeuralRendering_Source_NeuralPostProcessing_Private_NeuralPostProcessModelInstance_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuralPostProcessModelInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralPostProcessModelInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuralPostProcessModelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralPostProcessModelInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralPostProcessModelInstance(UNeuralPostProcessModelInstance&&) = delete; \
	UNeuralPostProcessModelInstance(const UNeuralPostProcessModelInstance&) = delete; \
	NO_API virtual ~UNeuralPostProcessModelInstance();


#define FID_Engine_Plugins_Experimental_NeuralRendering_Source_NeuralPostProcessing_Private_NeuralPostProcessModelInstance_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_NeuralRendering_Source_NeuralPostProcessing_Private_NeuralPostProcessModelInstance_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NeuralRendering_Source_NeuralPostProcessing_Private_NeuralPostProcessModelInstance_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_NeuralRendering_Source_NeuralPostProcessing_Private_NeuralPostProcessModelInstance_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralPostProcessModelInstance;

// ********** End Class UNeuralPostProcessModelInstance ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NeuralRendering_Source_NeuralPostProcessing_Private_NeuralPostProcessModelInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
