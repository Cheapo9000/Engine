// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequencerDataModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONDATA_AnimSequencerDataModel_generated_h
#error "AnimSequencerDataModel.generated.h already included, missing '#pragma once' in AnimSequencerDataModel.h"
#endif
#define ANIMATIONDATA_AnimSequencerDataModel_generated_h

#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics; \
	ANIMATIONDATA_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONDATA_API UScriptStruct* StaticStruct<struct FAnimationCurveMetaData>();

#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSequencerDataModel(); \
	friend struct Z_Construct_UClass_UAnimationSequencerDataModel_Statics; \
public: \
	DECLARE_CLASS(UAnimationSequencerDataModel, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationData"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSequencerDataModel) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationSequencerDataModel*>(this); }


#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSequencerDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationSequencerDataModel(UAnimationSequencerDataModel&&); \
	UAnimationSequencerDataModel(const UAnimationSequencerDataModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSequencerDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSequencerDataModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSequencerDataModel) \
	NO_API virtual ~UAnimationSequencerDataModel();


#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_32_PROLOG
#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONDATA_API UClass* StaticClass<class UAnimationSequencerDataModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
