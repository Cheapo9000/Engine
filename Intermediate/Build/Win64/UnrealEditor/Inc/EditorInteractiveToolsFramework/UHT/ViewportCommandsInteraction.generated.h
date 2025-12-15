// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractions/ViewportCommandsInteraction.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_ViewportCommandsInteraction_generated_h
#error "ViewportCommandsInteraction.generated.h already included, missing '#pragma once' in ViewportCommandsInteraction.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_ViewportCommandsInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportCommandsInteraction *********************************************
struct Z_Construct_UClass_UViewportCommandsInteraction_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UViewportCommandsInteraction_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportCommandsInteraction_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportCommandsInteraction(); \
	friend struct ::Z_Construct_UClass_UViewportCommandsInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UViewportCommandsInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportCommandsInteraction, UViewportInteraction, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UViewportCommandsInteraction_NoRegister) \
	DECLARE_SERIALIZER(UViewportCommandsInteraction)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportCommandsInteraction_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportCommandsInteraction(UViewportCommandsInteraction&&) = delete; \
	UViewportCommandsInteraction(const UViewportCommandsInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UViewportCommandsInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportCommandsInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportCommandsInteraction) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UViewportCommandsInteraction();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportCommandsInteraction_h_18_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportCommandsInteraction_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportCommandsInteraction_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportCommandsInteraction_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportCommandsInteraction;

// ********** End Class UViewportCommandsInteraction ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ViewportInteractions_ViewportCommandsInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
