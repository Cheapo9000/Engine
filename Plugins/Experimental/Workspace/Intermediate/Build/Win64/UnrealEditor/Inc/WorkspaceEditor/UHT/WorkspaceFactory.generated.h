// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceFactory.h"

#ifdef WORKSPACEEDITOR_WorkspaceFactory_generated_h
#error "WorkspaceFactory.generated.h already included, missing '#pragma once' in WorkspaceFactory.h"
#endif
#define WORKSPACEEDITOR_WorkspaceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorkspaceFactory ********************************************************
struct Z_Construct_UClass_UWorkspaceFactory_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspaceFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceFactory_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspaceFactory(); \
	friend struct ::Z_Construct_UClass_UWorkspaceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspaceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspaceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspaceFactory_NoRegister) \
	DECLARE_SERIALIZER(UWorkspaceFactory)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceFactory_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspaceFactory(UWorkspaceFactory&&) = delete; \
	UWorkspaceFactory(const UWorkspaceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORKSPACEEDITOR_API, UWorkspaceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspaceFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorkspaceFactory) \
	WORKSPACEEDITOR_API virtual ~UWorkspaceFactory();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceFactory_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceFactory_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceFactory_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceFactory_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspaceFactory;

// ********** End Class UWorkspaceFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
