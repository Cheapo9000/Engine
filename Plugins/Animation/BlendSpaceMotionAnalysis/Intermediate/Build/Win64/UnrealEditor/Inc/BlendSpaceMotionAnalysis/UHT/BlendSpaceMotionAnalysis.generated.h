// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendSpaceMotionAnalysis.h"

#ifdef BLENDSPACEMOTIONANALYSIS_BlendSpaceMotionAnalysis_generated_h
#error "BlendSpaceMotionAnalysis.generated.h already included, missing '#pragma once' in BlendSpaceMotionAnalysis.h"
#endif
#define BLENDSPACEMOTIONANALYSIS_BlendSpaceMotionAnalysis_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCachedMotionAnalysisProperties ******************************************
struct Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics;
BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_UCachedMotionAnalysisProperties_NoRegister();

#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCachedMotionAnalysisProperties(); \
	friend struct ::Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLENDSPACEMOTIONANALYSIS_API UClass* ::Z_Construct_UClass_UCachedMotionAnalysisProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UCachedMotionAnalysisProperties, UCachedAnalysisProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlendSpaceMotionAnalysis"), Z_Construct_UClass_UCachedMotionAnalysisProperties_NoRegister) \
	DECLARE_SERIALIZER(UCachedMotionAnalysisProperties)


#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCachedMotionAnalysisProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCachedMotionAnalysisProperties(UCachedMotionAnalysisProperties&&) = delete; \
	UCachedMotionAnalysisProperties(const UCachedMotionAnalysisProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCachedMotionAnalysisProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCachedMotionAnalysisProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCachedMotionAnalysisProperties) \
	NO_API virtual ~UCachedMotionAnalysisProperties();


#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_13_PROLOG
#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCachedMotionAnalysisProperties;

// ********** End Class UCachedMotionAnalysisProperties ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
