// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialSlider.h"

#ifdef AUDIOWIDGETS_AudioMaterialSlider_generated_h
#error "AudioMaterialSlider.generated.h already included, missing '#pragma once' in AudioMaterialSlider.h"
#endif
#define AUDIOWIDGETS_AudioMaterialSlider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnSliderFloatValueChangedEvent ***************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_14_DELEGATE \
AUDIOWIDGETS_API void FOnSliderFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSliderFloatValueChangedEvent, float Value);


// ********** End Delegate FOnSliderFloatValueChangedEvent *****************************************

// ********** Begin Class UAudioMaterialSlider *****************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStepSize); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execGetMouseUsesStep); \
	DECLARE_FUNCTION(execSetMouseUsesStep); \
	DECLARE_FUNCTION(execGetIsLocked); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execGetFineTuneSpeed); \
	DECLARE_FUNCTION(execSetFineTuneSpeed); \
	DECLARE_FUNCTION(execGetTuneSpeed); \
	DECLARE_FUNCTION(execSetTuneSpeed); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_UAudioMaterialSlider_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMaterialSlider(); \
	friend struct ::Z_Construct_UClass_UAudioMaterialSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioMaterialSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMaterialSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioMaterialSlider_NoRegister) \
	DECLARE_SERIALIZER(UAudioMaterialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMaterialSlider(UAudioMaterialSlider&&) = delete; \
	UAudioMaterialSlider(const UAudioMaterialSlider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioMaterialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMaterialSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMaterialSlider) \
	AUDIOWIDGETS_API virtual ~UAudioMaterialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMaterialSlider;

// ********** End Class UAudioMaterialSlider *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
