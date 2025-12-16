// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Synth2DSlider.h"

#ifdef SYNTHESIS_Synth2DSlider_generated_h
#error "Synth2DSlider.generated.h already included, missing '#pragma once' in Synth2DSlider.h"
#endif
#define SYNTHESIS_Synth2DSlider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Delegate FOnMouseCaptureBeginEventSynth2D **************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_13_DELEGATE \
SYNTHESIS_API void FOnMouseCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEventSynth2D);


// ********** End Delegate FOnMouseCaptureBeginEventSynth2D ****************************************

// ********** Begin Delegate FOnMouseCaptureEndEventSynth2D ****************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_14_DELEGATE \
SYNTHESIS_API void FOnMouseCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEventSynth2D);


// ********** End Delegate FOnMouseCaptureEndEventSynth2D ******************************************

// ********** Begin Delegate FOnControllerCaptureBeginEventSynth2D *********************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_15_DELEGATE \
SYNTHESIS_API void FOnControllerCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEventSynth2D);


// ********** End Delegate FOnControllerCaptureBeginEventSynth2D ***********************************

// ********** Begin Delegate FOnControllerCaptureEndEventSynth2D ***********************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_16_DELEGATE \
SYNTHESIS_API void FOnControllerCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEventSynth2D);


// ********** End Delegate FOnControllerCaptureEndEventSynth2D *************************************

// ********** Begin Delegate FOnFloatValueChangedEventSynth2D **************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_17_DELEGATE \
SYNTHESIS_API void FOnFloatValueChangedEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEventSynth2D, float Value);


// ********** End Delegate FOnFloatValueChangedEventSynth2D ****************************************

// ********** Begin Class USynth2DSlider ***********************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_USynth2DSlider_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USynth2DSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSynth2DSlider(); \
	friend struct ::Z_Construct_UClass_USynth2DSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USynth2DSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(USynth2DSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USynth2DSlider_NoRegister) \
	DECLARE_SERIALIZER(USynth2DSlider)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USynth2DSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynth2DSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USynth2DSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynth2DSlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynth2DSlider(USynth2DSlider&&) = delete; \
	USynth2DSlider(const USynth2DSlider&) = delete; \
	SYNTHESIS_API virtual ~USynth2DSlider();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynth2DSlider;

// ********** End Class USynth2DSlider *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
