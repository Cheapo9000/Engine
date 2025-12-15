// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationBlendSpaceSampleGraph.h"

#ifdef ANIMGRAPH_AnimationBlendSpaceSampleGraph_generated_h
#error "AnimationBlendSpaceSampleGraph.generated.h already included, missing '#pragma once' in AnimationBlendSpaceSampleGraph.h"
#endif
#define ANIMGRAPH_AnimationBlendSpaceSampleGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationBlendSpaceSampleGraph ******************************************
struct Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBlendSpaceSampleGraph(); \
	friend struct ::Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationBlendSpaceSampleGraph, UAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_NoRegister) \
	DECLARE_SERIALIZER(UAnimationBlendSpaceSampleGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationBlendSpaceSampleGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationBlendSpaceSampleGraph(UAnimationBlendSpaceSampleGraph&&) = delete; \
	UAnimationBlendSpaceSampleGraph(const UAnimationBlendSpaceSampleGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationBlendSpaceSampleGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlendSpaceSampleGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlendSpaceSampleGraph) \
	ANIMGRAPH_API virtual ~UAnimationBlendSpaceSampleGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationBlendSpaceSampleGraph;

// ********** End Class UAnimationBlendSpaceSampleGraph ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
