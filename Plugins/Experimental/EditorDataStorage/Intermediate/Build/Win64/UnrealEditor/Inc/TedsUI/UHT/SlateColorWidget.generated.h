// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SlateColorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSUI_SlateColorWidget_generated_h
#error "SlateColorWidget.generated.h already included, missing '#pragma once' in SlateColorWidget.h"
#endif
#define TEDSUI_SlateColorWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateColorWidgetFactory(); \
	friend struct Z_Construct_UClass_USlateColorWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(USlateColorWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), NO_API) \
	DECLARE_SERIALIZER(USlateColorWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateColorWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateColorWidgetFactory(USlateColorWidgetFactory&&); \
	USlateColorWidgetFactory(const USlateColorWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateColorWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateColorWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateColorWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSUI_API UClass* StaticClass<class USlateColorWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateColorWidgetConstructor_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FSlateColorWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_SlateColorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
