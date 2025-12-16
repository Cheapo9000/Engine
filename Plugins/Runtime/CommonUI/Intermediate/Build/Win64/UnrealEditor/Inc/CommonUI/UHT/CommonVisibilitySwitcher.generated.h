// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonVisibilitySwitcher.h"

#ifdef COMMONUI_CommonVisibilitySwitcher_generated_h
#error "CommonVisibilitySwitcher.generated.h already included, missing '#pragma once' in CommonVisibilitySwitcher.h"
#endif
#define COMMONUI_CommonVisibilitySwitcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Class UCommonVisibilitySwitcher ************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCurrentlySwitching); \
	DECLARE_FUNCTION(execDeactivateVisibleSlot); \
	DECLARE_FUNCTION(execActivateVisibleSlot); \
	DECLARE_FUNCTION(execDecrementActiveWidgetIndex); \
	DECLARE_FUNCTION(execIncrementActiveWidgetIndex); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execGetActiveWidget); \
	DECLARE_FUNCTION(execGetActiveWidgetIndex); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex);


struct Z_Construct_UClass_UCommonVisibilitySwitcher_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonVisibilitySwitcher_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonVisibilitySwitcher(); \
	friend struct ::Z_Construct_UClass_UCommonVisibilitySwitcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonVisibilitySwitcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonVisibilitySwitcher, UOverlay, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonVisibilitySwitcher_NoRegister) \
	DECLARE_SERIALIZER(UCommonVisibilitySwitcher)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonVisibilitySwitcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonVisibilitySwitcher(UCommonVisibilitySwitcher&&) = delete; \
	UCommonVisibilitySwitcher(const UCommonVisibilitySwitcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonVisibilitySwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonVisibilitySwitcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonVisibilitySwitcher) \
	COMMONUI_API virtual ~UCommonVisibilitySwitcher();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonVisibilitySwitcher;

// ********** End Class UCommonVisibilitySwitcher **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
