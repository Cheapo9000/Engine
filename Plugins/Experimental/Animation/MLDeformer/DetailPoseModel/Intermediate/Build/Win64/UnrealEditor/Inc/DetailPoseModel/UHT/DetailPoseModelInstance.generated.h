// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailPoseModelInstance.h"

#ifdef DETAILPOSEMODEL_DetailPoseModelInstance_generated_h
#error "DetailPoseModelInstance.generated.h already included, missing '#pragma once' in DetailPoseModelInstance.h"
#endif
#define DETAILPOSEMODEL_DetailPoseModelInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetailPoseModelInstance *************************************************
struct Z_Construct_UClass_UDetailPoseModelInstance_Statics;
DETAILPOSEMODEL_API UClass* Z_Construct_UClass_UDetailPoseModelInstance_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailPoseModelInstance(); \
	friend struct ::Z_Construct_UClass_UDetailPoseModelInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DETAILPOSEMODEL_API UClass* ::Z_Construct_UClass_UDetailPoseModelInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailPoseModelInstance, UNeuralMorphModelInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DetailPoseModel"), Z_Construct_UClass_UDetailPoseModelInstance_NoRegister) \
	DECLARE_SERIALIZER(UDetailPoseModelInstance)


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInstance_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailPoseModelInstance(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailPoseModelInstance(UDetailPoseModelInstance&&) = delete; \
	UDetailPoseModelInstance(const UDetailPoseModelInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailPoseModelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailPoseModelInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDetailPoseModelInstance) \
	NO_API virtual ~UDetailPoseModelInstance();


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInstance_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInstance_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailPoseModelInstance;

// ********** End Class UDetailPoseModelInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
