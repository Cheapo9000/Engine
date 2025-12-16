// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/RowReferenceWidget.h"

#ifdef TEDSDEBUGGER_RowReferenceWidget_generated_h
#error "RowReferenceWidget.generated.h already included, missing '#pragma once' in RowReferenceWidget.h"
#endif
#define TEDSDEBUGGER_RowReferenceWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URowReferenceWidgetFactory ***********************************************
struct Z_Construct_UClass_URowReferenceWidgetFactory_Statics;
TEDSDEBUGGER_API UClass* Z_Construct_UClass_URowReferenceWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURowReferenceWidgetFactory(); \
	friend struct ::Z_Construct_UClass_URowReferenceWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSDEBUGGER_API UClass* ::Z_Construct_UClass_URowReferenceWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(URowReferenceWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsDebugger"), Z_Construct_UClass_URowReferenceWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(URowReferenceWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URowReferenceWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URowReferenceWidgetFactory(URowReferenceWidgetFactory&&) = delete; \
	URowReferenceWidgetFactory(const URowReferenceWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URowReferenceWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URowReferenceWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URowReferenceWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URowReferenceWidgetFactory;

// ********** End Class URowReferenceWidgetFactory *************************************************

// ********** Begin ScriptStruct FRowReferenceWidgetConstructor ************************************
struct Z_Construct_UScriptStruct_FRowReferenceWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRowReferenceWidgetConstructor_Statics; \
	TEDSDEBUGGER_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


struct FRowReferenceWidgetConstructor;
// ********** End ScriptStruct FRowReferenceWidgetConstructor **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsDebugger_Private_Widgets_RowReferenceWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
