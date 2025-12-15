// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractions/ViewportPanInteraction.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_ViewportPanInteraction_generated_h
#error "ViewportPanInteraction.generated.h already included, missing '#pragma once' in ViewportPanInteraction.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_ViewportPanInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportPanInteraction **************************************************
struct Z_Construct_UClass_UViewportPanInteraction_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewportPanInteraction_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportPanInteraction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportPanInteraction(); \
	friend struct ::Z_Construct_UClass_UViewportPanInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UViewportPanInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportPanInteraction, UViewportDragInteraction, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UViewportPanInteraction_NoRegister) \
	DECLARE_SERIALIZER(UViewportPanInteraction)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportPanInteraction_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportPanInteraction(UViewportPanInteraction&&) = delete; \
	UViewportPanInteraction(const UViewportPanInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UViewportPanInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportPanInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportPanInteraction) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UViewportPanInteraction();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportPanInteraction_h_16_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportPanInteraction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportPanInteraction_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportPanInteraction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportPanInteraction;

// ********** End Class UViewportPanInteraction ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportPanInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
