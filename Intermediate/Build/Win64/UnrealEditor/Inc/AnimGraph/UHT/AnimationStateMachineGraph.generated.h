// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationStateMachineGraph.h"

#ifdef ANIMGRAPH_AnimationStateMachineGraph_generated_h
#error "AnimationStateMachineGraph.generated.h already included, missing '#pragma once' in AnimationStateMachineGraph.h"
#endif
#define ANIMGRAPH_AnimationStateMachineGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationStateMachineGraph **********************************************
struct Z_Construct_UClass_UAnimationStateMachineGraph_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationStateMachineGraph(); \
	friend struct ::Z_Construct_UClass_UAnimationStateMachineGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationStateMachineGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister) \
	DECLARE_SERIALIZER(UAnimationStateMachineGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationStateMachineGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateMachineGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationStateMachineGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateMachineGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationStateMachineGraph(UAnimationStateMachineGraph&&) = delete; \
	UAnimationStateMachineGraph(const UAnimationStateMachineGraph&) = delete; \
	ANIMGRAPH_API virtual ~UAnimationStateMachineGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_18_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationStateMachineGraph;

// ********** End Class UAnimationStateMachineGraph ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
