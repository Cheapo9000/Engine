// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeGraph.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeGraph_generated_h
#error "BehaviorTreeGraph.generated.h already included, missing '#pragma once' in BehaviorTreeGraph.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeGraph *******************************************************
struct Z_Construct_UClass_UBehaviorTreeGraph_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraph_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraph(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeGraph, UAIGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeGraph_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeGraph)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UBehaviorTreeGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UBehaviorTreeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeGraph(UBehaviorTreeGraph&&) = delete; \
	UBehaviorTreeGraph(const UBehaviorTreeGraph&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UBehaviorTreeGraph();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_20_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_23_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeGraph;

// ********** End Class UBehaviorTreeGraph *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
