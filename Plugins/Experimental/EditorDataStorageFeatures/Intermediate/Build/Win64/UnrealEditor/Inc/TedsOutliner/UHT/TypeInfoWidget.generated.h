// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/TypeInfoWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSOUTLINER_TypeInfoWidget_generated_h
#error "TypeInfoWidget.generated.h already included, missing '#pragma once' in TypeInfoWidget.h"
#endif
#define TEDSOUTLINER_TypeInfoWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypeInfoWidgetFactory(); \
	friend struct Z_Construct_UClass_UTypeInfoWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(UTypeInfoWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsOutliner"), NO_API) \
	DECLARE_SERIALIZER(UTypeInfoWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypeInfoWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypeInfoWidgetFactory(UTypeInfoWidgetFactory&&); \
	UTypeInfoWidgetFactory(const UTypeInfoWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypeInfoWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypeInfoWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypeInfoWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSOUTLINER_API UClass* StaticClass<class UTypeInfoWidgetFactory>();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypeInfoWidgetConstructor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


template<> TEDSOUTLINER_API UScriptStruct* StaticStruct<struct FTypeInfoWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
