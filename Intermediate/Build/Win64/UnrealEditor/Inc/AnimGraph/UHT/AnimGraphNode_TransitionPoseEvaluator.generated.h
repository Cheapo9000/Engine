// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_TransitionPoseEvaluator.h"

#ifdef ANIMGRAPH_AnimGraphNode_TransitionPoseEvaluator_generated_h
#error "AnimGraphNode_TransitionPoseEvaluator.generated.h already included, missing '#pragma once' in AnimGraphNode_TransitionPoseEvaluator.h"
#endif
#define ANIMGRAPH_AnimGraphNode_TransitionPoseEvaluator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_TransitionPoseEvaluator ***********************************
struct Z_Construct_UClass_UAnimGraphNode_TransitionPoseEvaluator_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TransitionPoseEvaluator_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionPoseEvaluator_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_TransitionPoseEvaluator(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_TransitionPoseEvaluator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_TransitionPoseEvaluator_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_TransitionPoseEvaluator, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_TransitionPoseEvaluator_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_TransitionPoseEvaluator)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionPoseEvaluator_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_TransitionPoseEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_TransitionPoseEvaluator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_TransitionPoseEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_TransitionPoseEvaluator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_TransitionPoseEvaluator(UAnimGraphNode_TransitionPoseEvaluator&&) = delete; \
	UAnimGraphNode_TransitionPoseEvaluator(const UAnimGraphNode_TransitionPoseEvaluator&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_TransitionPoseEvaluator();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionPoseEvaluator_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionPoseEvaluator_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionPoseEvaluator_h_18_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionPoseEvaluator_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_TransitionPoseEvaluator;

// ********** End Class UAnimGraphNode_TransitionPoseEvaluator *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionPoseEvaluator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
