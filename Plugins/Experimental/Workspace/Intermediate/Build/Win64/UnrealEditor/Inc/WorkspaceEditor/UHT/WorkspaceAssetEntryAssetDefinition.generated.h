// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceAssetEntryAssetDefinition.h"

#ifdef WORKSPACEEDITOR_WorkspaceAssetEntryAssetDefinition_generated_h
#error "WorkspaceAssetEntryAssetDefinition.generated.h already included, missing '#pragma once' in WorkspaceAssetEntryAssetDefinition.h"
#endif
#define WORKSPACEEDITOR_WorkspaceAssetEntryAssetDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_WorkspaceAssetEntry *************************************
struct Z_Construct_UClass_UAssetDefinition_WorkspaceAssetEntry_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_WorkspaceAssetEntry_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntryAssetDefinition_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_WorkspaceAssetEntry(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_WorkspaceAssetEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_WorkspaceAssetEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_WorkspaceAssetEntry, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UAssetDefinition_WorkspaceAssetEntry_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_WorkspaceAssetEntry)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntryAssetDefinition_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_WorkspaceAssetEntry(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_WorkspaceAssetEntry(UAssetDefinition_WorkspaceAssetEntry&&) = delete; \
	UAssetDefinition_WorkspaceAssetEntry(const UAssetDefinition_WorkspaceAssetEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_WorkspaceAssetEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_WorkspaceAssetEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_WorkspaceAssetEntry) \
	NO_API virtual ~UAssetDefinition_WorkspaceAssetEntry();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntryAssetDefinition_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntryAssetDefinition_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntryAssetDefinition_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntryAssetDefinition_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_WorkspaceAssetEntry;

// ********** End Class UAssetDefinition_WorkspaceAssetEntry ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceAssetEntryAssetDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
