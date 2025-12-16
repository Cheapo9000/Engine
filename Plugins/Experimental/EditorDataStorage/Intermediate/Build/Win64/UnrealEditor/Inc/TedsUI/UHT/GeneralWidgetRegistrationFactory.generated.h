// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/GeneralWidgetRegistrationFactory.h"

#ifdef TEDSUI_GeneralWidgetRegistrationFactory_generated_h
#error "GeneralWidgetRegistrationFactory.generated.h already included, missing '#pragma once' in GeneralWidgetRegistrationFactory.h"
#endif
#define TEDSUI_GeneralWidgetRegistrationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeneralWidgetRegistrationFactory ****************************************
struct Z_Construct_UClass_UGeneralWidgetRegistrationFactory_Statics;
TEDSUI_API UClass* Z_Construct_UClass_UGeneralWidgetRegistrationFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_GeneralWidgetRegistrationFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneralWidgetRegistrationFactory(); \
	friend struct ::Z_Construct_UClass_UGeneralWidgetRegistrationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSUI_API UClass* ::Z_Construct_UClass_UGeneralWidgetRegistrationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeneralWidgetRegistrationFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsUI"), Z_Construct_UClass_UGeneralWidgetRegistrationFactory_NoRegister) \
	DECLARE_SERIALIZER(UGeneralWidgetRegistrationFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_GeneralWidgetRegistrationFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEDSUI_API UGeneralWidgetRegistrationFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeneralWidgetRegistrationFactory(UGeneralWidgetRegistrationFactory&&) = delete; \
	UGeneralWidgetRegistrationFactory(const UGeneralWidgetRegistrationFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEDSUI_API, UGeneralWidgetRegistrationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralWidgetRegistrationFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralWidgetRegistrationFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_GeneralWidgetRegistrationFactory_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_GeneralWidgetRegistrationFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_GeneralWidgetRegistrationFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_GeneralWidgetRegistrationFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeneralWidgetRegistrationFactory;

// ********** End Class UGeneralWidgetRegistrationFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsUI_Public_Widgets_GeneralWidgetRegistrationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
