// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/CounterWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSUI_CounterWidget_generated_h
#error "CounterWidget.generated.h already included, missing '#pragma once' in CounterWidget.h"
#endif
#define TEDSUI_CounterWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCounterWidgetFactory(); \
	friend struct Z_Construct_UClass_UCounterWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(UCounterWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), NO_API) \
	DECLARE_SERIALIZER(UCounterWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCounterWidgetFactory(UCounterWidgetFactory&&); \
	UCounterWidgetFactory(const UCounterWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCounterWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCounterWidgetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCounterWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSUI_API UClass* StaticClass<class UCounterWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCounterWidgetConstructor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FCounterWidgetConstructor>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCounterWidgetColumn_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageColumn Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FCounterWidgetColumn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_CounterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
