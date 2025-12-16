// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/AssetLabelWidget.h"

#ifdef TEDSASSETDATA_AssetLabelWidget_generated_h
#error "AssetLabelWidget.generated.h already included, missing '#pragma once' in AssetLabelWidget.h"
#endif
#define TEDSASSETDATA_AssetLabelWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetLabelWidgetFactory *************************************************
struct Z_Construct_UClass_UAssetLabelWidgetFactory_Statics;
TEDSASSETDATA_API UClass* Z_Construct_UClass_UAssetLabelWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetLabelWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UAssetLabelWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSASSETDATA_API UClass* ::Z_Construct_UClass_UAssetLabelWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetLabelWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsAssetData"), Z_Construct_UClass_UAssetLabelWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UAssetLabelWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetLabelWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetLabelWidgetFactory(UAssetLabelWidgetFactory&&) = delete; \
	UAssetLabelWidgetFactory(const UAssetLabelWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetLabelWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetLabelWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetLabelWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetLabelWidgetFactory;

// ********** End Class UAssetLabelWidgetFactory ***************************************************

// ********** Begin ScriptStruct FAssetLabelWidgetConstructor **************************************
struct Z_Construct_UScriptStruct_FAssetLabelWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetLabelWidgetConstructor_Statics; \
	TEDSASSETDATA_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


struct FAssetLabelWidgetConstructor;
// ********** End ScriptStruct FAssetLabelWidgetConstructor ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetLabelWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
