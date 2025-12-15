// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorInteractiveGizmoManager.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorInteractiveGizmoManager_generated_h
#error "EditorInteractiveGizmoManager.generated.h already included, missing '#pragma once' in EditorInteractiveGizmoManager.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorInteractiveGizmoManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActiveEditorGizmo ************************************************
struct Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics;
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics; \
	EDITORINTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FActiveEditorGizmo;
// ********** End ScriptStruct FActiveEditorGizmo **************************************************

// ********** Begin Class UEditorInteractiveGizmoManager *******************************************
struct Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoManager_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorInteractiveGizmoManager(); \
	friend struct ::Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorInteractiveGizmoManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorInteractiveGizmoManager, UInteractiveGizmoManager, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UEditorInteractiveGizmoManager_NoRegister) \
	DECLARE_SERIALIZER(UEditorInteractiveGizmoManager)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorInteractiveGizmoManager(UEditorInteractiveGizmoManager&&) = delete; \
	UEditorInteractiveGizmoManager(const UEditorInteractiveGizmoManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UEditorInteractiveGizmoManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorInteractiveGizmoManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorInteractiveGizmoManager) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UEditorInteractiveGizmoManager();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_49_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorInteractiveGizmoManager;

// ********** End Class UEditorInteractiveGizmoManager *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
