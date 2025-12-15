// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeDecoratorGraphNode_Logic.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_Logic_generated_h
#error "BehaviorTreeDecoratorGraphNode_Logic.generated.h already included, missing '#pragma once' in BehaviorTreeDecoratorGraphNode_Logic.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_Logic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeDecoratorGraphNode_Logic ************************************
struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeDecoratorGraphNode_Logic(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeDecoratorGraphNode_Logic, UBehaviorTreeDecoratorGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeDecoratorGraphNode_Logic)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeDecoratorGraphNode_Logic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeDecoratorGraphNode_Logic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeDecoratorGraphNode_Logic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeDecoratorGraphNode_Logic(UBehaviorTreeDecoratorGraphNode_Logic&&) = delete; \
	UBehaviorTreeDecoratorGraphNode_Logic(const UBehaviorTreeDecoratorGraphNode_Logic&) = delete; \
	NO_API virtual ~UBehaviorTreeDecoratorGraphNode_Logic();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_31_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeDecoratorGraphNode_Logic;

// ********** End Class UBehaviorTreeDecoratorGraphNode_Logic **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h

// ********** Begin Enum EDecoratorLogicMode *******************************************************
#define FOREACH_ENUM_EDECORATORLOGICMODE(op) \
	op(EDecoratorLogicMode::Sink) \
	op(EDecoratorLogicMode::And) \
	op(EDecoratorLogicMode::Or) \
	op(EDecoratorLogicMode::Not) 

namespace EDecoratorLogicMode { enum Type : int; }
template<> BEHAVIORTREEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDecoratorLogicMode::Type>();
// ********** End Enum EDecoratorLogicMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
