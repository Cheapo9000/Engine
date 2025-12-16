// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceItemMenuContext.h"

#ifdef WORKSPACEEDITOR_WorkspaceItemMenuContext_generated_h
#error "WorkspaceItemMenuContext.generated.h already included, missing '#pragma once' in WorkspaceItemMenuContext.h"
#endif
#define WORKSPACEEDITOR_WorkspaceItemMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorkspaceItemMenuContext ************************************************
struct Z_Construct_UClass_UWorkspaceItemMenuContext_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspaceItemMenuContext_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceItemMenuContext_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspaceItemMenuContext(); \
	friend struct ::Z_Construct_UClass_UWorkspaceItemMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspaceItemMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspaceItemMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspaceItemMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UWorkspaceItemMenuContext)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceItemMenuContext_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORKSPACEEDITOR_API UWorkspaceItemMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspaceItemMenuContext(UWorkspaceItemMenuContext&&) = delete; \
	UWorkspaceItemMenuContext(const UWorkspaceItemMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORKSPACEEDITOR_API, UWorkspaceItemMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspaceItemMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorkspaceItemMenuContext) \
	WORKSPACEEDITOR_API virtual ~UWorkspaceItemMenuContext();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceItemMenuContext_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceItemMenuContext_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceItemMenuContext_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceItemMenuContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspaceItemMenuContext;

// ********** End Class UWorkspaceItemMenuContext **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceItemMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
