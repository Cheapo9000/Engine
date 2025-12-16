// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UrlWidget.h"

#ifdef TEDSUI_UrlWidget_generated_h
#error "UrlWidget.generated.h already included, missing '#pragma once' in UrlWidget.h"
#endif
#define TEDSUI_UrlWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUrlWidgetFactory ********************************************************
struct Z_Construct_UClass_UUrlWidgetFactory_Statics;
TEDSUI_API UClass* Z_Construct_UClass_UUrlWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUrlWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UUrlWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSUI_API UClass* ::Z_Construct_UClass_UUrlWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UUrlWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), Z_Construct_UClass_UUrlWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UUrlWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUrlWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUrlWidgetFactory(UUrlWidgetFactory&&) = delete; \
	UUrlWidgetFactory(const UUrlWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUrlWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUrlWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUrlWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUrlWidgetFactory;

// ********** End Class UUrlWidgetFactory **********************************************************

// ********** Begin ScriptStruct FUrlWidgetConstructor *********************************************
struct Z_Construct_UScriptStruct_FUrlWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUrlWidgetConstructor_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


struct FUrlWidgetConstructor;
// ********** End ScriptStruct FUrlWidgetConstructor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_UrlWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
