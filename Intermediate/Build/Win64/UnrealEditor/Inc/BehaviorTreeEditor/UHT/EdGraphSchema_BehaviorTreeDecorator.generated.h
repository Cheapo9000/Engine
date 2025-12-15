// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphSchema_BehaviorTreeDecorator.h"

#ifdef BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTreeDecorator_generated_h
#error "EdGraphSchema_BehaviorTreeDecorator.generated.h already included, missing '#pragma once' in EdGraphSchema_BehaviorTreeDecorator.h"
#endif
#define BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTreeDecorator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDecoratorSchemaAction_NewNode ************************************
struct Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics;
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics; \
	BEHAVIORTREEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FDecoratorSchemaAction_NewNode;
// ********** End ScriptStruct FDecoratorSchemaAction_NewNode **************************************

// ********** Begin Class UEdGraphSchema_BehaviorTreeDecorator *************************************
struct Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_BehaviorTreeDecorator(); \
	friend struct ::Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphSchema_BehaviorTreeDecorator, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphSchema_BehaviorTreeDecorator)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UEdGraphSchema_BehaviorTreeDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_BehaviorTreeDecorator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UEdGraphSchema_BehaviorTreeDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_BehaviorTreeDecorator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphSchema_BehaviorTreeDecorator(UEdGraphSchema_BehaviorTreeDecorator&&) = delete; \
	UEdGraphSchema_BehaviorTreeDecorator(const UEdGraphSchema_BehaviorTreeDecorator&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UEdGraphSchema_BehaviorTreeDecorator();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_68_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_71_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphSchema_BehaviorTreeDecorator;

// ********** End Class UEdGraphSchema_BehaviorTreeDecorator ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
