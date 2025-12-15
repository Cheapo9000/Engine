// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeDecoratorGraph.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraph_generated_h
#error "BehaviorTreeDecoratorGraph.generated.h already included, missing '#pragma once' in BehaviorTreeDecoratorGraph.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeDecoratorGraph **********************************************
struct Z_Construct_UClass_UBehaviorTreeDecoratorGraph_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraph_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraph_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeDecoratorGraph(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeDecoratorGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeDecoratorGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeDecoratorGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeDecoratorGraph_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeDecoratorGraph)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraph_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UBehaviorTreeDecoratorGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeDecoratorGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UBehaviorTreeDecoratorGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeDecoratorGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeDecoratorGraph(UBehaviorTreeDecoratorGraph&&) = delete; \
	UBehaviorTreeDecoratorGraph(const UBehaviorTreeDecoratorGraph&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UBehaviorTreeDecoratorGraph();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraph_h_21_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraph_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraph_h_24_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraph_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeDecoratorGraph;

// ********** End Class UBehaviorTreeDecoratorGraph ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
