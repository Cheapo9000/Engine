// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeGraphNode_Service.h"

#ifdef BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_Service_generated_h
#error "BehaviorTreeGraphNode_Service.generated.h already included, missing '#pragma once' in BehaviorTreeGraphNode_Service.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_Service_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBehaviorTreeGraphNode_Service *******************************************
struct Z_Construct_UClass_UBehaviorTreeGraphNode_Service_Statics;
BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Service_NoRegister();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Service_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraphNode_Service(); \
	friend struct ::Z_Construct_UClass_UBehaviorTreeGraphNode_Service_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BEHAVIORTREEEDITOR_API UClass* ::Z_Construct_UClass_UBehaviorTreeGraphNode_Service_NoRegister(); \
public: \
	DECLARE_CLASS2(UBehaviorTreeGraphNode_Service, UBehaviorTreeGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), Z_Construct_UClass_UBehaviorTreeGraphNode_Service_NoRegister) \
	DECLARE_SERIALIZER(UBehaviorTreeGraphNode_Service)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Service_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UBehaviorTreeGraphNode_Service(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraphNode_Service) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UBehaviorTreeGraphNode_Service); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraphNode_Service); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBehaviorTreeGraphNode_Service(UBehaviorTreeGraphNode_Service&&) = delete; \
	UBehaviorTreeGraphNode_Service(const UBehaviorTreeGraphNode_Service&) = delete; \
	BEHAVIORTREEEDITOR_API virtual ~UBehaviorTreeGraphNode_Service();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Service_h_16_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Service_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Service_h_19_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Service_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBehaviorTreeGraphNode_Service;

// ********** End Class UBehaviorTreeGraphNode_Service *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Service_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
