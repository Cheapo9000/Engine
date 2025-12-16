// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonTabListWidgetBase.h"

#ifdef COMMONUI_CommonTabListWidgetBase_generated_h
#error "CommonTabListWidgetBase.generated.h already included, missing '#pragma once' in CommonTabListWidgetBase.h"
#endif
#define COMMONUI_CommonTabListWidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCommonAnimatedSwitcher;
class UCommonButtonBase;
class UWidget;
enum class ESlateVisibility : uint8;

// ********** Begin ScriptStruct FCommonRegisteredTabInfo ******************************************
struct Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FCommonRegisteredTabInfo;
// ********** End ScriptStruct FCommonRegisteredTabInfo ********************************************

// ********** Begin Delegate FOnTabSelected ********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_57_DELEGATE \
static COMMONUI_API void FOnTabSelected_DelegateWrapper(const FMulticastScriptDelegate& OnTabSelected, FName TabId);


// ********** End Delegate FOnTabSelected **********************************************************

// ********** Begin Delegate FOnTabButtonCreation **************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_64_DELEGATE \
static COMMONUI_API void FOnTabButtonCreation_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonCreation, FName TabId, UCommonButtonBase* TabButton);


// ********** End Delegate FOnTabButtonCreation ****************************************************

// ********** Begin Delegate FOnTabButtonRemoval ***************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_71_DELEGATE \
static COMMONUI_API void FOnTabButtonRemoval_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonRemoval, FName TabId, UCommonButtonBase* TabButton);


// ********** End Delegate FOnTabButtonRemoval *****************************************************

// ********** Begin Delegate FOnTabListRebuilt *****************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_78_DELEGATE \
static COMMONUI_API void FOnTabListRebuilt_DelegateWrapper(const FMulticastScriptDelegate& OnTabListRebuilt);


// ********** End Delegate FOnTabListRebuilt *******************************************************

// ********** Begin Class UCommonTabListWidgetBase *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_RPC_WRAPPERS \
	COMMONUI_API virtual void HandleTabRemoval_Implementation(FName TabNameID, UCommonButtonBase* TabButton); \
	COMMONUI_API virtual void HandleTabCreation_Implementation(FName TabNameID, UCommonButtonBase* TabButton); \
	DECLARE_FUNCTION(execHandleNextTabInputAction); \
	DECLARE_FUNCTION(execHandlePreviousTabInputAction); \
	DECLARE_FUNCTION(execHandleTabButtonSelected); \
	DECLARE_FUNCTION(execHandleTabRemoval); \
	DECLARE_FUNCTION(execHandleTabCreation); \
	DECLARE_FUNCTION(execRegisterTabContentWidget); \
	DECLARE_FUNCTION(execHasTabContentWidget); \
	DECLARE_FUNCTION(execGetTabButtonBaseByID); \
	DECLARE_FUNCTION(execSetListeningForInput); \
	DECLARE_FUNCTION(execDisableTabWithReason); \
	DECLARE_FUNCTION(execSetTabInteractionEnabled); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabVisibility); \
	DECLARE_FUNCTION(execGetTabIdAtIndex); \
	DECLARE_FUNCTION(execGetSelectedTabId); \
	DECLARE_FUNCTION(execSelectTabByID); \
	DECLARE_FUNCTION(execGetTabCount); \
	DECLARE_FUNCTION(execRemoveAllTabs); \
	DECLARE_FUNCTION(execRemoveTab); \
	DECLARE_FUNCTION(execRegisterTab); \
	DECLARE_FUNCTION(execGetLinkedSwitcher); \
	DECLARE_FUNCTION(execSetLinkedSwitcher); \
	DECLARE_FUNCTION(execGetActiveTab);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCommonTabListWidgetBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidgetBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUCommonTabListWidgetBase(); \
	friend struct ::Z_Construct_UClass_UCommonTabListWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonTabListWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonTabListWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonTabListWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(UCommonTabListWidgetBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonTabListWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTabListWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonTabListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTabListWidgetBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonTabListWidgetBase(UCommonTabListWidgetBase&&) = delete; \
	UCommonTabListWidgetBase(const UCommonTabListWidgetBase&) = delete; \
	COMMONUI_API virtual ~UCommonTabListWidgetBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonTabListWidgetBase;

// ********** End Class UCommonTabListWidgetBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
