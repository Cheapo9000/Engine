// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphTrainingModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEURALMORPHMODELEDITOR_NeuralMorphTrainingModel_generated_h
#error "NeuralMorphTrainingModel.generated.h already included, missing '#pragma once' in NeuralMorphTrainingModel.h"
#endif
#define NEURALMORPHMODELEDITOR_NeuralMorphTrainingModel_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMorphTargetMasks); \
	DECLARE_FUNCTION(execGenerateCurveGroupIndices); \
	DECLARE_FUNCTION(execGenerateBoneGroupIndices); \
	DECLARE_FUNCTION(execGetNumCurveGroups); \
	DECLARE_FUNCTION(execGetNumBoneGroups);


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphTrainingModel(); \
	friend struct Z_Construct_UClass_UNeuralMorphTrainingModel_Statics; \
public: \
	DECLARE_CLASS(UNeuralMorphTrainingModel, UMLDeformerGeomCacheTrainingModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralMorphModelEditor"), NO_API) \
	DECLARE_SERIALIZER(UNeuralMorphTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuralMorphTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNeuralMorphTrainingModel(UNeuralMorphTrainingModel&&); \
	UNeuralMorphTrainingModel(const UNeuralMorphTrainingModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuralMorphTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphTrainingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralMorphTrainingModel) \
	NO_API virtual ~UNeuralMorphTrainingModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_14_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURALMORPHMODELEDITOR_API UClass* StaticClass<class UNeuralMorphTrainingModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
