// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SlateVisualizationWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSDEBUGGER_SlateVisualizationWidget_generated_h
#error "SlateVisualizationWidget.generated.h already included, missing '#pragma once' in SlateVisualizationWidget.h"
#endif
#define TEDSDEBUGGER_SlateVisualizationWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateVisualizationWidgetFactory(); \
	friend struct Z_Construct_UClass_USlateVisualizationWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(USlateVisualizationWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsDebugger"), NO_API) \
	DECLARE_SERIALIZER(USlateVisualizationWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateVisualizationWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateVisualizationWidgetFactory(USlateVisualizationWidgetFactory&&); \
	USlateVisualizationWidgetFactory(const USlateVisualizationWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateVisualizationWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateVisualizationWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateVisualizationWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSDEBUGGER_API UClass* StaticClass<class USlateVisualizationWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateVisualizationWidgetConstructor_Statics; \
	TEDSDEBUGGER_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


template<> TEDSDEBUGGER_API UScriptStruct* StaticStruct<struct FSlateVisualizationWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_SlateVisualizationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
