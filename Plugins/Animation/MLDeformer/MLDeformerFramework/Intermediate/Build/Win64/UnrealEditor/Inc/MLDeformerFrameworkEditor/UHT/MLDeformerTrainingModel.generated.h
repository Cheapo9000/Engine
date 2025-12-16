// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerTrainingModel.h"

#ifdef MLDEFORMERFRAMEWORKEDITOR_MLDeformerTrainingModel_generated_h
#error "MLDeformerTrainingModel.generated.h already included, missing '#pragma once' in MLDeformerTrainingModel.h"
#endif
#define MLDEFORMERFRAMEWORKEDITOR_MLDeformerTrainingModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMLDeformerModel;

// ********** Begin Class UMLDeformerTrainingModel *************************************************
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMLDeformerTrainingModel_Statics;
MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerTrainingModel_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerTrainingModel(); \
	friend struct ::Z_Construct_UClass_UMLDeformerTrainingModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLDEFORMERFRAMEWORKEDITOR_API UClass* ::Z_Construct_UClass_UMLDeformerTrainingModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLDeformerTrainingModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLDeformerFrameworkEditor"), Z_Construct_UClass_UMLDeformerTrainingModel_NoRegister) \
	DECLARE_SERIALIZER(UMLDeformerTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MLDEFORMERFRAMEWORKEDITOR_API UMLDeformerTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLDeformerTrainingModel(UMLDeformerTrainingModel&&) = delete; \
	UMLDeformerTrainingModel(const UMLDeformerTrainingModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MLDEFORMERFRAMEWORKEDITOR_API, UMLDeformerTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerTrainingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerTrainingModel) \
	MLDEFORMERFRAMEWORKEDITOR_API virtual ~UMLDeformerTrainingModel();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_60_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLDeformerTrainingModel;

// ********** End Class UMLDeformerTrainingModel ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
