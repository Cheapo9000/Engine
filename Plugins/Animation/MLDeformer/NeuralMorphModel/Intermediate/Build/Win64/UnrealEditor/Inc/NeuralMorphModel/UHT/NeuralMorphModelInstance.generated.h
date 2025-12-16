// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphModelInstance.h"

#ifdef NEURALMORPHMODEL_NeuralMorphModelInstance_generated_h
#error "NeuralMorphModelInstance.generated.h already included, missing '#pragma once' in NeuralMorphModelInstance.h"
#endif
#define NEURALMORPHMODEL_NeuralMorphModelInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralMorphModelInstance ************************************************
struct Z_Construct_UClass_UNeuralMorphModelInstance_Statics;
NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelInstance_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphModelInstance(); \
	friend struct ::Z_Construct_UClass_UNeuralMorphModelInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEURALMORPHMODEL_API UClass* ::Z_Construct_UClass_UNeuralMorphModelInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralMorphModelInstance, UMLDeformerMorphModelInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralMorphModel"), Z_Construct_UClass_UNeuralMorphModelInstance_NoRegister) \
	DECLARE_SERIALIZER(UNeuralMorphModelInstance)


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEURALMORPHMODEL_API UNeuralMorphModelInstance(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralMorphModelInstance(UNeuralMorphModelInstance&&) = delete; \
	UNeuralMorphModelInstance(const UNeuralMorphModelInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEURALMORPHMODEL_API, UNeuralMorphModelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphModelInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNeuralMorphModelInstance) \
	NEURALMORPHMODEL_API virtual ~UNeuralMorphModelInstance();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_13_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralMorphModelInstance;

// ********** End Class UNeuralMorphModelInstance **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
