// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationCustomTransitionGraph.h"

#ifdef ANIMGRAPH_AnimationCustomTransitionGraph_generated_h
#error "AnimationCustomTransitionGraph.generated.h already included, missing '#pragma once' in AnimationCustomTransitionGraph.h"
#endif
#define ANIMGRAPH_AnimationCustomTransitionGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationCustomTransitionGraph ******************************************
struct Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationCustomTransitionGraph_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationCustomTransitionGraph(); \
	friend struct ::Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationCustomTransitionGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationCustomTransitionGraph, UAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationCustomTransitionGraph_NoRegister) \
	DECLARE_SERIALIZER(UAnimationCustomTransitionGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationCustomTransitionGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCustomTransitionGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationCustomTransitionGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCustomTransitionGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationCustomTransitionGraph(UAnimationCustomTransitionGraph&&) = delete; \
	UAnimationCustomTransitionGraph(const UAnimationCustomTransitionGraph&) = delete; \
	ANIMGRAPH_API virtual ~UAnimationCustomTransitionGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationCustomTransitionGraph;

// ********** End Class UAnimationCustomTransitionGraph ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
