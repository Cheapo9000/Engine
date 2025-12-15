// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractions/ViewportOrbitInteraction.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_ViewportOrbitInteraction_generated_h
#error "ViewportOrbitInteraction.generated.h already included, missing '#pragma once' in ViewportOrbitInteraction.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_ViewportOrbitInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportOrbitInteraction ************************************************
struct Z_Construct_UClass_UViewportOrbitInteraction_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewportOrbitInteraction_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportOrbitInteraction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportOrbitInteraction(); \
	friend struct ::Z_Construct_UClass_UViewportOrbitInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UViewportOrbitInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportOrbitInteraction, UViewportDragInteraction, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UViewportOrbitInteraction_NoRegister) \
	DECLARE_SERIALIZER(UViewportOrbitInteraction)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportOrbitInteraction_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportOrbitInteraction(UViewportOrbitInteraction&&) = delete; \
	UViewportOrbitInteraction(const UViewportOrbitInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UViewportOrbitInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportOrbitInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportOrbitInteraction) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UViewportOrbitInteraction();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportOrbitInteraction_h_14_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportOrbitInteraction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportOrbitInteraction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportOrbitInteraction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportOrbitInteraction;

// ********** End Class UViewportOrbitInteraction **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportOrbitInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
