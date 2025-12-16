// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActivatableWidget.h"

#ifdef COMMONUI_CommonActivatableWidget_generated_h
#error "CommonActivatableWidget.generated.h already included, missing '#pragma once' in CommonActivatableWidget.h"
#endif
#define COMMONUI_CommonActivatableWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidget;
class UWidget;
enum class ESlateVisibility : uint8;
struct FUIInputConfig;

// ********** Begin Delegate FOnWidgetActivationChanged ********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_15_DELEGATE \
COMMONUI_API void FOnWidgetActivationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetActivationChanged);


// ********** End Delegate FOnWidgetActivationChanged **********************************************

// ********** Begin Class UCommonActivatableWidget *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestRefreshFocus); \
	DECLARE_FUNCTION(execClearFocusRestorationTarget); \
	DECLARE_FUNCTION(execGetDesiredFocusTarget); \
	DECLARE_FUNCTION(execBindVisibilityToActivation); \
	DECLARE_FUNCTION(execSetBindVisibilities); \
	DECLARE_FUNCTION(execDeactivateWidget); \
	DECLARE_FUNCTION(execActivateWidget); \
	DECLARE_FUNCTION(execIsActivated);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCommonActivatableWidget_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActivatableWidget(); \
	friend struct ::Z_Construct_UClass_UCommonActivatableWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonActivatableWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonActivatableWidget, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonActivatableWidget_NoRegister) \
	DECLARE_SERIALIZER(UCommonActivatableWidget)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonActivatableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonActivatableWidget(UCommonActivatableWidget&&) = delete; \
	UCommonActivatableWidget(const UCommonActivatableWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatableWidget) \
	COMMONUI_API virtual ~UCommonActivatableWidget();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonActivatableWidget;

// ********** End Class UCommonActivatableWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
