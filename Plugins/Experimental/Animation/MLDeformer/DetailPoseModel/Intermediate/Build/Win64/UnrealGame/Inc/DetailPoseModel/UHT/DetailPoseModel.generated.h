// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailPoseModel.h"

#ifdef DETAILPOSEMODEL_DetailPoseModel_generated_h
#error "DetailPoseModel.generated.h already included, missing '#pragma once' in DetailPoseModel.h"
#endif
#define DETAILPOSEMODEL_DetailPoseModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDetailPoseModelDetailPose ****************************************
struct Z_Construct_UScriptStruct_FDetailPoseModelDetailPose_Statics;
#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDetailPoseModelDetailPose_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDetailPoseModelDetailPose;
// ********** End ScriptStruct FDetailPoseModelDetailPose ******************************************

// ********** Begin Class UDetailPoseModel *********************************************************
#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDetailPoseModel, NO_API)


struct Z_Construct_UClass_UDetailPoseModel_Statics;
DETAILPOSEMODEL_API UClass* Z_Construct_UClass_UDetailPoseModel_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailPoseModel(); \
	friend struct ::Z_Construct_UClass_UDetailPoseModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DETAILPOSEMODEL_API UClass* ::Z_Construct_UClass_UDetailPoseModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailPoseModel, UNeuralMorphModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DetailPoseModel"), Z_Construct_UClass_UDetailPoseModel_NoRegister) \
	DECLARE_SERIALIZER(UDetailPoseModel) \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_33_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailPoseModel(UDetailPoseModel&&) = delete; \
	UDetailPoseModel(const UDetailPoseModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailPoseModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailPoseModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailPoseModel) \
	NO_API virtual ~UDetailPoseModel();


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailPoseModel;

// ********** End Class UDetailPoseModel ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
