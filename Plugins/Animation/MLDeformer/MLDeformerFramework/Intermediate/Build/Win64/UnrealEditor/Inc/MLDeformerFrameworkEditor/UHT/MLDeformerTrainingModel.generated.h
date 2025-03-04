// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerTrainingModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMLDeformerModel;
#ifdef MLDEFORMERFRAMEWORKEDITOR_MLDeformerTrainingModel_generated_h
#error "MLDeformerTrainingModel.generated.h already included, missing '#pragma once' in MLDeformerTrainingModel.h"
#endif
#define MLDEFORMERFRAMEWORKEDITOR_MLDeformerTrainingModel_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDeviceList); \
	DECLARE_FUNCTION(execGetMaskIndexPerSampleArray); \
	DECLARE_FUNCTION(execGetTrainingInputAnimMaskData); \
	DECLARE_FUNCTION(execGetTrainingInputAnimMasks); \
	DECLARE_FUNCTION(execSetNumFloatsPerCurve); \
	DECLARE_FUNCTION(execSetNeedsResampling); \
	DECLARE_FUNCTION(execGetNeedsResampling); \
	DECLARE_FUNCTION(execNextSample); \
	DECLARE_FUNCTION(execSetCurrentSampleIndex); \
	DECLARE_FUNCTION(execResetSampling); \
	DECLARE_FUNCTION(execNumSamples); \
	DECLARE_FUNCTION(execGetNumberSampleDeltas); \
	DECLARE_FUNCTION(execGetNumberSampleCurves); \
	DECLARE_FUNCTION(execGetNumberSampleTransforms); \
	DECLARE_FUNCTION(execGetModel);


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerTrainingModel(); \
	friend struct Z_Construct_UClass_UMLDeformerTrainingModel_Statics; \
public: \
	DECLARE_CLASS(UMLDeformerTrainingModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLDeformerFrameworkEditor"), NO_API) \
	DECLARE_SERIALIZER(UMLDeformerTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLDeformerTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMLDeformerTrainingModel(UMLDeformerTrainingModel&&); \
	UMLDeformerTrainingModel(const UMLDeformerTrainingModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLDeformerTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerTrainingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerTrainingModel) \
	NO_API virtual ~UMLDeformerTrainingModel();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_58_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLDEFORMERFRAMEWORKEDITOR_API UClass* StaticClass<class UMLDeformerTrainingModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
