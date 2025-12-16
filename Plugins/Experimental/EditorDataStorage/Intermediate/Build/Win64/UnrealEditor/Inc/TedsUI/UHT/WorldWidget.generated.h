// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/WorldWidget.h"

#ifdef TEDSUI_WorldWidget_generated_h
#error "WorldWidget.generated.h already included, missing '#pragma once' in WorldWidget.h"
#endif
#define TEDSUI_WorldWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldWidgetFactory ******************************************************
struct Z_Construct_UClass_UWorldWidgetFactory_Statics;
TEDSUI_API UClass* Z_Construct_UClass_UWorldWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UWorldWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSUI_API UClass* ::Z_Construct_UClass_UWorldWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), Z_Construct_UClass_UWorldWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UWorldWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldWidgetFactory(UWorldWidgetFactory&&) = delete; \
	UWorldWidgetFactory(const UWorldWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldWidgetFactory;

// ********** End Class UWorldWidgetFactory ********************************************************

// ********** Begin ScriptStruct FWorldWidgetConstructor *******************************************
struct Z_Construct_UScriptStruct_FWorldWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldWidgetConstructor_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


struct FWorldWidgetConstructor;
// ********** End ScriptStruct FWorldWidgetConstructor *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Private_Widgets_WorldWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
