// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackboardDataFactory.h"

#ifdef BEHAVIORTREEEDITOR_BlackboardDataFactory_generated_h
#error "BlackboardDataFactory.generated.h already included, missing '#pragma once' in BlackboardDataFactory.h"
#endif
#define BEHAVIORTREEEDITOR_BlackboardDataFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackboardDataFactory ***************************************************
struct Z_Construct_UClass_UBlackboardDataFactory_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBlackboardDataFactory_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BlackboardDataFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardDataFactory(); \
	friend struct ::Z_Construct_UClass_UBlackboardDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBlackboardDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackboardDataFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBlackboardDataFactory_NoRegister) \
	DECLARE_SERIALIZER(UBlackboardDataFactory)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BlackboardDataFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardDataFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardDataFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackboardDataFactory(UBlackboardDataFactory&&) = delete; \
	UBlackboardDataFactory(const UBlackboardDataFactory&) = delete; \
	NO_API virtual ~UBlackboardDataFactory();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BlackboardDataFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BlackboardDataFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BlackboardDataFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BlackboardDataFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackboardDataFactory;

// ********** End Class UBlackboardDataFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BlackboardDataFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
