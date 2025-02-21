// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/ExportedTextWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSUI_ExportedTextWidget_generated_h
#error "ExportedTextWidget.generated.h already included, missing '#pragma once' in ExportedTextWidget.h"
#endif
#define TEDSUI_ExportedTextWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExportedTextWidgetFactory(); \
	friend struct Z_Construct_UClass_UExportedTextWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(UExportedTextWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), NO_API) \
	DECLARE_SERIALIZER(UExportedTextWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExportedTextWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExportedTextWidgetFactory(UExportedTextWidgetFactory&&); \
	UExportedTextWidgetFactory(const UExportedTextWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExportedTextWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportedTextWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportedTextWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSUI_API UClass* StaticClass<class UExportedTextWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExportedTextWidgetConstructor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FExportedTextWidgetConstructor>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExportedTextWidgetTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FExportedTextWidgetTag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
