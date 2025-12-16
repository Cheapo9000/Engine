// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActivatableWidgetSwitcher.h"

#ifdef COMMONUI_CommonActivatableWidgetSwitcher_generated_h
#error "CommonActivatableWidgetSwitcher.generated.h already included, missing '#pragma once' in CommonActivatableWidgetSwitcher.h"
#endif
#define COMMONUI_CommonActivatableWidgetSwitcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonActivatableWidgetSwitcher *****************************************
struct Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetSwitcher_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActivatableWidgetSwitcher(); \
	friend struct ::Z_Construct_UClass_UCommonActivatableWidgetSwitcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonActivatableWidgetSwitcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonActivatableWidgetSwitcher, UCommonAnimatedSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonActivatableWidgetSwitcher_NoRegister) \
	DECLARE_SERIALIZER(UCommonActivatableWidgetSwitcher)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonActivatableWidgetSwitcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonActivatableWidgetSwitcher(UCommonActivatableWidgetSwitcher&&) = delete; \
	UCommonActivatableWidgetSwitcher(const UCommonActivatableWidgetSwitcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonActivatableWidgetSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatableWidgetSwitcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatableWidgetSwitcher) \
	COMMONUI_API virtual ~UCommonActivatableWidgetSwitcher();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonActivatableWidgetSwitcher;

// ********** End Class UCommonActivatableWidgetSwitcher *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActivatableWidgetSwitcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
