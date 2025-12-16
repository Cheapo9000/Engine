// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RootMotionAnalysis.h"

#ifdef BLENDSPACEMOTIONANALYSIS_RootMotionAnalysis_generated_h
#error "RootMotionAnalysis.generated.h already included, missing '#pragma once' in RootMotionAnalysis.h"
#endif
#define BLENDSPACEMOTIONANALYSIS_RootMotionAnalysis_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URootMotionAnalysisProperties ********************************************
struct Z_Construct_UClass_URootMotionAnalysisProperties_Statics;
BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_URootMotionAnalysisProperties_NoRegister();

#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionAnalysisProperties(); \
	friend struct ::Z_Construct_UClass_URootMotionAnalysisProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLENDSPACEMOTIONANALYSIS_API UClass* ::Z_Construct_UClass_URootMotionAnalysisProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(URootMotionAnalysisProperties, ULinearAnalysisPropertiesBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlendSpaceMotionAnalysis"), Z_Construct_UClass_URootMotionAnalysisProperties_NoRegister) \
	DECLARE_SERIALIZER(URootMotionAnalysisProperties)


#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URootMotionAnalysisProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionAnalysisProperties(URootMotionAnalysisProperties&&) = delete; \
	URootMotionAnalysisProperties(const URootMotionAnalysisProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionAnalysisProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionAnalysisProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionAnalysisProperties) \
	NO_API virtual ~URootMotionAnalysisProperties();


#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_22_PROLOG
#define FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionAnalysisProperties;

// ********** End Class URootMotionAnalysisProperties **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h

// ********** Begin Enum EAnalysisRootMotionAxis ***************************************************
#define FOREACH_ENUM_EANALYSISROOTMOTIONAXIS(op) \
	op(EAnalysisRootMotionAxis::Speed) \
	op(EAnalysisRootMotionAxis::Direction) \
	op(EAnalysisRootMotionAxis::ForwardSpeed) \
	op(EAnalysisRootMotionAxis::RightwardSpeed) \
	op(EAnalysisRootMotionAxis::UpwardSpeed) \
	op(EAnalysisRootMotionAxis::ForwardSlope) \
	op(EAnalysisRootMotionAxis::RightwardSlope) 

enum class EAnalysisRootMotionAxis : uint8;
template<> struct TIsUEnumClass<EAnalysisRootMotionAxis> { enum { Value = true }; };
template<> BLENDSPACEMOTIONANALYSIS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnalysisRootMotionAxis>();
// ********** End Enum EAnalysisRootMotionAxis *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
