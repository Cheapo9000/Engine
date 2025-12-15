// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_LinkedAnimGraph.h"

#ifdef ANIMGRAPH_AnimGraphNode_LinkedAnimGraph_generated_h
#error "AnimGraphNode_LinkedAnimGraph.generated.h already included, missing '#pragma once' in AnimGraphNode_LinkedAnimGraph.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LinkedAnimGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_LinkedAnimGraph *******************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LinkedAnimGraph, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LinkedAnimGraph(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_LinkedAnimGraph, UAnimGraphNode_LinkedAnimGraphBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_LinkedAnimGraph) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_16_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_LinkedAnimGraph*>(this); }


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LinkedAnimGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_LinkedAnimGraph(UAnimGraphNode_LinkedAnimGraph&&) = delete; \
	UAnimGraphNode_LinkedAnimGraph(const UAnimGraphNode_LinkedAnimGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LinkedAnimGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LinkedAnimGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LinkedAnimGraph) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LinkedAnimGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_13_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_LinkedAnimGraph;

// ********** End Class UAnimGraphNode_LinkedAnimGraph *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
