// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSlider.h"

#ifdef AUDIOWIDGETS_AudioSlider_generated_h
#error "AudioSlider.generated.h already included, missing '#pragma once' in AudioSlider.h"
#endif
#define AUDIOWIDGETS_AudioSlider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateColor;

// ********** Begin Class UAudioSliderBase *********************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetWidgetBackgroundColor); \
	DECLARE_FUNCTION(execSetSliderThumbColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderBackgroundColor); \
	DECLARE_FUNCTION(execSetShowUnitsText); \
	DECLARE_FUNCTION(execSetShowLabelOnlyOnHover); \
	DECLARE_FUNCTION(execSetValueTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsText); \
	DECLARE_FUNCTION(execSetTextLabelBackgroundColor); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execGetLinValue); \
	DECLARE_FUNCTION(execGetOutputValue);


struct Z_Construct_UClass_UAudioSliderBase_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioSliderBase_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSliderBase(); \
	friend struct ::Z_Construct_UClass_UAudioSliderBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioSliderBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioSliderBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioSliderBase_NoRegister) \
	DECLARE_SERIALIZER(UAudioSliderBase)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioSliderBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSliderBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioSliderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSliderBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSliderBase(UAudioSliderBase&&) = delete; \
	UAudioSliderBase(const UAudioSliderBase&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioSliderBase();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSliderBase;

// ********** End Class UAudioSliderBase ***********************************************************

// ********** Begin Class UAudioSlider *************************************************************
struct Z_Construct_UClass_UAudioSlider_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_192_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSlider(); \
	friend struct ::Z_Construct_UClass_UAudioSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioSlider, UAudioSliderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioSlider_NoRegister) \
	DECLARE_SERIALIZER(UAudioSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_192_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSlider(UAudioSlider&&) = delete; \
	UAudioSlider(const UAudioSlider&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_189_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_192_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_192_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_192_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSlider;

// ********** End Class UAudioSlider ***************************************************************

// ********** Begin Class UAudioVolumeSlider *******************************************************
struct Z_Construct_UClass_UAudioVolumeSlider_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVolumeSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_212_INCLASS \
private: \
	static void StaticRegisterNativesUAudioVolumeSlider(); \
	friend struct ::Z_Construct_UClass_UAudioVolumeSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioVolumeSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioVolumeSlider, UAudioSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioVolumeSlider_NoRegister) \
	DECLARE_SERIALIZER(UAudioVolumeSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_212_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioVolumeSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVolumeSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioVolumeSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVolumeSlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioVolumeSlider(UAudioVolumeSlider&&) = delete; \
	UAudioVolumeSlider(const UAudioVolumeSlider&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioVolumeSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_209_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_212_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_212_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_212_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioVolumeSlider;

// ********** End Class UAudioVolumeSlider *********************************************************

// ********** Begin Class UAudioFrequencySlider ****************************************************
struct Z_Construct_UClass_UAudioFrequencySlider_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioFrequencySlider_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_223_INCLASS \
private: \
	static void StaticRegisterNativesUAudioFrequencySlider(); \
	friend struct ::Z_Construct_UClass_UAudioFrequencySlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioFrequencySlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioFrequencySlider, UAudioSliderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioFrequencySlider_NoRegister) \
	DECLARE_SERIALIZER(UAudioFrequencySlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_223_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioFrequencySlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioFrequencySlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioFrequencySlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFrequencySlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioFrequencySlider(UAudioFrequencySlider&&) = delete; \
	UAudioFrequencySlider(const UAudioFrequencySlider&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioFrequencySlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_220_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_223_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_223_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_223_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioFrequencySlider;

// ********** End Class UAudioFrequencySlider ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
