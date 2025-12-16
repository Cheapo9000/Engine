// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/PackagePathWidget.h"

#ifdef TEDSUI_PackagePathWidget_generated_h
#error "PackagePathWidget.generated.h already included, missing '#pragma once' in PackagePathWidget.h"
#endif
#define TEDSUI_PackagePathWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPackagePathWidgetFactory ************************************************
struct Z_Construct_UClass_UPackagePathWidgetFactory_Statics;
TEDSUI_API UClass* Z_Construct_UClass_UPackagePathWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackagePathWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UPackagePathWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSUI_API UClass* ::Z_Construct_UClass_UPackagePathWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPackagePathWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), Z_Construct_UClass_UPackagePathWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UPackagePathWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEDSUI_API UPackagePathWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPackagePathWidgetFactory(UPackagePathWidgetFactory&&) = delete; \
	UPackagePathWidgetFactory(const UPackagePathWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEDSUI_API, UPackagePathWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackagePathWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackagePathWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPackagePathWidgetFactory;

// ********** End Class UPackagePathWidgetFactory **************************************************

// ********** Begin ScriptStruct FPackagePathWidgetConstructor *************************************
struct Z_Construct_UScriptStruct_FPackagePathWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPackagePathWidgetConstructor_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


struct FPackagePathWidgetConstructor;
// ********** End ScriptStruct FPackagePathWidgetConstructor ***************************************

// ********** Begin ScriptStruct FLoadedPackagePathWidgetConstructor *******************************
struct Z_Construct_UScriptStruct_FLoadedPackagePathWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLoadedPackagePathWidgetConstructor_Statics; \
	TEDSUI_API static class UScriptStruct* StaticStruct(); \
	typedef FPackagePathWidgetConstructor Super;


struct FLoadedPackagePathWidgetConstructor;
// ********** End ScriptStruct FLoadedPackagePathWidgetConstructor *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
