// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ComboBoxKey.h"

#ifdef UMG_ComboBoxKey_generated_h
#error "ComboBoxKey.generated.h already included, missing '#pragma once' in ComboBoxKey.h"
#endif
#define UMG_ComboBoxKey_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Delegate FOnSelectionChangedEvent **********************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_25_DELEGATE \
static UMG_API void FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, FName SelectedItem, ESelectInfo::Type SelectionType);


// ********** End Delegate FOnSelectionChangedEvent ************************************************

// ********** Begin Delegate FOnOpeningEvent *******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_26_DELEGATE \
static UMG_API void FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent);


// ********** End Delegate FOnOpeningEvent *********************************************************

// ********** Begin Delegate FGenerateWidgetEvent **************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_27_DELEGATE \
static UMG_API UWidget* FGenerateWidgetEvent_DelegateWrapper(const FScriptDelegate& GenerateWidgetEvent, FName Item);


// ********** End Delegate FGenerateWidgetEvent ****************************************************

// ********** Begin Class UComboBoxKey *************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execRemoveOption); \
	DECLARE_FUNCTION(execAddOption);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ACCESSORS \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetItemStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetItemStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetScrollBarStyle_WrapperImpl(const void* Object, void* OutValue); \
static void GetForegroundColor_WrapperImpl(const void* Object, void* OutValue); \
static void GetContentPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetContentPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxListHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxListHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetbHasDownArrow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHasDownArrow_WrapperImpl(void* Object, const void* InValue); \
static void GetbEnableGamepadNavigationMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnableGamepadNavigationMode_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue);


struct Z_Construct_UClass_UComboBoxKey_Statics;
UMG_API UClass* Z_Construct_UClass_UComboBoxKey_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBoxKey(); \
	friend struct ::Z_Construct_UClass_UComboBoxKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UComboBoxKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UComboBoxKey, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UComboBoxKey_NoRegister) \
	DECLARE_SERIALIZER(UComboBoxKey)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComboBoxKey(UComboBoxKey&&) = delete; \
	UComboBoxKey(const UComboBoxKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UComboBoxKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboBoxKey) \
	UMG_API virtual ~UComboBoxKey();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(SelectedOption,UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(SelectedOption) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComboBoxKey;

// ********** End Class UComboBoxKey ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
