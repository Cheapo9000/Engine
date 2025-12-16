// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultWorkspaceSchema.h"

#ifdef WORKSPACEEDITOR_DefaultWorkspaceSchema_generated_h
#error "DefaultWorkspaceSchema.generated.h already included, missing '#pragma once' in DefaultWorkspaceSchema.h"
#endif
#define WORKSPACEEDITOR_DefaultWorkspaceSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDefaultWorkspaceSchema **************************************************
struct Z_Construct_UClass_UDefaultWorkspaceSchema_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UDefaultWorkspaceSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_DefaultWorkspaceSchema_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultWorkspaceSchema(); \
	friend struct ::Z_Construct_UClass_UDefaultWorkspaceSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UDefaultWorkspaceSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultWorkspaceSchema, UWorkspaceSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UDefaultWorkspaceSchema_NoRegister) \
	DECLARE_SERIALIZER(UDefaultWorkspaceSchema)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_DefaultWorkspaceSchema_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultWorkspaceSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultWorkspaceSchema(UDefaultWorkspaceSchema&&) = delete; \
	UDefaultWorkspaceSchema(const UDefaultWorkspaceSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultWorkspaceSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultWorkspaceSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultWorkspaceSchema) \
	NO_API virtual ~UDefaultWorkspaceSchema();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_DefaultWorkspaceSchema_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_DefaultWorkspaceSchema_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_DefaultWorkspaceSchema_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_DefaultWorkspaceSchema_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultWorkspaceSchema;

// ********** End Class UDefaultWorkspaceSchema ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_DefaultWorkspaceSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
