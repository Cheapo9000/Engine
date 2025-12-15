// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorInteractiveGizmoSelectionBuilder.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorInteractiveGizmoSelectionBuilder_generated_h
#error "EditorInteractiveGizmoSelectionBuilder.generated.h already included, missing '#pragma once' in EditorInteractiveGizmoSelectionBuilder.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorInteractiveGizmoSelectionBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UEditorInteractiveGizmoSelectionBuilder ******************************
struct Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEditorInteractiveGizmoSelectionBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorInteractiveGizmoSelectionBuilder(UEditorInteractiveGizmoSelectionBuilder&&) = delete; \
	UEditorInteractiveGizmoSelectionBuilder(const UEditorInteractiveGizmoSelectionBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UEditorInteractiveGizmoSelectionBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorInteractiveGizmoSelectionBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorInteractiveGizmoSelectionBuilder) \
	virtual ~UEditorInteractiveGizmoSelectionBuilder() = default;


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEditorInteractiveGizmoSelectionBuilder(); \
	friend struct ::Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorInteractiveGizmoSelectionBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_NoRegister) \
	DECLARE_SERIALIZER(UEditorInteractiveGizmoSelectionBuilder)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_33_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_33_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEditorInteractiveGizmoSelectionBuilder() {} \
public: \
	typedef UEditorInteractiveGizmoSelectionBuilder UClassType; \
	typedef IEditorInteractiveGizmoSelectionBuilder ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_30_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorInteractiveGizmoSelectionBuilder;

// ********** End Interface UEditorInteractiveGizmoSelectionBuilder ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
