// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphNode_Documentation.h"

#ifdef ENGINE_EdGraphNode_Documentation_generated_h
#error "EdGraphNode_Documentation.generated.h already included, missing '#pragma once' in EdGraphNode_Documentation.h"
#endif
#define ENGINE_EdGraphNode_Documentation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEdGraphNode_Documentation ***********************************************
struct Z_Construct_UClass_UEdGraphNode_Documentation_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode_Documentation(); \
	friend struct ::Z_Construct_UClass_UEdGraphNode_Documentation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphNode_Documentation, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphNode_Documentation)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphNode_Documentation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Documentation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphNode_Documentation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Documentation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphNode_Documentation(UEdGraphNode_Documentation&&) = delete; \
	UEdGraphNode_Documentation(const UEdGraphNode_Documentation&) = delete; \
	ENGINE_API virtual ~UEdGraphNode_Documentation();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphNode_Documentation;

// ********** End Class UEdGraphNode_Documentation *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
