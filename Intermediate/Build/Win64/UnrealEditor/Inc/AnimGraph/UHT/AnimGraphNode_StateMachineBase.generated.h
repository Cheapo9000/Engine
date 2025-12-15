// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_StateMachineBase.h"

#ifdef ANIMGRAPH_AnimGraphNode_StateMachineBase_generated_h
#error "AnimGraphNode_StateMachineBase.generated.h already included, missing '#pragma once' in AnimGraphNode_StateMachineBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_StateMachineBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_StateMachineBase ******************************************
struct Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_StateMachineBase(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_StateMachineBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_StateMachineBase)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_StateMachineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_StateMachineBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_StateMachineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_StateMachineBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_StateMachineBase(UAnimGraphNode_StateMachineBase&&) = delete; \
	UAnimGraphNode_StateMachineBase(const UAnimGraphNode_StateMachineBase&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_StateMachineBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_16_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_19_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_StateMachineBase;

// ********** End Class UAnimGraphNode_StateMachineBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
