// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonButtonBase.h"

#ifdef COMMONUI_CommonButtonBase_generated_h
#error "CommonButtonBase.generated.h already included, missing '#pragma once' in CommonButtonBase.h"
#endif
#define COMMONUI_CommonButtonBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCommonButtonBase;
class UCommonButtonStyle;
class UCommonTextStyle;
class UDragDropOperation;
class UInputAction;
class UMaterialInstanceDynamic;
class USoundBase;
enum class ECommonInputType : uint8;
struct FDataTableRowHandle;
struct FGeometry;
struct FMargin;
struct FSlateBrush;

// ********** Begin ScriptStruct FCommonButtonStyleOptionalSlateSound ******************************
struct Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FCommonButtonStyleOptionalSlateSound;
// ********** End ScriptStruct FCommonButtonStyleOptionalSlateSound ********************************

// ********** Begin Class UCommonButtonStyle *******************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisabledTextStyle); \
	DECLARE_FUNCTION(execGetSelectedHoveredTextStyle); \
	DECLARE_FUNCTION(execGetSelectedTextStyle); \
	DECLARE_FUNCTION(execGetNormalHoveredTextStyle); \
	DECLARE_FUNCTION(execGetNormalTextStyle); \
	DECLARE_FUNCTION(execGetCustomPadding); \
	DECLARE_FUNCTION(execGetButtonPadding); \
	DECLARE_FUNCTION(execGetDisabledBrush); \
	DECLARE_FUNCTION(execGetSelectedPressedBrush); \
	DECLARE_FUNCTION(execGetSelectedHoveredBrush); \
	DECLARE_FUNCTION(execGetSelectedBaseBrush); \
	DECLARE_FUNCTION(execGetNormalPressedBrush); \
	DECLARE_FUNCTION(execGetNormalHoveredBrush); \
	DECLARE_FUNCTION(execGetNormalBaseBrush); \
	DECLARE_FUNCTION(execGetMaterialBrush);


struct Z_Construct_UClass_UCommonButtonStyle_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonStyle(); \
	friend struct ::Z_Construct_UClass_UCommonButtonStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonButtonStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonButtonStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonButtonStyle_NoRegister) \
	DECLARE_SERIALIZER(UCommonButtonStyle)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonButtonStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonButtonStyle(UCommonButtonStyle&&) = delete; \
	UCommonButtonStyle(const UCommonButtonStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonButtonStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonStyle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonStyle) \
	COMMONUI_API virtual ~UCommonButtonStyle();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonButtonStyle;

// ********** End Class UCommonButtonStyle *********************************************************

// ********** Begin Class UCommonButtonInternalBase ************************************************
struct Z_Construct_UClass_UCommonButtonInternalBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonInternalBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_245_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonInternalBase(); \
	friend struct ::Z_Construct_UClass_UCommonButtonInternalBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonButtonInternalBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonButtonInternalBase, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonButtonInternalBase_NoRegister) \
	DECLARE_SERIALIZER(UCommonButtonInternalBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_245_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonButtonInternalBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonInternalBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonButtonInternalBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonInternalBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonButtonInternalBase(UCommonButtonInternalBase&&) = delete; \
	UCommonButtonInternalBase(const UCommonButtonInternalBase&) = delete; \
	COMMONUI_API virtual ~UCommonButtonInternalBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_242_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_245_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_245_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_245_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonButtonInternalBase;

// ********** End Class UCommonButtonInternalBase **************************************************

// ********** Begin Delegate FCommonSelectedStateChangedBase ***************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_317_DELEGATE \
COMMONUI_API void FCommonSelectedStateChangedBase_DelegateWrapper(const FMulticastScriptDelegate& CommonSelectedStateChangedBase, UCommonButtonBase* Button, bool Selected);


// ********** End Delegate FCommonSelectedStateChangedBase *****************************************

// ********** Begin Delegate FCommonButtonBaseClicked **********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_318_DELEGATE \
COMMONUI_API void FCommonButtonBaseClicked_DelegateWrapper(const FMulticastScriptDelegate& CommonButtonBaseClicked, UCommonButtonBase* Button);


// ********** End Delegate FCommonButtonBaseClicked ************************************************

// ********** Begin Delegate FOnButtonBaseOperationDynamic *****************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_319_DELEGATE \
COMMONUI_API void FOnButtonBaseOperationDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnButtonBaseOperationDynamic, UCommonButtonBase* Button, UDragDropOperation* Operation);


// ********** End Delegate FOnButtonBaseOperationDynamic *******************************************

// ********** Begin Delegate FOnButtonBaseGeoOperationDynamic **************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_320_DELEGATE \
COMMONUI_API void FOnButtonBaseGeoOperationDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnButtonBaseGeoOperationDynamic, UCommonButtonBase* Button, FGeometry const& MyGeometry, UDragDropOperation* Operation);


// ********** End Delegate FOnButtonBaseGeoOperationDynamic ****************************************

// ********** Begin Class UCommonButtonBase ********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsHoverSimulationOnTouchAvailable); \
	DECLARE_FUNCTION(execHoldReset); \
	DECLARE_FUNCTION(execNativeOnActionComplete); \
	DECLARE_FUNCTION(execNativeOnHoldProgressRollback); \
	DECLARE_FUNCTION(execNativeOnHoldProgress); \
	DECLARE_FUNCTION(execNativeOnActionProgress); \
	DECLARE_FUNCTION(execGetConvertInputActionToHold); \
	DECLARE_FUNCTION(execSetSelectedInternal); \
	DECLARE_FUNCTION(execStopDoubleClickPropagation); \
	DECLARE_FUNCTION(execHandleButtonReleased); \
	DECLARE_FUNCTION(execHandleButtonPressed); \
	DECLARE_FUNCTION(execHandleFocusLost); \
	DECLARE_FUNCTION(execHandleFocusReceived); \
	DECLARE_FUNCTION(execHandleButtonClicked); \
	DECLARE_FUNCTION(execHandleTriggeringActionCommited); \
	DECLARE_FUNCTION(execUpdateHoldData); \
	DECLARE_FUNCTION(execOnInputMethodChanged); \
	DECLARE_FUNCTION(execSetLockedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetLockedClickedSoundOverride); \
	DECLARE_FUNCTION(execSetLockedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedClickedSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetClickedSoundOverride); \
	DECLARE_FUNCTION(execSetPressedSoundOverride); \
	DECLARE_FUNCTION(execSetInputActionProgressMaterial); \
	DECLARE_FUNCTION(execGetSingleMaterialStyleMID); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execSetIsFocusable); \
	DECLARE_FUNCTION(execSetAllowDragDrop); \
	DECLARE_FUNCTION(execGetRequiredHoldTime); \
	DECLARE_FUNCTION(execSetRequiresHold); \
	DECLARE_FUNCTION(execGetRequiresHold); \
	DECLARE_FUNCTION(execGetEnhancedInputAction); \
	DECLARE_FUNCTION(execGetInputAction); \
	DECLARE_FUNCTION(execSetTriggeringEnhancedInputAction); \
	DECLARE_FUNCTION(execSetTriggeringInputAction); \
	DECLARE_FUNCTION(execSetTriggeredInputAction); \
	DECLARE_FUNCTION(execSetMaxDimensions); \
	DECLARE_FUNCTION(execSetMinDimensions); \
	DECLARE_FUNCTION(execGetCurrentTextStyleClass); \
	DECLARE_FUNCTION(execGetCurrentTextStyle); \
	DECLARE_FUNCTION(execGetCurrentCustomPadding); \
	DECLARE_FUNCTION(execGetCurrentButtonPadding); \
	DECLARE_FUNCTION(execGetStyle); \
	DECLARE_FUNCTION(execSetStyle); \
	DECLARE_FUNCTION(execGetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execSetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execGetLocked); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execSetIsSelected); \
	DECLARE_FUNCTION(execSetShouldUseFallbackDefaultInputAction); \
	DECLARE_FUNCTION(execSetIsToggleable); \
	DECLARE_FUNCTION(execSetIsInteractableWhenSelected); \
	DECLARE_FUNCTION(execSetIsSelectable); \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execIsInteractionEnabled); \
	DECLARE_FUNCTION(execSetHideInputAction); \
	DECLARE_FUNCTION(execSetIsInteractionEnabled); \
	DECLARE_FUNCTION(execDisableButtonWithReason);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_ACCESSORS \
static void SetPressedSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetClickedSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetHoveredSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetSelectedPressedSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetSelectedClickedSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetSelectedHoveredSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetLockedPressedSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetLockedClickedSlateSoundOverride_WrapperImpl(void* Object, const void* InValue); \
static void SetLockedHoveredSlateSoundOverride_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCommonButtonBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonBase(); \
	friend struct ::Z_Construct_UClass_UCommonButtonBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonButtonBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonButtonBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonButtonBase_NoRegister) \
	DECLARE_SERIALIZER(UCommonButtonBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonButtonBase(UCommonButtonBase&&) = delete; \
	UCommonButtonBase(const UCommonButtonBase&) = delete; \
	COMMONUI_API virtual ~UCommonButtonBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(COMMONUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(ClickEvent,COMMONUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(ClickEvent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_325_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_STANDARD_CONSTRUCTORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_328_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonButtonBase;

// ********** End Class UCommonButtonBase **********************************************************

// ********** Begin Class UWidgetLockedStateRegistration *******************************************
struct Z_Construct_UClass_UWidgetLockedStateRegistration_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UWidgetLockedStateRegistration_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_1152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetLockedStateRegistration(); \
	friend struct ::Z_Construct_UClass_UWidgetLockedStateRegistration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UWidgetLockedStateRegistration_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetLockedStateRegistration, UWidgetBinaryStateRegistration, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UWidgetLockedStateRegistration_NoRegister) \
	DECLARE_SERIALIZER(UWidgetLockedStateRegistration)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_1152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLockedStateRegistration(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetLockedStateRegistration(UWidgetLockedStateRegistration&&) = delete; \
	UWidgetLockedStateRegistration(const UWidgetLockedStateRegistration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLockedStateRegistration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLockedStateRegistration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetLockedStateRegistration) \
	NO_API virtual ~UWidgetLockedStateRegistration();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_1149_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_1152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_1152_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_1152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetLockedStateRegistration;

// ********** End Class UWidgetLockedStateRegistration *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonButtonBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
