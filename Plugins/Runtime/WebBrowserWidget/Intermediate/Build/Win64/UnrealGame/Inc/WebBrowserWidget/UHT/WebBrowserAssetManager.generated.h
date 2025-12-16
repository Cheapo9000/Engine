// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebBrowserAssetManager.h"

#ifdef WEBBROWSERWIDGET_WebBrowserAssetManager_generated_h
#error "WebBrowserAssetManager.generated.h already included, missing '#pragma once' in WebBrowserAssetManager.h"
#endif
#define WEBBROWSERWIDGET_WebBrowserAssetManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebBrowserAssetManager **************************************************
struct Z_Construct_UClass_UWebBrowserAssetManager_Statics;
WEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UWebBrowserAssetManager_NoRegister();

#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWebBrowserAssetManager(); \
	friend struct ::Z_Construct_UClass_UWebBrowserAssetManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBBROWSERWIDGET_API UClass* ::Z_Construct_UClass_UWebBrowserAssetManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebBrowserAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebBrowserWidget"), Z_Construct_UClass_UWebBrowserAssetManager_NoRegister) \
	DECLARE_SERIALIZER(UWebBrowserAssetManager)


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBrowserAssetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBrowserAssetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBrowserAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBrowserAssetManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebBrowserAssetManager(UWebBrowserAssetManager&&) = delete; \
	UWebBrowserAssetManager(const UWebBrowserAssetManager&) = delete; \
	NO_API virtual ~UWebBrowserAssetManager();


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebBrowserAssetManager;

// ********** End Class UWebBrowserAssetManager ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
