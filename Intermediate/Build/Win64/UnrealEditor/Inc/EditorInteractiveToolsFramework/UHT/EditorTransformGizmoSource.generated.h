// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/EditorTransformGizmoSource.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmoSource_generated_h
#error "EditorTransformGizmoSource.generated.h already included, missing '#pragma once' in EditorTransformGizmoSource.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmoSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorTransformGizmoSource **********************************************
struct Z_Construct_UClass_UEditorTransformGizmoSource_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmoSource_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorTransformGizmoSource(); \
	friend struct ::Z_Construct_UClass_UEditorTransformGizmoSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorTransformGizmoSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTransformGizmoSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UEditorTransformGizmoSource_NoRegister) \
	DECLARE_SERIALIZER(UEditorTransformGizmoSource) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorTransformGizmoSource*>(this); }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEditorTransformGizmoSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTransformGizmoSource(UEditorTransformGizmoSource&&) = delete; \
	UEditorTransformGizmoSource(const UEditorTransformGizmoSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UEditorTransformGizmoSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTransformGizmoSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTransformGizmoSource) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UEditorTransformGizmoSource();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_38_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTransformGizmoSource;

// ********** End Class UEditorTransformGizmoSource ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
