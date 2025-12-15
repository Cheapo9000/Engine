// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/EditorTransformGizmoBuilder.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmoBuilder_generated_h
#error "EditorTransformGizmoBuilder.generated.h already included, missing '#pragma once' in EditorTransformGizmoBuilder.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmoBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorTransformGizmoBuilder *********************************************
struct Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmoBuilder_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorTransformGizmoBuilder(); \
	friend struct ::Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorTransformGizmoBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTransformGizmoBuilder, UInteractiveGizmoBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UEditorTransformGizmoBuilder_NoRegister) \
	DECLARE_SERIALIZER(UEditorTransformGizmoBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorTransformGizmoBuilder*>(this); }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEditorTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTransformGizmoBuilder(UEditorTransformGizmoBuilder&&) = delete; \
	UEditorTransformGizmoBuilder(const UEditorTransformGizmoBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UEditorTransformGizmoBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTransformGizmoBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTransformGizmoBuilder) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UEditorTransformGizmoBuilder();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_21_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTransformGizmoBuilder;

// ********** End Class UEditorTransformGizmoBuilder ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
