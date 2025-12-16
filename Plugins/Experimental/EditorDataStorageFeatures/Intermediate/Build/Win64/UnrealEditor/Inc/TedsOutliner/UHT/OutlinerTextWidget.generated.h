// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/OutlinerTextWidget.h"

#ifdef TEDSOUTLINER_OutlinerTextWidget_generated_h
#error "OutlinerTextWidget.generated.h already included, missing '#pragma once' in OutlinerTextWidget.h"
#endif
#define TEDSOUTLINER_OutlinerTextWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOutlinerTextWidgetFactory ***********************************************
struct Z_Construct_UClass_UOutlinerTextWidgetFactory_Statics;
TEDSOUTLINER_API UClass* Z_Construct_UClass_UOutlinerTextWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutlinerTextWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UOutlinerTextWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSOUTLINER_API UClass* ::Z_Construct_UClass_UOutlinerTextWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UOutlinerTextWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsOutliner"), Z_Construct_UClass_UOutlinerTextWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UOutlinerTextWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutlinerTextWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOutlinerTextWidgetFactory(UOutlinerTextWidgetFactory&&) = delete; \
	UOutlinerTextWidgetFactory(const UOutlinerTextWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlinerTextWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlinerTextWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutlinerTextWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOutlinerTextWidgetFactory;

// ********** End Class UOutlinerTextWidgetFactory *************************************************

// ********** Begin ScriptStruct FOutlinerTextWidgetConstructor ************************************
struct Z_Construct_UScriptStruct_FOutlinerTextWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOutlinerTextWidgetConstructor_Statics; \
	TEDSOUTLINER_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


struct FOutlinerTextWidgetConstructor;
// ********** End ScriptStruct FOutlinerTextWidgetConstructor **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_OutlinerTextWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
