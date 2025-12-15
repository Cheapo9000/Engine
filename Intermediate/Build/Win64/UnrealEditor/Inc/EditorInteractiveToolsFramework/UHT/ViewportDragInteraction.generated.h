// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractions/ViewportDragInteraction.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_ViewportDragInteraction_generated_h
#error "ViewportDragInteraction.generated.h already included, missing '#pragma once' in ViewportDragInteraction.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_ViewportDragInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportDragInteraction *************************************************
struct Z_Construct_UClass_UViewportDragInteraction_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewportDragInteraction_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportDragInteraction_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportDragInteraction(); \
	friend struct ::Z_Construct_UClass_UViewportDragInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UViewportDragInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportDragInteraction, UViewportInteraction, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UViewportDragInteraction_NoRegister) \
	DECLARE_SERIALIZER(UViewportDragInteraction)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportDragInteraction_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportDragInteraction(UViewportDragInteraction&&) = delete; \
	UViewportDragInteraction(const UViewportDragInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UViewportDragInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportDragInteraction); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UViewportDragInteraction) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UViewportDragInteraction();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportDragInteraction_h_18_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportDragInteraction_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportDragInteraction_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportDragInteraction_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportDragInteraction;

// ********** End Class UViewportDragInteraction ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportDragInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
