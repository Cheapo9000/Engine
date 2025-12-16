// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequencerDataModel.h"

#ifdef ANIMATIONDATA_AnimSequencerDataModel_generated_h
#error "AnimSequencerDataModel.generated.h already included, missing '#pragma once' in AnimSequencerDataModel.h"
#endif
#define ANIMATIONDATA_AnimSequencerDataModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimationCurveMetaData *******************************************
struct Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics;
#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics; \
	ANIMATIONDATA_API static class UScriptStruct* StaticStruct();


struct FAnimationCurveMetaData;
// ********** End ScriptStruct FAnimationCurveMetaData *********************************************

// ********** Begin Class UAnimationSequencerDataModel *********************************************
struct Z_Construct_UClass_UAnimationSequencerDataModel_Statics;
ANIMATIONDATA_API UClass* Z_Construct_UClass_UAnimationSequencerDataModel_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSequencerDataModel(); \
	friend struct ::Z_Construct_UClass_UAnimationSequencerDataModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONDATA_API UClass* ::Z_Construct_UClass_UAnimationSequencerDataModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationSequencerDataModel, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationData"), Z_Construct_UClass_UAnimationSequencerDataModel_NoRegister) \
	DECLARE_SERIALIZER(UAnimationSequencerDataModel) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationSequencerDataModel*>(this); }


#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONDATA_API UAnimationSequencerDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationSequencerDataModel(UAnimationSequencerDataModel&&) = delete; \
	UAnimationSequencerDataModel(const UAnimationSequencerDataModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONDATA_API, UAnimationSequencerDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSequencerDataModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSequencerDataModel) \
	ANIMATIONDATA_API virtual ~UAnimationSequencerDataModel();


#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_35_PROLOG
#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationSequencerDataModel;

// ********** End Class UAnimationSequencerDataModel ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
