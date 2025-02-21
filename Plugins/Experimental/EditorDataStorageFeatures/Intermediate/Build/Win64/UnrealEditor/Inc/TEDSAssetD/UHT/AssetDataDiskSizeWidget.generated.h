// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/AssetDataDiskSizeWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSASSETDATA_AssetDataDiskSizeWidget_generated_h
#error "AssetDataDiskSizeWidget.generated.h already included, missing '#pragma once' in AssetDataDiskSizeWidget.h"
#endif
#define TEDSASSETDATA_AssetDataDiskSizeWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiskSizeWidgetFactory(); \
	friend struct Z_Construct_UClass_UDiskSizeWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(UDiskSizeWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsAssetData"), NO_API) \
	DECLARE_SERIALIZER(UDiskSizeWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiskSizeWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDiskSizeWidgetFactory(UDiskSizeWidgetFactory&&); \
	UDiskSizeWidgetFactory(const UDiskSizeWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiskSizeWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiskSizeWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiskSizeWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSASSETDATA_API UClass* StaticClass<class UDiskSizeWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDiskSizeWidgetConstructor_Statics; \
	TEDSASSETDATA_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


template<> TEDSASSETDATA_API UScriptStruct* StaticStruct<struct FDiskSizeWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
