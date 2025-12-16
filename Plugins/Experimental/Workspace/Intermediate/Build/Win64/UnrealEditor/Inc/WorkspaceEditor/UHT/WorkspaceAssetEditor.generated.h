// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceAssetEditor.h"

#ifdef WORKSPACEEDITOR_WorkspaceAssetEditor_generated_h
#error "WorkspaceAssetEditor.generated.h already included, missing '#pragma once' in WorkspaceAssetEditor.h"
#endif
#define WORKSPACEEDITOR_WorkspaceAssetEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorkspaceAssetEditor ****************************************************
struct Z_Construct_UClass_UWorkspaceAssetEditor_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspaceAssetEditor_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEditor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspaceAssetEditor(); \
	friend struct ::Z_Construct_UClass_UWorkspaceAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspaceAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspaceAssetEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspaceAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(UWorkspaceAssetEditor)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEditor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorkspaceAssetEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspaceAssetEditor(UWorkspaceAssetEditor&&) = delete; \
	UWorkspaceAssetEditor(const UWorkspaceAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorkspaceAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspaceAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorkspaceAssetEditor) \
	NO_API virtual ~UWorkspaceAssetEditor();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEditor_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEditor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEditor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEditor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspaceAssetEditor;

// ********** End Class UWorkspaceAssetEditor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
