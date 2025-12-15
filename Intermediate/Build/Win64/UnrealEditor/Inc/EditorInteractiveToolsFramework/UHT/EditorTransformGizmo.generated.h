// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/EditorTransformGizmo.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmo_generated_h
#error "EditorTransformGizmo.generated.h already included, missing '#pragma once' in EditorTransformGizmo.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorTransformGizmo ****************************************************
struct Z_Construct_UClass_UEditorTransformGizmo_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmo_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorTransformGizmo(); \
	friend struct ::Z_Construct_UClass_UEditorTransformGizmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorTransformGizmo_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTransformGizmo, UTransformGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UEditorTransformGizmo_NoRegister) \
	DECLARE_SERIALIZER(UEditorTransformGizmo)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEditorTransformGizmo(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTransformGizmo(UEditorTransformGizmo&&) = delete; \
	UEditorTransformGizmo(const UEditorTransformGizmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UEditorTransformGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTransformGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorTransformGizmo) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UEditorTransformGizmo();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_21_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTransformGizmo;

// ********** End Class UEditorTransformGizmo ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
