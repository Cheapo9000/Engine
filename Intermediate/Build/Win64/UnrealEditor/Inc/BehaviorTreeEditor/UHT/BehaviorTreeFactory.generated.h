// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeFactory.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeFactory_generated_h
#error "BehaviorTreeFactory.generated.h already included, missing '#pragma once' in BehaviorTreeFactory.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeFactory *****************************************************
struct Z_Construct_UClass_UBehaviorTreeFactory_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeFactory_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeFactory(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeFactory_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeFactory)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UBehaviorTreeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UBehaviorTreeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeFactory(UBehaviorTreeFactory&&) = delete; \
	UBehaviorTreeFactory(const UBehaviorTreeFactory&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UBehaviorTreeFactory();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeFactory;

// ********** End Class UBehaviorTreeFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
