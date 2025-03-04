// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerMorphModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLDEFORMERFRAMEWORK_MLDeformerMorphModel_generated_h
#error "MLDeformerMorphModel.generated.h already included, missing '#pragma once' in MLDeformerMorphModel.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerMorphModel_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMorphTargetsMinMaxWeights); \
	DECLARE_FUNCTION(execSetMorphTargetsMaxWeights); \
	DECLARE_FUNCTION(execSetMorphTargetsErrorOrder); \
	DECLARE_FUNCTION(execSetMorphTargetDeltas); \
	DECLARE_FUNCTION(execSetMorphTargetDeltaFloats); \
	DECLARE_FUNCTION(execCanDynamicallyUpdateMorphTargets);


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerMorphModel, NO_API)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerMorphModel(); \
	friend struct Z_Construct_UClass_UMLDeformerMorphModel_Statics; \
public: \
	DECLARE_CLASS(UMLDeformerMorphModel, UMLDeformerGeomCacheModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), NO_API) \
	DECLARE_SERIALIZER(UMLDeformerMorphModel) \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMLDeformerMorphModel(UMLDeformerMorphModel&&); \
	UMLDeformerMorphModel(const UMLDeformerMorphModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLDeformerMorphModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerMorphModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerMorphModel) \
	NO_API virtual ~UMLDeformerMorphModel();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_19_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<class UMLDeformerMorphModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
