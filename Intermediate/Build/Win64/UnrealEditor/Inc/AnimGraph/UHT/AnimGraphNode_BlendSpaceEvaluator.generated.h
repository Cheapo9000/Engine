// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BlendSpaceEvaluator.h"

#ifdef ANIMGRAPH_AnimGraphNode_BlendSpaceEvaluator_generated_h
#error "AnimGraphNode_BlendSpaceEvaluator.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendSpaceEvaluator.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendSpaceEvaluator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_BlendSpaceEvaluator ***************************************
struct Z_Construct_UClass_UAnimGraphNode_BlendSpaceEvaluator_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceEvaluator_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceEvaluator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendSpaceEvaluator(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_BlendSpaceEvaluator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_BlendSpaceEvaluator_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_BlendSpaceEvaluator, UAnimGraphNode_BlendSpaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_BlendSpaceEvaluator_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendSpaceEvaluator)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceEvaluator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendSpaceEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendSpaceEvaluator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendSpaceEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendSpaceEvaluator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BlendSpaceEvaluator(UAnimGraphNode_BlendSpaceEvaluator&&) = delete; \
	UAnimGraphNode_BlendSpaceEvaluator(const UAnimGraphNode_BlendSpaceEvaluator&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_BlendSpaceEvaluator();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceEvaluator_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceEvaluator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceEvaluator_h_17_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceEvaluator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_BlendSpaceEvaluator;

// ********** End Class UAnimGraphNode_BlendSpaceEvaluator *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceEvaluator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
