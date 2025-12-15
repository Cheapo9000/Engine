// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeGraphNode_Root.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_Root_generated_h
#error "BehaviorTreeGraphNode_Root.generated.h already included, missing '#pragma once' in BehaviorTreeGraphNode_Root.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_Root_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeGraphNode_Root **********************************************
struct Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Root_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraphNode_Root(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeGraphNode_Root_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeGraphNode_Root, UBehaviorTreeGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeGraphNode_Root_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeGraphNode_Root)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UBehaviorTreeGraphNode_Root(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraphNode_Root) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UBehaviorTreeGraphNode_Root); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraphNode_Root); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeGraphNode_Root(UBehaviorTreeGraphNode_Root&&) = delete; \
	UBehaviorTreeGraphNode_Root(const UBehaviorTreeGraphNode_Root&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UBehaviorTreeGraphNode_Root();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_21_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_24_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeGraphNode_Root;

// ********** End Class UBehaviorTreeGraphNode_Root ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
