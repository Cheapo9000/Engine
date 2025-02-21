// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/OutlinerLabelWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSOUTLINER_OutlinerLabelWidget_generated_h
#error "OutlinerLabelWidget.generated.h already included, missing '#pragma once' in OutlinerLabelWidget.h"
#endif
#define TEDSOUTLINER_OutlinerLabelWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutlinerLabelWidgetFactory(); \
	friend struct Z_Construct_UClass_UOutlinerLabelWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(UOutlinerLabelWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsOutliner"), NO_API) \
	DECLARE_SERIALIZER(UOutlinerLabelWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutlinerLabelWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOutlinerLabelWidgetFactory(UOutlinerLabelWidgetFactory&&); \
	UOutlinerLabelWidgetFactory(const UOutlinerLabelWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlinerLabelWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlinerLabelWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutlinerLabelWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSOUTLINER_API UClass* StaticClass<class UOutlinerLabelWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOutlinerLabelWidgetConstructor_Statics; \
	TEDSOUTLINER_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


template<> TEDSOUTLINER_API UScriptStruct* StaticStruct<struct FOutlinerLabelWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Private_Widgets_OutlinerLabelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
