// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendSpaceGraph.h"

#ifdef ANIMGRAPH_BlendSpaceGraph_generated_h
#error "BlendSpaceGraph.generated.h already included, missing '#pragma once' in BlendSpaceGraph.h"
#endif
#define ANIMGRAPH_BlendSpaceGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlendSpaceGraph *********************************************************
struct Z_Construct_UClass_UBlendSpaceGraph_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UBlendSpaceGraph_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpaceGraph(); \
	friend struct ::Z_Construct_UClass_UBlendSpaceGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UBlendSpaceGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendSpaceGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UBlendSpaceGraph_NoRegister) \
	DECLARE_SERIALIZER(UBlendSpaceGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UBlendSpaceGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendSpaceGraph(UBlendSpaceGraph&&) = delete; \
	UBlendSpaceGraph(const UBlendSpaceGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UBlendSpaceGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceGraph) \
	ANIMGRAPH_API virtual ~UBlendSpaceGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_16_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendSpaceGraph;

// ********** End Class UBlendSpaceGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
