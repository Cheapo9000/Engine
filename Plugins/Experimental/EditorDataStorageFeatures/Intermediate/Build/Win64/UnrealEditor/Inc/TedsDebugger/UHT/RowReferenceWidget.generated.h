// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/RowReferenceWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSDEBUGGER_RowReferenceWidget_generated_h
#error "RowReferenceWidget.generated.h already included, missing '#pragma once' in RowReferenceWidget.h"
#endif
#define TEDSDEBUGGER_RowReferenceWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURowReferenceWidgetFactory(); \
	friend struct Z_Construct_UClass_URowReferenceWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(URowReferenceWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsDebugger"), NO_API) \
	DECLARE_SERIALIZER(URowReferenceWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URowReferenceWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URowReferenceWidgetFactory(URowReferenceWidgetFactory&&); \
	URowReferenceWidgetFactory(const URowReferenceWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URowReferenceWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URowReferenceWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URowReferenceWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSDEBUGGER_API UClass* StaticClass<class URowReferenceWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRowReferenceWidgetConstructor_Statics; \
	TEDSDEBUGGER_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


template<> TEDSDEBUGGER_API UScriptStruct* StaticStruct<struct FRowReferenceWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
