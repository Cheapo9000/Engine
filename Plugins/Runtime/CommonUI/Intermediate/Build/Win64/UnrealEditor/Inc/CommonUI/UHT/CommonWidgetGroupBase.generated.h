// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Groups/CommonWidgetGroupBase.h"

#ifdef COMMONUI_CommonWidgetGroupBase_generated_h
#error "CommonWidgetGroupBase.generated.h already included, missing '#pragma once' in CommonWidgetGroupBase.h"
#endif
#define COMMONUI_CommonWidgetGroupBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Class UCommonWidgetGroupBase ***************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAll); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidgets); \
	DECLARE_FUNCTION(execAddWidget);


struct Z_Construct_UClass_UCommonWidgetGroupBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetGroupBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonWidgetGroupBase(); \
	friend struct ::Z_Construct_UClass_UCommonWidgetGroupBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonWidgetGroupBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonWidgetGroupBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonWidgetGroupBase_NoRegister) \
	DECLARE_SERIALIZER(UCommonWidgetGroupBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonWidgetGroupBase(UCommonWidgetGroupBase&&) = delete; \
	UCommonWidgetGroupBase(const UCommonWidgetGroupBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonWidgetGroupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetGroupBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonWidgetGroupBase) \
	COMMONUI_API virtual ~UCommonWidgetGroupBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonWidgetGroupBase;

// ********** End Class UCommonWidgetGroupBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Groups_CommonWidgetGroupBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
