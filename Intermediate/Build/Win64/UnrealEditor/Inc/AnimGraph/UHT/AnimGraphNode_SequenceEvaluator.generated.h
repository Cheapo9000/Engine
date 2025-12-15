// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_SequenceEvaluator.h"

#ifdef ANIMGRAPH_AnimGraphNode_SequenceEvaluator_generated_h
#error "AnimGraphNode_SequenceEvaluator.generated.h already included, missing '#pragma once' in AnimGraphNode_SequenceEvaluator.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SequenceEvaluator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_SequenceEvaluator *****************************************
struct Z_Construct_UClass_UAnimGraphNode_SequenceEvaluator_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SequenceEvaluator_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequenceEvaluator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SequenceEvaluator(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_SequenceEvaluator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_SequenceEvaluator_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_SequenceEvaluator, UAnimGraphNode_AssetPlayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_SequenceEvaluator_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_SequenceEvaluator)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequenceEvaluator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SequenceEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SequenceEvaluator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SequenceEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SequenceEvaluator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_SequenceEvaluator(UAnimGraphNode_SequenceEvaluator&&) = delete; \
	UAnimGraphNode_SequenceEvaluator(const UAnimGraphNode_SequenceEvaluator&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_SequenceEvaluator();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequenceEvaluator_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequenceEvaluator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequenceEvaluator_h_17_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequenceEvaluator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_SequenceEvaluator;

// ********** End Class UAnimGraphNode_SequenceEvaluator *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequenceEvaluator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
