// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeGraphNode.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_generated_h
#error "BehaviorTreeGraphNode.generated.h already included, missing '#pragma once' in BehaviorTreeGraphNode.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeGraphNode ***************************************************
struct Z_Construct_UClass_UBehaviorTreeGraphNode_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraphNode(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeGraphNode, UAIGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeGraphNode)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UBehaviorTreeGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UBehaviorTreeGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeGraphNode(UBehaviorTreeGraphNode&&) = delete; \
	UBehaviorTreeGraphNode(const UBehaviorTreeGraphNode&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UBehaviorTreeGraphNode();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_26_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_29_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeGraphNode;

// ********** End Class UBehaviorTreeGraphNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
