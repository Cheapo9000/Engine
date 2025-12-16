// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceSchema.h"

#ifdef WORKSPACEEDITOR_WorkspaceSchema_generated_h
#error "WorkspaceSchema.generated.h already included, missing '#pragma once' in WorkspaceSchema.h"
#endif
#define WORKSPACEEDITOR_WorkspaceSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorkspaceSchema *********************************************************
struct Z_Construct_UClass_UWorkspaceSchema_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspaceSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceSchema_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspaceSchema(); \
	friend struct ::Z_Construct_UClass_UWorkspaceSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspaceSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspaceSchema, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspaceSchema_NoRegister) \
	DECLARE_SERIALIZER(UWorkspaceSchema)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceSchema_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORKSPACEEDITOR_API UWorkspaceSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspaceSchema(UWorkspaceSchema&&) = delete; \
	UWorkspaceSchema(const UWorkspaceSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORKSPACEEDITOR_API, UWorkspaceSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspaceSchema); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorkspaceSchema) \
	WORKSPACEEDITOR_API virtual ~UWorkspaceSchema();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceSchema_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceSchema_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceSchema_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceSchema_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspaceSchema;

// ********** End Class UWorkspaceSchema ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
