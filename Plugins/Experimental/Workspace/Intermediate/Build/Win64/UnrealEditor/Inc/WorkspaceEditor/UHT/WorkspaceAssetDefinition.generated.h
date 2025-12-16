// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceAssetDefinition.h"

#ifdef WORKSPACEEDITOR_WorkspaceAssetDefinition_generated_h
#error "WorkspaceAssetDefinition.generated.h already included, missing '#pragma once' in WorkspaceAssetDefinition.h"
#endif
#define WORKSPACEEDITOR_WorkspaceAssetDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_Workspace ***********************************************
struct Z_Construct_UClass_UAssetDefinition_Workspace_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_Workspace_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetDefinition_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_Workspace(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_Workspace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_Workspace_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_Workspace, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UAssetDefinition_Workspace_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_Workspace)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetDefinition_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_Workspace(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_Workspace(UAssetDefinition_Workspace&&) = delete; \
	UAssetDefinition_Workspace(const UAssetDefinition_Workspace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_Workspace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_Workspace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_Workspace) \
	NO_API virtual ~UAssetDefinition_Workspace();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetDefinition_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetDefinition_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetDefinition_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetDefinition_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_Workspace;

// ********** End Class UAssetDefinition_Workspace *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
