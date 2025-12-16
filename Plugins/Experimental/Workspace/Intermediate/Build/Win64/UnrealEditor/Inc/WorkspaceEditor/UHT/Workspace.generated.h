// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Workspace.h"

#ifdef WORKSPACEEDITOR_Workspace_generated_h
#error "Workspace.generated.h already included, missing '#pragma once' in Workspace.h"
#endif
#define WORKSPACEEDITOR_Workspace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin ScriptStruct FWorkspaceAssetRegistryExportEntry ********************************
struct Z_Construct_UScriptStruct_FWorkspaceAssetRegistryExportEntry_Statics;
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorkspaceAssetRegistryExportEntry_Statics; \
	WORKSPACEEDITOR_API static class UScriptStruct* StaticStruct();


struct FWorkspaceAssetRegistryExportEntry;
// ********** End ScriptStruct FWorkspaceAssetRegistryExportEntry **********************************

// ********** Begin ScriptStruct FWorkspaceAssetRegistryExports ************************************
struct Z_Construct_UScriptStruct_FWorkspaceAssetRegistryExports_Statics;
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorkspaceAssetRegistryExports_Statics; \
	WORKSPACEEDITOR_API static class UScriptStruct* StaticStruct();


struct FWorkspaceAssetRegistryExports;
// ********** End ScriptStruct FWorkspaceAssetRegistryExports **************************************

// ********** Begin Class UWorkspace ***************************************************************
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAssets); \
	DECLARE_FUNCTION(execRemoveAsset); \
	DECLARE_FUNCTION(execAddAssets); \
	DECLARE_FUNCTION(execAddAsset);


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorkspace, WORKSPACEEDITOR_API)


struct Z_Construct_UClass_UWorkspace_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspace_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspace(); \
	friend struct ::Z_Construct_UClass_UWorkspace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspace_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspace_NoRegister) \
	DECLARE_SERIALIZER(UWorkspace) \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORKSPACEEDITOR_API UWorkspace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspace(UWorkspace&&) = delete; \
	UWorkspace(const UWorkspace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORKSPACEEDITOR_API, UWorkspace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorkspace) \
	WORKSPACEEDITOR_API virtual ~UWorkspace();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_69_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspace;

// ********** End Class UWorkspace *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_Workspace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
