// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailPoseModelVizSettings.h"

#ifdef DETAILPOSEMODEL_DetailPoseModelVizSettings_generated_h
#error "DetailPoseModelVizSettings.generated.h already included, missing '#pragma once' in DetailPoseModelVizSettings.h"
#endif
#define DETAILPOSEMODEL_DetailPoseModelVizSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetailPoseModelVizSettings **********************************************
struct Z_Construct_UClass_UDetailPoseModelVizSettings_Statics;
DETAILPOSEMODEL_API UClass* Z_Construct_UClass_UDetailPoseModelVizSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelVizSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailPoseModelVizSettings(); \
	friend struct ::Z_Construct_UClass_UDetailPoseModelVizSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DETAILPOSEMODEL_API UClass* ::Z_Construct_UClass_UDetailPoseModelVizSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailPoseModelVizSettings, UNeuralMorphModelVizSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DetailPoseModel"), Z_Construct_UClass_UDetailPoseModelVizSettings_NoRegister) \
	DECLARE_SERIALIZER(UDetailPoseModelVizSettings)


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelVizSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailPoseModelVizSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailPoseModelVizSettings(UDetailPoseModelVizSettings&&) = delete; \
	UDetailPoseModelVizSettings(const UDetailPoseModelVizSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailPoseModelVizSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailPoseModelVizSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailPoseModelVizSettings) \
	NO_API virtual ~UDetailPoseModelVizSettings();


#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelVizSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelVizSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelVizSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelVizSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailPoseModelVizSettings;

// ********** End Class UDetailPoseModelVizSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MLDeformer_DetailPoseModel_Source_DetailPoseModel_Public_DetailPoseModelVizSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
