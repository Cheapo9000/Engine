// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialKnob.h"

#ifdef AUDIOWIDGETS_AudioMaterialKnob_generated_h
#error "AudioMaterialKnob.generated.h already included, missing '#pragma once' in AudioMaterialKnob.h"
#endif
#define AUDIOWIDGETS_AudioMaterialKnob_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnKnobValueChangedEvent **********************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_14_DELEGATE \
AUDIOWIDGETS_API void FOnKnobValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnKnobValueChangedEvent, float Value);


// ********** End Delegate FOnKnobValueChangedEvent ************************************************

// ********** Begin Class UAudioMaterialKnob *******************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
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


struct Z_Construct_UClass_UAudioMaterialKnob_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialKnob_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMaterialKnob(); \
	friend struct ::Z_Construct_UClass_UAudioMaterialKnob_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioMaterialKnob_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMaterialKnob, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioMaterialKnob_NoRegister) \
	DECLARE_SERIALIZER(UAudioMaterialKnob)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMaterialKnob(UAudioMaterialKnob&&) = delete; \
	UAudioMaterialKnob(const UAudioMaterialKnob&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioMaterialKnob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMaterialKnob); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMaterialKnob) \
	AUDIOWIDGETS_API virtual ~UAudioMaterialKnob();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMaterialKnob;

// ********** End Class UAudioMaterialKnob *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
