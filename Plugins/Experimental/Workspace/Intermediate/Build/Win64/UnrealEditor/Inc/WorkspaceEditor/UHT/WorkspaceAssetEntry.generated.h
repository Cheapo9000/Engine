// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceAssetEntry.h"

#ifdef WORKSPACEEDITOR_WorkspaceAssetEntry_generated_h
#error "WorkspaceAssetEntry.generated.h already included, missing '#pragma once' in WorkspaceAssetEntry.h"
#endif
#define WORKSPACEEDITOR_WorkspaceAssetEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorkspaceAssetEntry *****************************************************
struct Z_Construct_UClass_UWorkspaceAssetEntry_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspaceAssetEntry_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntry_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspaceAssetEntry(); \
	friend struct ::Z_Construct_UClass_UWorkspaceAssetEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspaceAssetEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspaceAssetEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspaceAssetEntry_NoRegister) \
	DECLARE_SERIALIZER(UWorkspaceAssetEntry)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntry_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorkspaceAssetEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspaceAssetEntry(UWorkspaceAssetEntry&&) = delete; \
	UWorkspaceAssetEntry(const UWorkspaceAssetEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorkspaceAssetEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspaceAssetEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorkspaceAssetEntry) \
	NO_API virtual ~UWorkspaceAssetEntry();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntry_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntry_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntry_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntry_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspaceAssetEntry;

// ********** End Class UWorkspaceAssetEntry *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
