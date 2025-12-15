// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphSchema_BehaviorTree.h"

#ifdef BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTree_generated_h
#error "EdGraphSchema_BehaviorTree.generated.h already included, missing '#pragma once' in EdGraphSchema_BehaviorTree.h"
#endif
#define BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTree_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBehaviorTreeSchemaAction_AutoArrange *****************************
struct Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics;
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics; \
	BEHAVIORTREEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FBehaviorTreeSchemaAction_AutoArrange;
// ********** End ScriptStruct FBehaviorTreeSchemaAction_AutoArrange *******************************

// ********** Begin Class UEdGraphSchema_BehaviorTree **********************************************
struct Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_BehaviorTree(); \
	friend struct ::Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UEdGraphSchema_BehaviorTree_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphSchema_BehaviorTree, UAIGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UEdGraphSchema_BehaviorTree_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphSchema_BehaviorTree)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UEdGraphSchema_BehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_BehaviorTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UEdGraphSchema_BehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_BehaviorTree); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphSchema_BehaviorTree(UEdGraphSchema_BehaviorTree&&) = delete; \
	UEdGraphSchema_BehaviorTree(const UEdGraphSchema_BehaviorTree&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UEdGraphSchema_BehaviorTree();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_54_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_57_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphSchema_BehaviorTree;

// ********** End Class UEdGraphSchema_BehaviorTree ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
