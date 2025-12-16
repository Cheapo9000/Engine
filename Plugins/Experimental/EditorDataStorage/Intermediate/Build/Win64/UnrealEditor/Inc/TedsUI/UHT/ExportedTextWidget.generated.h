// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/ExportedTextWidget.h"

#ifdef TEDSUI_ExportedTextWidget_generated_h
#error "ExportedTextWidget.generated.h already included, missing '#pragma once' in ExportedTextWidget.h"
#endif
#define TEDSUI_ExportedTextWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExportedTextWidgetFactory ***********************************************
struct Z_Construct_UClass_UExportedTextWidgetFactory_Statics;
TEDSUI_API UClass* Z_Construct_UClass_UExportedTextWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExportedTextWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UExportedTextWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSUI_API UClass* ::Z_Construct_UClass_UExportedTextWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UExportedTextWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), Z_Construct_UClass_UExportedTextWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UExportedTextWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEDSUI_API UExportedTextWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExportedTextWidgetFactory(UExportedTextWidgetFactory&&) = delete; \
	UExportedTextWidgetFactory(const UExportedTextWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEDSUI_API, UExportedTextWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportedTextWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportedTextWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExportedTextWidgetFactory;

// ********** End Class UExportedTextWidgetFactory *************************************************

// ********** Begin ScriptStruct FExportedTextWidgetConstructor ************************************
struct Z_Construct_UScriptStruct_FExportedTextWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExportedTextWidgetConstructor_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


struct FExportedTextWidgetConstructor;
// ********** End ScriptStruct FExportedTextWidgetConstructor **************************************

// ********** Begin ScriptStruct FExportedTextWidgetTag ********************************************
struct Z_Construct_UScriptStruct_FExportedTextWidgetTag_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExportedTextWidgetTag_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorDataStorageTag Super;


struct FExportedTextWidgetTag;
// ********** End ScriptStruct FExportedTextWidgetTag **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_ExportedTextWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
