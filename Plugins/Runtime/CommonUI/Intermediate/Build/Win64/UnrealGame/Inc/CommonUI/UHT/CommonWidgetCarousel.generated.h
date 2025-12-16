// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonWidgetCarousel.h"

#ifdef COMMONUI_CommonWidgetCarousel_generated_h
#error "CommonWidgetCarousel.generated.h already included, missing '#pragma once' in CommonWidgetCarousel.h"
#endif
#define COMMONUI_CommonWidgetCarousel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonWidgetCarousel;
class UWidget;

// ********** Begin Delegate FOnCurrentPageIndexChanged ********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_17_DELEGATE \
COMMONUI_API void FOnCurrentPageIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentPageIndexChanged, UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);


// ********** End Delegate FOnCurrentPageIndexChanged **********************************************

// ********** Begin Class UCommonWidgetCarousel ****************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetCacheChildren); \
	DECLARE_FUNCTION(execSetCacheChildren); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execSetMoveSpeed); \
	DECLARE_FUNCTION(execPreviousPage); \
	DECLARE_FUNCTION(execNextPage); \
	DECLARE_FUNCTION(execEndAutoScrolling); \
	DECLARE_FUNCTION(execBeginAutoScrolling); \
	DECLARE_FUNCTION(execGetWidgetAtIndex); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex); \
	DECLARE_FUNCTION(execGetActiveWidgetIndex);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_ACCESSORS \
static void GetMoveSpeed_WrapperImpl(const void* Object, void* OutValue); \
static void SetMoveSpeed_WrapperImpl(void* Object, const void* InValue); \
static void GetbCacheChildren_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCacheChildren_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCommonWidgetCarousel_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarousel(); \
	friend struct ::Z_Construct_UClass_UCommonWidgetCarousel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonWidgetCarousel_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonWidgetCarousel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister) \
	DECLARE_SERIALIZER(UCommonWidgetCarousel)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonWidgetCarousel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetCarousel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonWidgetCarousel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarousel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonWidgetCarousel(UCommonWidgetCarousel&&) = delete; \
	UCommonWidgetCarousel(const UCommonWidgetCarousel&) = delete; \
	COMMONUI_API virtual ~UCommonWidgetCarousel();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonWidgetCarousel;

// ********** End Class UCommonWidgetCarousel ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
