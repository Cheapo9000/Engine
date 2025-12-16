// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebBrowser.h"

#ifdef WEBBROWSERWIDGET_WebBrowser_generated_h
#error "WebBrowser.generated.h already included, missing '#pragma once' in WebBrowser.h"
#endif
#define WEBBROWSERWIDGET_WebBrowser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnUrlChanged *********************************************************
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_20_DELEGATE \
static void FOnUrlChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUrlChanged, FText const& Text);


// ********** End Delegate FOnUrlChanged ***********************************************************

// ********** Begin Delegate FOnBeforePopup ********************************************************
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_21_DELEGATE \
static void FOnBeforePopup_DelegateWrapper(const FMulticastScriptDelegate& OnBeforePopup, const FString& URL, const FString& Frame);


// ********** End Delegate FOnBeforePopup **********************************************************

// ********** Begin Delegate FOnConsoleMessage *****************************************************
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_22_DELEGATE \
static void FOnConsoleMessage_DelegateWrapper(const FMulticastScriptDelegate& OnConsoleMessage, const FString& Message, const FString& Source, int32 Line);


// ********** End Delegate FOnConsoleMessage *******************************************************

// ********** Begin Class UWebBrowser **************************************************************
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execExecuteJavascript); \
	DECLARE_FUNCTION(execLoadString); \
	DECLARE_FUNCTION(execLoadURL);


struct Z_Construct_UClass_UWebBrowser_Statics;
WEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UWebBrowser_NoRegister();

#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWebBrowser(); \
	friend struct ::Z_Construct_UClass_UWebBrowser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBBROWSERWIDGET_API UClass* ::Z_Construct_UClass_UWebBrowser_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebBrowser, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebBrowserWidget"), Z_Construct_UClass_UWebBrowser_NoRegister) \
	DECLARE_SERIALIZER(UWebBrowser)


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBrowser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBrowser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBrowser); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebBrowser(UWebBrowser&&) = delete; \
	UWebBrowser(const UWebBrowser&) = delete; \
	NO_API virtual ~UWebBrowser();


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebBrowser;

// ********** End Class UWebBrowser ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
