// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorFloatingUI.h"

#ifdef VREDITOR_VREditorFloatingUI_generated_h
#error "VREditorFloatingUI.generated.h already included, missing '#pragma once' in VREditorFloatingUI.h"
#endif
#define VREDITOR_VREditorFloatingUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVREditorFloatingUICreationContext ********************************
struct Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics;
#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics; \
	VREDITOR_API static class UScriptStruct* StaticStruct();


struct FVREditorFloatingUICreationContext;
// ********** End ScriptStruct FVREditorFloatingUICreationContext **********************************

// ********** Begin Class AVREditorFloatingUI ******************************************************
struct Z_Construct_UClass_AVREditorFloatingUI_Statics;
VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorFloatingUI(); \
	friend struct ::Z_Construct_UClass_AVREditorFloatingUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_AVREditorFloatingUI_NoRegister(); \
public: \
	DECLARE_CLASS2(AVREditorFloatingUI, AVREditorBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_AVREditorFloatingUI_NoRegister) \
	DECLARE_SERIALIZER(AVREditorFloatingUI)


#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVREditorFloatingUI(AVREditorFloatingUI&&) = delete; \
	AVREditorFloatingUI(const AVREditorFloatingUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorFloatingUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorFloatingUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorFloatingUI) \
	NO_API virtual ~AVREditorFloatingUI();


#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h_76_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVREditorFloatingUI;

// ********** End Class AVREditorFloatingUI ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_UI_VREditorFloatingUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
