// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/PackagePathWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSUI_PackagePathWidget_generated_h
#error "PackagePathWidget.generated.h already included, missing '#pragma once' in PackagePathWidget.h"
#endif
#define TEDSUI_PackagePathWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackagePathWidgetFactory(); \
	friend struct Z_Construct_UClass_UPackagePathWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(UPackagePathWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), NO_API) \
	DECLARE_SERIALIZER(UPackagePathWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackagePathWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPackagePathWidgetFactory(UPackagePathWidgetFactory&&); \
	UPackagePathWidgetFactory(const UPackagePathWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackagePathWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackagePathWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackagePathWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSUI_API UClass* StaticClass<class UPackagePathWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPackagePathWidgetConstructor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FPackagePathWidgetConstructor>();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoadedPackagePathWidgetConstructor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPackagePathWidgetConstructor Super;


template<> TEDSUI_API UScriptStruct* StaticStruct<struct FLoadedPackagePathWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_PackagePathWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
