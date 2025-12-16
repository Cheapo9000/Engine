// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/AssetNameWidget.h"

#ifdef TEDSASSETDATA_AssetNameWidget_generated_h
#error "AssetNameWidget.generated.h already included, missing '#pragma once' in AssetNameWidget.h"
#endif
#define TEDSASSETDATA_AssetNameWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetNameWidgetFactory **************************************************
struct Z_Construct_UClass_UAssetNameWidgetFactory_Statics;
TEDSASSETDATA_API UClass* Z_Construct_UClass_UAssetNameWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetNameWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UAssetNameWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSASSETDATA_API UClass* ::Z_Construct_UClass_UAssetNameWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetNameWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsAssetData"), Z_Construct_UClass_UAssetNameWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UAssetNameWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetNameWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetNameWidgetFactory(UAssetNameWidgetFactory&&) = delete; \
	UAssetNameWidgetFactory(const UAssetNameWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetNameWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetNameWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetNameWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetNameWidgetFactory;

// ********** End Class UAssetNameWidgetFactory ****************************************************

// ********** Begin ScriptStruct FAssetNameWidgetConstructor ***************************************
struct Z_Construct_UScriptStruct_FAssetNameWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetNameWidgetConstructor_Statics; \
	TEDSASSETDATA_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


struct FAssetNameWidgetConstructor;
// ********** End ScriptStruct FAssetNameWidgetConstructor *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Public_Widgets_AssetNameWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
