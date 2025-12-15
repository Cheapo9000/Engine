// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SpinBox.h"

#ifdef UMG_SpinBox_generated_h
#error "SpinBox.generated.h already included, missing '#pragma once' in SpinBox.h"
#endif
#define UMG_SpinBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateColor;

// ********** Begin Delegate FOnSpinBoxValueChangedEvent *******************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_24_DELEGATE \
static UMG_API void FOnSpinBoxValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueChangedEvent, float InValue);


// ********** End Delegate FOnSpinBoxValueChangedEvent *********************************************

// ********** Begin Delegate FOnSpinBoxValueCommittedEvent *****************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_25_DELEGATE \
static UMG_API void FOnSpinBoxValueCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueCommittedEvent, float InValue, ETextCommit::Type CommitMethod);


// ********** End Delegate FOnSpinBoxValueCommittedEvent *******************************************

// ********** Begin Delegate FOnSpinBoxBeginSliderMovement *****************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_26_DELEGATE \
static UMG_API void FOnSpinBoxBeginSliderMovement_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxBeginSliderMovement);


// ********** End Delegate FOnSpinBoxBeginSliderMovement *******************************************

// ********** Begin Class USpinBox *****************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execClearMaxSliderValue); \
	DECLARE_FUNCTION(execSetMaxSliderValue); \
	DECLARE_FUNCTION(execGetMaxSliderValue); \
	DECLARE_FUNCTION(execClearMinSliderValue); \
	DECLARE_FUNCTION(execSetMinSliderValue); \
	DECLARE_FUNCTION(execGetMinSliderValue); \
	DECLARE_FUNCTION(execClearMaxValue); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execClearMinValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execGetMinValue); \
	DECLARE_FUNCTION(execSetDelta); \
	DECLARE_FUNCTION(execGetDelta); \
	DECLARE_FUNCTION(execSetAlwaysUsesDeltaSnap); \
	DECLARE_FUNCTION(execGetAlwaysUsesDeltaSnap); \
	DECLARE_FUNCTION(execSetMaxFractionalDigits); \
	DECLARE_FUNCTION(execGetMaxFractionalDigits); \
	DECLARE_FUNCTION(execSetMinFractionalDigits); \
	DECLARE_FUNCTION(execGetMinFractionalDigits); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue); \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetMinFractionalDigits_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinFractionalDigits_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxFractionalDigits_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxFractionalDigits_WrapperImpl(void* Object, const void* InValue); \
static void GetbAlwaysUsesDeltaSnap_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAlwaysUsesDeltaSnap_WrapperImpl(void* Object, const void* InValue); \
static void GetbEnableSlider_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnableSlider_WrapperImpl(void* Object, const void* InValue); \
static void GetDelta_WrapperImpl(const void* Object, void* OutValue); \
static void SetDelta_WrapperImpl(void* Object, const void* InValue); \
static void GetSliderExponent_WrapperImpl(const void* Object, void* OutValue); \
static void SetSliderExponent_WrapperImpl(void* Object, const void* InValue); \
static void GetFont_WrapperImpl(const void* Object, void* OutValue); \
static void SetFont_WrapperImpl(void* Object, const void* InValue); \
static void GetJustification_WrapperImpl(const void* Object, void* OutValue); \
static void SetJustification_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue); \
static void SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue); \
static void GetSelectAllTextOnCommit_WrapperImpl(const void* Object, void* OutValue); \
static void SetSelectAllTextOnCommit_WrapperImpl(void* Object, const void* InValue); \
static void GetForegroundColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetForegroundColor_WrapperImpl(void* Object, const void* InValue); \
static void GetMinValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinValue_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxValue_WrapperImpl(void* Object, const void* InValue); \
static void GetMinSliderValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinSliderValue_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxSliderValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxSliderValue_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_USpinBox_Statics;
UMG_API UClass* Z_Construct_UClass_USpinBox_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSpinBox(); \
	friend struct ::Z_Construct_UClass_USpinBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USpinBox_NoRegister(); \
public: \
	DECLARE_CLASS2(USpinBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USpinBox_NoRegister) \
	DECLARE_SERIALIZER(USpinBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USpinBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpinBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USpinBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpinBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpinBox(USpinBox&&) = delete; \
	USpinBox(const USpinBox&) = delete; \
	UMG_API virtual ~USpinBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Value,UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Value) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_21_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpinBox;

// ********** End Class USpinBox *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
