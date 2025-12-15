// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_TransitionResult.h"

#ifdef ANIMGRAPH_AnimGraphNode_TransitionResult_generated_h
#error "AnimGraphNode_TransitionResult.generated.h already included, missing '#pragma once' in AnimGraphNode_TransitionResult.h"
#endif
#define ANIMGRAPH_AnimGraphNode_TransitionResult_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_TransitionResult ******************************************
struct Z_Construct_UClass_UAnimGraphNode_TransitionResult_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TransitionResult_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionResult_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_TransitionResult(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_TransitionResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_TransitionResult_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_TransitionResult, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_TransitionResult_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_TransitionResult)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionResult_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_TransitionResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_TransitionResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_TransitionResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_TransitionResult); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_TransitionResult(UAnimGraphNode_TransitionResult&&) = delete; \
	UAnimGraphNode_TransitionResult(const UAnimGraphNode_TransitionResult&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_TransitionResult();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionResult_h_13_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionResult_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionResult_h_16_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionResult_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_TransitionResult;

// ********** End Class UAnimGraphNode_TransitionResult ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TransitionResult_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
