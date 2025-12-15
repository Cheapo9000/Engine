// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BlendSpaceGraph.h"

#ifdef ANIMGRAPH_AnimGraphNode_BlendSpaceGraph_generated_h
#error "AnimGraphNode_BlendSpaceGraph.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendSpaceGraph.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendSpaceGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_BlendSpaceGraph *******************************************
struct Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraph_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraph_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraph_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendSpaceGraph(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_BlendSpaceGraph, UAnimGraphNode_BlendSpaceGraphBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraph_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendSpaceGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraph_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendSpaceGraph(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BlendSpaceGraph(UAnimGraphNode_BlendSpaceGraph&&) = delete; \
	UAnimGraphNode_BlendSpaceGraph(const UAnimGraphNode_BlendSpaceGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendSpaceGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendSpaceGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimGraphNode_BlendSpaceGraph) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_BlendSpaceGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraph_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraph_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraph_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraph_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_BlendSpaceGraph;

// ********** End Class UAnimGraphNode_BlendSpaceGraph *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
