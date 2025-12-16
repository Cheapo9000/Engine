// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonLazyWidget.h"

#ifdef COMMONUI_CommonLazyWidget_generated_h
#error "CommonLazyWidget.generated.h already included, missing '#pragma once' in CommonLazyWidget.h"
#endif
#define COMMONUI_CommonLazyWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UUserWidget;

// ********** Begin Delegate FOnWidgetCreated ******************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_26_DELEGATE \
static COMMONUI_API void FOnWidgetCreated_DelegateWrapper(const FScriptDelegate& OnWidgetCreated, UUserWidget* Widget);


// ********** End Delegate FOnWidgetCreated ********************************************************

// ********** Begin Class UCommonLazyWidget ********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execLoadLazyContent); \
	DECLARE_FUNCTION(execSetLazyContentWithCallback); \
	DECLARE_FUNCTION(execSetLazyContent);


struct Z_Construct_UClass_UCommonLazyWidget_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyWidget_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLazyWidget(); \
	friend struct ::Z_Construct_UClass_UCommonLazyWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonLazyWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonLazyWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonLazyWidget_NoRegister) \
	DECLARE_SERIALIZER(UCommonLazyWidget)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonLazyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonLazyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyWidget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonLazyWidget(UCommonLazyWidget&&) = delete; \
	UCommonLazyWidget(const UCommonLazyWidget&) = delete; \
	COMMONUI_API virtual ~UCommonLazyWidget();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonLazyWidget;

// ********** End Class UCommonLazyWidget **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
