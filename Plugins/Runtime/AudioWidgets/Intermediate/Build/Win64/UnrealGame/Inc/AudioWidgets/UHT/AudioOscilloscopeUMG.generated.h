// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioOscilloscopeUMG.h"

#ifdef AUDIOWIDGETS_AudioOscilloscopeUMG_generated_h
#error "AudioOscilloscopeUMG.generated.h already included, missing '#pragma once' in AudioOscilloscopeUMG.h"
#endif
#define AUDIOWIDGETS_AudioOscilloscopeUMG_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FGetOscilloscopeAudioSamples ******************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_34_DELEGATE \
static AUDIOWIDGETS_API TArray<float> FGetOscilloscopeAudioSamples_DelegateWrapper(const FScriptDelegate& GetOscilloscopeAudioSamples);


// ********** End Delegate FGetOscilloscopeAudioSamples ********************************************

// ********** Begin Class UAudioOscilloscope *******************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCanTriggeringBeSet); \
	DECLARE_FUNCTION(execStopProcessing); \
	DECLARE_FUNCTION(execStartProcessing);


struct Z_Construct_UClass_UAudioOscilloscope_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioOscilloscope_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAudioOscilloscope(); \
	friend struct ::Z_Construct_UClass_UAudioOscilloscope_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioOscilloscope_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioOscilloscope, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioOscilloscope_NoRegister) \
	DECLARE_SERIALIZER(UAudioOscilloscope)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioOscilloscope(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioOscilloscope) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioOscilloscope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioOscilloscope); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioOscilloscope(UAudioOscilloscope&&) = delete; \
	UAudioOscilloscope(const UAudioOscilloscope&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioOscilloscope();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioOscilloscope;

// ********** End Class UAudioOscilloscope *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
