// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonWidgetCarouselNavBar.h"

#ifdef COMMONUI_CommonWidgetCarouselNavBar_generated_h
#error "CommonWidgetCarouselNavBar.generated.h already included, missing '#pragma once' in CommonWidgetCarouselNavBar.h"
#endif
#define COMMONUI_CommonWidgetCarouselNavBar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButtonBase;
class UCommonWidgetCarousel;

// ********** Begin Class UCommonWidgetCarouselNavBar **********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHandleButtonClicked); \
	DECLARE_FUNCTION(execHandlePageChanged); \
	DECLARE_FUNCTION(execSetLinkedCarousel);


struct Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarouselNavBar(); \
	friend struct ::Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonWidgetCarouselNavBar_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonWidgetCarouselNavBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonWidgetCarouselNavBar_NoRegister) \
	DECLARE_SERIALIZER(UCommonWidgetCarouselNavBar)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonWidgetCarouselNavBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetCarouselNavBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonWidgetCarouselNavBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarouselNavBar); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonWidgetCarouselNavBar(UCommonWidgetCarouselNavBar&&) = delete; \
	UCommonWidgetCarouselNavBar(const UCommonWidgetCarouselNavBar&) = delete; \
	COMMONUI_API virtual ~UCommonWidgetCarouselNavBar();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonWidgetCarouselNavBar;

// ********** End Class UCommonWidgetCarouselNavBar ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
