// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractions/ViewportZoomInteraction.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_ViewportZoomInteraction_generated_h
#error "ViewportZoomInteraction.generated.h already included, missing '#pragma once' in ViewportZoomInteraction.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_ViewportZoomInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportZoomInteraction *************************************************
struct Z_Construct_UClass_UViewportZoomInteraction_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewportZoomInteraction_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportZoomInteraction_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportZoomInteraction(); \
	friend struct ::Z_Construct_UClass_UViewportZoomInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UViewportZoomInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportZoomInteraction, UViewportInteraction, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UViewportZoomInteraction_NoRegister) \
	DECLARE_SERIALIZER(UViewportZoomInteraction)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportZoomInteraction_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportZoomInteraction(UViewportZoomInteraction&&) = delete; \
	UViewportZoomInteraction(const UViewportZoomInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UViewportZoomInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportZoomInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportZoomInteraction) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UViewportZoomInteraction();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportZoomInteraction_h_15_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportZoomInteraction_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportZoomInteraction_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportZoomInteraction_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportZoomInteraction;

// ********** End Class UViewportZoomInteraction ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportZoomInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
