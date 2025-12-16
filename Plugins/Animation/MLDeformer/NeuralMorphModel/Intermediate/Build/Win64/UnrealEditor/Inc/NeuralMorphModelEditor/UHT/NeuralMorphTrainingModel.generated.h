// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphTrainingModel.h"

#ifdef NEURALMORPHMODELEDITOR_NeuralMorphTrainingModel_generated_h
#error "NeuralMorphTrainingModel.generated.h already included, missing '#pragma once' in NeuralMorphTrainingModel.h"
#endif
#define NEURALMORPHMODELEDITOR_NeuralMorphTrainingModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralMorphTrainingModel ************************************************
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMorphTargetMasks); \
	DECLARE_FUNCTION(execGenerateCurveGroupIndices); \
	DECLARE_FUNCTION(execGenerateBoneGroupIndices); \
	DECLARE_FUNCTION(execGetNumCurveGroups); \
	DECLARE_FUNCTION(execGetNumBoneGroups);


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNeuralMorphTrainingModel_Statics;
NEURALMORPHMODELEDITOR_API UClass* Z_Construct_UClass_UNeuralMorphTrainingModel_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphTrainingModel(); \
	friend struct ::Z_Construct_UClass_UNeuralMorphTrainingModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEURALMORPHMODELEDITOR_API UClass* ::Z_Construct_UClass_UNeuralMorphTrainingModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralMorphTrainingModel, UMLDeformerGeomCacheTrainingModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralMorphModelEditor"), Z_Construct_UClass_UNeuralMorphTrainingModel_NoRegister) \
	DECLARE_SERIALIZER(UNeuralMorphTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEURALMORPHMODELEDITOR_API UNeuralMorphTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralMorphTrainingModel(UNeuralMorphTrainingModel&&) = delete; \
	UNeuralMorphTrainingModel(const UNeuralMorphTrainingModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEURALMORPHMODELEDITOR_API, UNeuralMorphTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphTrainingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralMorphTrainingModel) \
	NEURALMORPHMODELEDITOR_API virtual ~UNeuralMorphTrainingModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_16_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralMorphTrainingModel;

// ********** End Class UNeuralMorphTrainingModel **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphTrainingModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
