// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/LabelWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSUI_LabelWidget_generated_h
#error "LabelWidget.generated.h already included, missing '#pragma once' in LabelWidget.h"
#endif
#define TEDSUI_LabelWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULabelWidgetFactory(); \
	friend struct Z_Construct_UClass_ULabelWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(ULabelWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), NO_API) \
	DECLARE_SERIALIZER(ULabelWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULabelWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULabelWidgetFactory(ULabelWidgetFactory&&); \
	ULabelWidgetFactory(const ULabelWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULabelWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULabelWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULabelWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSUI_API UClass* StaticClass<class ULabelWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLabelWidgetConstructor_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FLabelWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_LabelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
