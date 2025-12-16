// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceState.h"

#ifdef WORKSPACEEDITOR_WorkspaceState_generated_h
#error "WorkspaceState.generated.h already included, missing '#pragma once' in WorkspaceState.h"
#endif
#define WORKSPACEEDITOR_WorkspaceState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorkspaceState **********************************************************
struct Z_Construct_UClass_UWorkspaceState_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspaceState_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspaceState(); \
	friend struct ::Z_Construct_UClass_UWorkspaceState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspaceState_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspaceState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspaceState_NoRegister) \
	DECLARE_SERIALIZER(UWorkspaceState)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceState_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspaceState(UWorkspaceState&&) = delete; \
	UWorkspaceState(const UWorkspaceState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorkspaceState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspaceState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorkspaceState) \
	NO_API virtual ~UWorkspaceState();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceState_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceState_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceState_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspaceState;

// ********** End Class UWorkspaceState ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Private_WorkspaceState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
