// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioRadialSlider.h"

#ifdef AUDIOWIDGETS_AudioRadialSlider_generated_h
#error "AudioRadialSlider.generated.h already included, missing '#pragma once' in AudioRadialSlider.h"
#endif
#define AUDIOWIDGETS_AudioRadialSlider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateColor;

// ********** Begin Delegate FOnAudioRadialSliderValueChangedEvent *********************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_14_DELEGATE \
AUDIOWIDGETS_API void FOnAudioRadialSliderValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioRadialSliderValueChangedEvent, float Value);


// ********** End Delegate FOnAudioRadialSliderValueChangedEvent ***********************************

// ********** Begin Class UAudioRadialSlider *******************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetOutputRange); \
	DECLARE_FUNCTION(execSetSliderThickness); \
	DECLARE_FUNCTION(execSetShowUnitsText); \
	DECLARE_FUNCTION(execSetShowLabelOnlyOnHover); \
	DECLARE_FUNCTION(execSetValueTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsText); \
	DECLARE_FUNCTION(execSetTextLabelBackgroundColor); \
	DECLARE_FUNCTION(execSetHandStartEndRatio); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderProgressColor); \
	DECLARE_FUNCTION(execSetCenterBackgroundColor); \
	DECLARE_FUNCTION(execSetWidgetLayout); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execGetOutputValue);


struct Z_Construct_UClass_UAudioRadialSlider_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioRadialSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAudioRadialSlider(); \
	friend struct ::Z_Construct_UClass_UAudioRadialSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioRadialSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioRadialSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioRadialSlider_NoRegister) \
	DECLARE_SERIALIZER(UAudioRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioRadialSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioRadialSlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioRadialSlider(UAudioRadialSlider&&) = delete; \
	UAudioRadialSlider(const UAudioRadialSlider&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioRadialSlider;

// ********** End Class UAudioRadialSlider *********************************************************

// ********** Begin Class UAudioVolumeRadialSlider *************************************************
struct Z_Construct_UClass_UAudioVolumeRadialSlider_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVolumeRadialSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_183_INCLASS \
private: \
	static void StaticRegisterNativesUAudioVolumeRadialSlider(); \
	friend struct ::Z_Construct_UClass_UAudioVolumeRadialSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioVolumeRadialSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioVolumeRadialSlider, UAudioRadialSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioVolumeRadialSlider_NoRegister) \
	DECLARE_SERIALIZER(UAudioVolumeRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_183_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioVolumeRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVolumeRadialSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioVolumeRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVolumeRadialSlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioVolumeRadialSlider(UAudioVolumeRadialSlider&&) = delete; \
	UAudioVolumeRadialSlider(const UAudioVolumeRadialSlider&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioVolumeRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_180_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_183_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_183_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_183_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioVolumeRadialSlider;

// ********** End Class UAudioVolumeRadialSlider ***************************************************

// ********** Begin Class UAudioFrequencyRadialSlider **********************************************
struct Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioFrequencyRadialSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_195_INCLASS \
private: \
	static void StaticRegisterNativesUAudioFrequencyRadialSlider(); \
	friend struct ::Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioFrequencyRadialSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioFrequencyRadialSlider, UAudioRadialSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioFrequencyRadialSlider_NoRegister) \
	DECLARE_SERIALIZER(UAudioFrequencyRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioFrequencyRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioFrequencyRadialSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioFrequencyRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFrequencyRadialSlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioFrequencyRadialSlider(UAudioFrequencyRadialSlider&&) = delete; \
	UAudioFrequencyRadialSlider(const UAudioFrequencyRadialSlider&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioFrequencyRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_192_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_195_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioFrequencyRadialSlider;

// ********** End Class UAudioFrequencyRadialSlider ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
