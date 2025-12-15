// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorFloatingCameraUI.h"

#ifdef VREDITOR_VREditorFloatingCameraUI_generated_h
#error "VREditorFloatingCameraUI.generated.h already included, missing '#pragma once' in VREditorFloatingCameraUI.h"
#endif
#define VREDITOR_VREditorFloatingCameraUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVREditorFloatingCameraUI ************************************************
struct Z_Construct_UClass_AVREditorFloatingCameraUI_Statics;
VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingCameraUI_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorFloatingCameraUI_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorFloatingCameraUI(); \
	friend struct ::Z_Construct_UClass_AVREditorFloatingCameraUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_AVREditorFloatingCameraUI_NoRegister(); \
public: \
	DECLARE_CLASS2(AVREditorFloatingCameraUI, AVREditorFloatingUI, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_AVREditorFloatingCameraUI_NoRegister) \
	DECLARE_SERIALIZER(AVREditorFloatingCameraUI)


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorFloatingCameraUI_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVREditorFloatingCameraUI(AVREditorFloatingCameraUI&&) = delete; \
	AVREditorFloatingCameraUI(const AVREditorFloatingCameraUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorFloatingCameraUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorFloatingCameraUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorFloatingCameraUI) \
	NO_API virtual ~AVREditorFloatingCameraUI();


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorFloatingCameraUI_h_23_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorFloatingCameraUI_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorFloatingCameraUI_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorFloatingCameraUI_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVREditorFloatingCameraUI;

// ********** End Class AVREditorFloatingCameraUI **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_UI_VREditorFloatingCameraUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
