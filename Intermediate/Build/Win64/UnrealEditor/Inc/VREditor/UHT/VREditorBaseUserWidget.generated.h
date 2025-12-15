// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorBaseUserWidget.h"

#ifdef VREDITOR_VREditorBaseUserWidget_generated_h
#error "VREditorBaseUserWidget.generated.h already included, missing '#pragma once' in VREditorBaseUserWidget.h"
#endif
#define VREDITOR_VREditorBaseUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVREditorBaseUserWidget **************************************************
struct Z_Construct_UClass_UVREditorBaseUserWidget_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVREditorBaseUserWidget_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorBaseUserWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorBaseUserWidget(); \
	friend struct ::Z_Construct_UClass_UVREditorBaseUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVREditorBaseUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UVREditorBaseUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVREditorBaseUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UVREditorBaseUserWidget)


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorBaseUserWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVREditorBaseUserWidget(UVREditorBaseUserWidget&&) = delete; \
	UVREditorBaseUserWidget(const UVREditorBaseUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorBaseUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorBaseUserWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorBaseUserWidget) \
	NO_API virtual ~UVREditorBaseUserWidget();


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorBaseUserWidget_h_19_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorBaseUserWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorBaseUserWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorBaseUserWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVREditorBaseUserWidget;

// ********** End Class UVREditorBaseUserWidget ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_UI_VREditorBaseUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
