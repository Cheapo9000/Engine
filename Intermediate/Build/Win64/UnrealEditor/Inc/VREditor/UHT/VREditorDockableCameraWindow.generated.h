// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorDockableCameraWindow.h"

#ifdef VREDITOR_VREditorDockableCameraWindow_generated_h
#error "VREditorDockableCameraWindow.generated.h already included, missing '#pragma once' in VREditorDockableCameraWindow.h"
#endif
#define VREDITOR_VREditorDockableCameraWindow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVREditorDockableCameraWindow ********************************************
struct Z_Construct_UClass_AVREditorDockableCameraWindow_Statics;
VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableCameraWindow_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableCameraWindow_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorDockableCameraWindow(); \
	friend struct ::Z_Construct_UClass_AVREditorDockableCameraWindow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_AVREditorDockableCameraWindow_NoRegister(); \
public: \
	DECLARE_CLASS2(AVREditorDockableCameraWindow, AVREditorDockableWindow, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_AVREditorDockableCameraWindow_NoRegister) \
	DECLARE_SERIALIZER(AVREditorDockableCameraWindow)


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableCameraWindow_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVREditorDockableCameraWindow(AVREditorDockableCameraWindow&&) = delete; \
	AVREditorDockableCameraWindow(const AVREditorDockableCameraWindow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorDockableCameraWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorDockableCameraWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorDockableCameraWindow) \
	NO_API virtual ~AVREditorDockableCameraWindow();


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableCameraWindow_h_11_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableCameraWindow_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableCameraWindow_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableCameraWindow_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVREditorDockableCameraWindow;

// ********** End Class AVREditorDockableCameraWindow **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableCameraWindow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
