// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/TypeInfoWidget.h"

#ifdef TEDSOUTLINER_TypeInfoWidget_generated_h
#error "TypeInfoWidget.generated.h already included, missing '#pragma once' in TypeInfoWidget.h"
#endif
#define TEDSOUTLINER_TypeInfoWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTypeInfoWidgetFactory ***************************************************
struct Z_Construct_UClass_UTypeInfoWidgetFactory_Statics;
TEDSOUTLINER_API UClass* Z_Construct_UClass_UTypeInfoWidgetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypeInfoWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UTypeInfoWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSOUTLINER_API UClass* ::Z_Construct_UClass_UTypeInfoWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypeInfoWidgetFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsOutliner"), Z_Construct_UClass_UTypeInfoWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UTypeInfoWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypeInfoWidgetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypeInfoWidgetFactory(UTypeInfoWidgetFactory&&) = delete; \
	UTypeInfoWidgetFactory(const UTypeInfoWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypeInfoWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypeInfoWidgetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypeInfoWidgetFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypeInfoWidgetFactory;

// ********** End Class UTypeInfoWidgetFactory *****************************************************

// ********** Begin ScriptStruct FTypeInfoWidgetConstructor ****************************************
struct Z_Construct_UScriptStruct_FTypeInfoWidgetConstructor_Statics;
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypeInfoWidgetConstructor_Statics; \
	TEDSOUTLINER_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementWidgetConstructor Super;


struct FTypeInfoWidgetConstructor;
// ********** End ScriptStruct FTypeInfoWidgetConstructor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsOutliner_Public_Widgets_TypeInfoWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
