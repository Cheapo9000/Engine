// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActionWidget.h"

#ifdef COMMONUI_CommonActionWidget_generated_h
#error "CommonActionWidget.generated.h already included, missing '#pragma once' in CommonActionWidget.h"
#endif
#define COMMONUI_CommonActionWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UMaterialInstanceDynamic;
struct FDataTableRowHandle;
struct FSlateBrush;
struct FUIActionBindingHandle;

// ********** Begin Delegate FOnInputMethodChanged *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_71_DELEGATE \
static COMMONUI_API void FOnInputMethodChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInputMethodChanged, bool bUsingGamepad);


// ********** End Delegate FOnInputMethodChanged ***************************************************

// ********** Begin Delegate FOnInputIconUpdated ***************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_75_DELEGATE \
static COMMONUI_API void FOnInputIconUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInputIconUpdated);


// ********** End Delegate FOnInputIconUpdated *****************************************************

// ********** Begin Class UCommonActionWidget ******************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnEnhancedInputMappingsRebuilt); \
	DECLARE_FUNCTION(execIsHeldAction); \
	DECLARE_FUNCTION(execSetIconRimBrush); \
	DECLARE_FUNCTION(execSetInputActions); \
	DECLARE_FUNCTION(execSetInputActionBinding); \
	DECLARE_FUNCTION(execSetInputAction); \
	DECLARE_FUNCTION(execGetEnhancedInputAction); \
	DECLARE_FUNCTION(execSetEnhancedInputAction); \
	DECLARE_FUNCTION(execGetIconDynamicMaterial); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execGetIcon);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_ACCESSORS \
static void GetEnhancedInputAction_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonActionWidget, COMMONUI_API)


struct Z_Construct_UClass_UCommonActionWidget_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCommonActionWidget(); \
	friend struct ::Z_Construct_UClass_UCommonActionWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonActionWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonActionWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonActionWidget_NoRegister) \
	DECLARE_SERIALIZER(UCommonActionWidget) \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonActionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonActionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionWidget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonActionWidget(UCommonActionWidget&&) = delete; \
	UCommonActionWidget(const UCommonActionWidget&) = delete; \
	COMMONUI_API virtual ~UCommonActionWidget();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonActionWidget;

// ********** End Class UCommonActionWidget ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
