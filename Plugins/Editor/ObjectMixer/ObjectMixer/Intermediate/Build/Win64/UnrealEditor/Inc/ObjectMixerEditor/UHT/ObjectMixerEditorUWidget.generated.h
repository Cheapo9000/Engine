// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Views/Widgets/ObjectMixerEditorUWidget.h"

#ifdef OBJECTMIXEREDITOR_ObjectMixerEditorUWidget_generated_h
#error "ObjectMixerEditorUWidget.generated.h already included, missing '#pragma once' in ObjectMixerEditorUWidget.h"
#endif
#define OBJECTMIXEREDITOR_ObjectMixerEditorUWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FObjectMixerWidgetUserConfig **************************************
struct Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics;
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics; \
	OBJECTMIXEREDITOR_API static class UScriptStruct* StaticStruct();


struct FObjectMixerWidgetUserConfig;
// ********** End ScriptStruct FObjectMixerWidgetUserConfig ****************************************

// ********** Begin Class UObjectMixerEditorUWidget ************************************************
struct Z_Construct_UClass_UObjectMixerEditorUWidget_Statics;
OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorUWidget_NoRegister();

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerEditorUWidget(); \
	friend struct ::Z_Construct_UClass_UObjectMixerEditorUWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTMIXEREDITOR_API UClass* ::Z_Construct_UClass_UObjectMixerEditorUWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectMixerEditorUWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), Z_Construct_UClass_UObjectMixerEditorUWidget_NoRegister) \
	DECLARE_SERIALIZER(UObjectMixerEditorUWidget)


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBJECTMIXEREDITOR_API UObjectMixerEditorUWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectMixerEditorUWidget(UObjectMixerEditorUWidget&&) = delete; \
	UObjectMixerEditorUWidget(const UObjectMixerEditorUWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTMIXEREDITOR_API, UObjectMixerEditorUWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerEditorUWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectMixerEditorUWidget) \
	OBJECTMIXEREDITOR_API virtual ~UObjectMixerEditorUWidget();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_30_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectMixerEditorUWidget;

// ********** End Class UObjectMixerEditorUWidget **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
