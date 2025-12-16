// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/AssetDataDiskSizeWidget.h"

#ifdef TEDSASSETDATA_AssetDataDiskSizeWidget_generated_h
#error "AssetDataDiskSizeWidget.generated.h already included, missing '#pragma once' in AssetDataDiskSizeWidget.h"
#endif
#define TEDSASSETDATA_AssetDataDiskSizeWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDiskSizeWidgetFactory ***************************************************
struct Z_Construct_UClass_UDiskSizeWidgetFactory_Statics;
TEDSASSETDATA_API UClass* Z_Construct_UClass_UDiskSizeWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiskSizeWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UDiskSizeWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSASSETDATA_API UClass* ::Z_Construct_UClass_UDiskSizeWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDiskSizeWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsAssetData"), Z_Construct_UClass_UDiskSizeWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UDiskSizeWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiskSizeWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDiskSizeWidgetFactory(UDiskSizeWidgetFactory&&) = delete; \
	UDiskSizeWidgetFactory(const UDiskSizeWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiskSizeWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiskSizeWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiskSizeWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDiskSizeWidgetFactory;

// ********** End Class UDiskSizeWidgetFactory *****************************************************

// ********** Begin ScriptStruct FDiskSizeWidgetConstructor ****************************************
struct Z_Construct_UScriptStruct_FDiskSizeWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDiskSizeWidgetConstructor_Statics; \
	TEDSASSETDATA_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


struct FDiskSizeWidgetConstructor;
// ********** End ScriptStruct FDiskSizeWidgetConstructor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Widgets_AssetDataDiskSizeWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
