// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerMorphModel.h"

#ifdef MLDEFORMERFRAMEWORK_MLDeformerMorphModel_generated_h
#error "MLDeformerMorphModel.generated.h already included, missing '#pragma once' in MLDeformerMorphModel.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerMorphModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMLDeformerMorphModel ****************************************************
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMorphTargetsMinMaxWeights); \
	DECLARE_FUNCTION(execSetMorphTargetsMaxWeights); \
	DECLARE_FUNCTION(execSetMorphTargetsErrorOrder); \
	DECLARE_FUNCTION(execSetMorphTargetDeltas); \
	DECLARE_FUNCTION(execSetMorphTargetDeltaFloats); \
	DECLARE_FUNCTION(execCanDynamicallyUpdateMorphTargets);


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerMorphModel, MLDEFORMERFRAMEWORK_API)


struct Z_Construct_UClass_UMLDeformerMorphModel_Statics;
MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModel_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerMorphModel(); \
	friend struct ::Z_Construct_UClass_UMLDeformerMorphModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLDEFORMERFRAMEWORK_API UClass* ::Z_Construct_UClass_UMLDeformerMorphModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLDeformerMorphModel, UMLDeformerGeomCacheModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), Z_Construct_UClass_UMLDeformerMorphModel_NoRegister) \
	DECLARE_SERIALIZER(UMLDeformerMorphModel) \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLDeformerMorphModel(UMLDeformerMorphModel&&) = delete; \
	UMLDeformerMorphModel(const UMLDeformerMorphModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MLDEFORMERFRAMEWORK_API, UMLDeformerMorphModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerMorphModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerMorphModel) \
	MLDEFORMERFRAMEWORK_API virtual ~UMLDeformerMorphModel();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_21_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLDeformerMorphModel;

// ********** End Class UMLDeformerMorphModel ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
