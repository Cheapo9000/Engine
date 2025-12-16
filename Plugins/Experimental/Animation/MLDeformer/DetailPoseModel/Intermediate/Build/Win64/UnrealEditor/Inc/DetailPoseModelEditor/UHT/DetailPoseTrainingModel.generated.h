// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailPoseTrainingModel.h"

#ifdef DETAILPOSEMODELEDITOR_DetailPoseTrainingModel_generated_h
#error "DetailPoseTrainingModel.generated.h already included, missing '#pragma once' in DetailPoseTrainingModel.h"
#endif
#define DETAILPOSEMODELEDITOR_DetailPoseTrainingModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetailPoseTrainingModel *************************************************
struct Z_Construct_UClass_UDetailPoseTrainingModel_Statics;
DETAILPOSEMODELEDITOR_API UClass* Z_Construct_UClass_UDetailPoseTrainingModel_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModelEditor_Public_DetailPoseTrainingModel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailPoseTrainingModel(); \
	friend struct ::Z_Construct_UClass_UDetailPoseTrainingModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DETAILPOSEMODELEDITOR_API UClass* ::Z_Construct_UClass_UDetailPoseTrainingModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailPoseTrainingModel, UNeuralMorphTrainingModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DetailPoseModelEditor"), Z_Construct_UClass_UDetailPoseTrainingModel_NoRegister) \
	DECLARE_SERIALIZER(UDetailPoseTrainingModel)


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModelEditor_Public_DetailPoseTrainingModel_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailPoseTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailPoseTrainingModel(UDetailPoseTrainingModel&&) = delete; \
	UDetailPoseTrainingModel(const UDetailPoseTrainingModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailPoseTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailPoseTrainingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailPoseTrainingModel) \
	NO_API virtual ~UDetailPoseTrainingModel();


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModelEditor_Public_DetailPoseTrainingModel_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModelEditor_Public_DetailPoseTrainingModel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModelEditor_Public_DetailPoseTrainingModel_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModelEditor_Public_DetailPoseTrainingModel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailPoseTrainingModel;

// ********** End Class UDetailPoseTrainingModel ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModelEditor_Public_DetailPoseTrainingModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
