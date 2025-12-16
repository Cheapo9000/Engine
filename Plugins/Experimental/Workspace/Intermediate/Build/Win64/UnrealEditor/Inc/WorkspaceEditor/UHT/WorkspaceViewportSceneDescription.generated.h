// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorkspaceViewportSceneDescription.h"

#ifdef WORKSPACEEDITOR_WorkspaceViewportSceneDescription_generated_h
#error "WorkspaceViewportSceneDescription.generated.h already included, missing '#pragma once' in WorkspaceViewportSceneDescription.h"
#endif
#define WORKSPACEEDITOR_WorkspaceViewportSceneDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorkspaceViewportSceneDescription ***************************************
struct Z_Construct_UClass_UWorkspaceViewportSceneDescription_Statics;
WORKSPACEEDITOR_API UClass* Z_Construct_UClass_UWorkspaceViewportSceneDescription_NoRegister();

#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceViewportSceneDescription_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkspaceViewportSceneDescription(); \
	friend struct ::Z_Construct_UClass_UWorkspaceViewportSceneDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORKSPACEEDITOR_API UClass* ::Z_Construct_UClass_UWorkspaceViewportSceneDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorkspaceViewportSceneDescription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorkspaceEditor"), Z_Construct_UClass_UWorkspaceViewportSceneDescription_NoRegister) \
	DECLARE_SERIALIZER(UWorkspaceViewportSceneDescription)


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceViewportSceneDescription_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORKSPACEEDITOR_API UWorkspaceViewportSceneDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorkspaceViewportSceneDescription(UWorkspaceViewportSceneDescription&&) = delete; \
	UWorkspaceViewportSceneDescription(const UWorkspaceViewportSceneDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORKSPACEEDITOR_API, UWorkspaceViewportSceneDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkspaceViewportSceneDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorkspaceViewportSceneDescription) \
	WORKSPACEEDITOR_API virtual ~UWorkspaceViewportSceneDescription();


#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceViewportSceneDescription_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceViewportSceneDescription_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceViewportSceneDescription_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceViewportSceneDescription_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorkspaceViewportSceneDescription;

// ********** End Class UWorkspaceViewportSceneDescription *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Workspace_Source_WorkspaceEditor_Public_WorkspaceViewportSceneDescription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
