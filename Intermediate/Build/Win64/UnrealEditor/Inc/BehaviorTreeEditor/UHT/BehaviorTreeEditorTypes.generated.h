// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeEditorTypes.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeEditorTypes_generated_h
#error "BehaviorTreeEditorTypes.generated.h already included, missing '#pragma once' in BehaviorTreeEditorTypes.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeEditorTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeEditorTypes *************************************************
struct Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeEditorTypes_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeEditorTypes(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeEditorTypes_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeEditorTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeEditorTypes_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeEditorTypes)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeEditorTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeEditorTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeEditorTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeEditorTypes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeEditorTypes(UBehaviorTreeEditorTypes&&) = delete; \
	UBehaviorTreeEditorTypes(const UBehaviorTreeEditorTypes&) = delete; \
	NO_API virtual ~UBehaviorTreeEditorTypes();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_66_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_69_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeEditorTypes;

// ********** End Class UBehaviorTreeEditorTypes ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
