// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationGraph.h"

#ifdef ANIMGRAPH_AnimationGraph_generated_h
#error "AnimationGraph.generated.h already included, missing '#pragma once' in AnimationGraph.h"
#endif
#define ANIMGRAPH_AnimationGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimGraphNode_Base;
class UClass;

// ********** Begin Class UAnimationGraph **********************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetGraphNodesOfClass);


struct Z_Construct_UClass_UAnimationGraph_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationGraph(); \
	friend struct ::Z_Construct_UClass_UAnimationGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationGraph_NoRegister) \
	DECLARE_SERIALIZER(UAnimationGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationGraph(UAnimationGraph&&) = delete; \
	UAnimationGraph(const UAnimationGraph&) = delete; \
	ANIMGRAPH_API virtual ~UAnimationGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_19_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_22_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationGraph;

// ********** End Class UAnimationGraph ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
