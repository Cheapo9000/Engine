// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioComponentGroup.h"

#ifdef AUDIOGAMEPLAY_AudioComponentGroup_generated_h
#error "AudioComponentGroup.generated.h already included, missing '#pragma once' in AudioComponentGroup.h"
#endif
#define AUDIOGAMEPLAY_AudioComponentGroup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IAudioComponentGroupExtension;
class UAudioComponent;
class UAudioComponentGroup;
class UObject;
class USoundBase;

// ********** Begin Delegate FSoundGroupChanged ****************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_18_DELEGATE \
AUDIOGAMEPLAY_API void FSoundGroupChanged_DelegateWrapper(const FMulticastScriptDelegate& SoundGroupChanged);


// ********** End Delegate FSoundGroupChanged ******************************************************

// ********** Begin Delegate FSoundCallback ********************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_19_DELEGATE \
AUDIOGAMEPLAY_API void FSoundCallback_DelegateWrapper(const FScriptDelegate& SoundCallback, FName const& EventName);


// ********** End Delegate FSoundCallback **********************************************************

// ********** Begin Delegate FBoolParamCallback ****************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_20_DELEGATE \
AUDIOGAMEPLAY_API void FBoolParamCallback_DelegateWrapper(const FScriptDelegate& BoolParamCallback, bool ParamValue);


// ********** End Delegate FBoolParamCallback ******************************************************

// ********** Begin Delegate FStringParamCallback **************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_21_DELEGATE \
AUDIOGAMEPLAY_API void FStringParamCallback_DelegateWrapper(const FScriptDelegate& StringParamCallback, const FString& Value);


// ********** End Delegate FStringParamCallback ****************************************************

// ********** Begin Class UAudioComponentGroup *****************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnsubscribeObject); \
	DECLARE_FUNCTION(execSubscribeToBool); \
	DECLARE_FUNCTION(execSubscribeToEvent); \
	DECLARE_FUNCTION(execSubscribeToStringParam); \
	DECLARE_FUNCTION(execGetStringParamValue); \
	DECLARE_FUNCTION(execGetBoolParamValue); \
	DECLARE_FUNCTION(execGetFloatParamValue); \
	DECLARE_FUNCTION(execRemoveExtension); \
	DECLARE_FUNCTION(execAddExtension); \
	DECLARE_FUNCTION(execSetLowPassFilter); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execDisableVirtualization); \
	DECLARE_FUNCTION(execEnableVirtualization); \
	DECLARE_FUNCTION(execRemoveExternalComponent); \
	DECLARE_FUNCTION(execAddExternalComponent); \
	DECLARE_FUNCTION(execBroadcastEvent); \
	DECLARE_FUNCTION(execBroadcastKill); \
	DECLARE_FUNCTION(execBroadcastStopAll); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlayingAny); \
	DECLARE_FUNCTION(execStopSound); \
	DECLARE_FUNCTION(execStaticGetOrCreateComponentGroup);


struct Z_Construct_UClass_UAudioComponentGroup_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioComponentGroup_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioComponentGroup(); \
	friend struct ::Z_Construct_UClass_UAudioComponentGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioComponentGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioComponentGroup, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioComponentGroup_NoRegister) \
	DECLARE_SERIALIZER(UAudioComponentGroup) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponentGroup*>(this); }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioComponentGroup(UAudioComponentGroup&&) = delete; \
	UAudioComponentGroup(const UAudioComponentGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioComponentGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponentGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponentGroup)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_26_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioComponentGroup;

// ********** End Class UAudioComponentGroup *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
