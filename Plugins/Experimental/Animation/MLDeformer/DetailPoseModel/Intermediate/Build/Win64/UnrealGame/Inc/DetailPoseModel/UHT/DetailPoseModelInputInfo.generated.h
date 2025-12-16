// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailPoseModelInputInfo.h"

#ifdef DETAILPOSEMODEL_DetailPoseModelInputInfo_generated_h
#error "DetailPoseModelInputInfo.generated.h already included, missing '#pragma once' in DetailPoseModelInputInfo.h"
#endif
#define DETAILPOSEMODEL_DetailPoseModelInputInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetailPoseModelInputInfo ************************************************
struct Z_Construct_UClass_UDetailPoseModelInputInfo_Statics;
DETAILPOSEMODEL_API UClass* Z_Construct_UClass_UDetailPoseModelInputInfo_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInputInfo_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailPoseModelInputInfo(); \
	friend struct ::Z_Construct_UClass_UDetailPoseModelInputInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DETAILPOSEMODEL_API UClass* ::Z_Construct_UClass_UDetailPoseModelInputInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailPoseModelInputInfo, UNeuralMorphInputInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DetailPoseModel"), Z_Construct_UClass_UDetailPoseModelInputInfo_NoRegister) \
	DECLARE_SERIALIZER(UDetailPoseModelInputInfo)


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInputInfo_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailPoseModelInputInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailPoseModelInputInfo(UDetailPoseModelInputInfo&&) = delete; \
	UDetailPoseModelInputInfo(const UDetailPoseModelInputInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailPoseModelInputInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailPoseModelInputInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailPoseModelInputInfo) \
	NO_API virtual ~UDetailPoseModelInputInfo();


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInputInfo_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInputInfo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInputInfo_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInputInfo_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailPoseModelInputInfo;

// ********** End Class UDetailPoseModelInputInfo **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInputInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
