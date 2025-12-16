// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonAnimatedSwitcher.h"

#ifdef COMMONUI_CommonAnimatedSwitcher_generated_h
#error "CommonAnimatedSwitcher.generated.h already included, missing '#pragma once' in CommonAnimatedSwitcher.h"
#endif
#define COMMONUI_CommonAnimatedSwitcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Delegate FOnActiveIndexChangedDelegate *****************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_16_DELEGATE \
COMMONUI_API void FOnActiveIndexChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActiveIndexChangedDelegate, UWidget* ActiveWidget, int32 ActiveIndex);


// ********** End Delegate FOnActiveIndexChangedDelegate *******************************************

// ********** Begin Class UCommonAnimatedSwitcher **************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTransitionPlaying); \
	DECLARE_FUNCTION(execIsCurrentlySwitching); \
	DECLARE_FUNCTION(execSetDisableTransitionAnimation); \
	DECLARE_FUNCTION(execHasWidgets); \
	DECLARE_FUNCTION(execActivatePreviousWidget); \
	DECLARE_FUNCTION(execActivateNextWidget);


struct Z_Construct_UClass_UCommonAnimatedSwitcher_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonAnimatedSwitcher(); \
	friend struct ::Z_Construct_UClass_UCommonAnimatedSwitcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonAnimatedSwitcher, UWidgetSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister) \
	DECLARE_SERIALIZER(UCommonAnimatedSwitcher)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonAnimatedSwitcher(UCommonAnimatedSwitcher&&) = delete; \
	UCommonAnimatedSwitcher(const UCommonAnimatedSwitcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonAnimatedSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonAnimatedSwitcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonAnimatedSwitcher) \
	COMMONUI_API virtual ~UCommonAnimatedSwitcher();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonAnimatedSwitcher;

// ********** End Class UCommonAnimatedSwitcher ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
