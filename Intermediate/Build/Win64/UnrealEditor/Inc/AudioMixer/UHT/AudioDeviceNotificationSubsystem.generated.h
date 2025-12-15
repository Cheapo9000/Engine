// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioDeviceNotificationSubsystem.h"

#ifdef AUDIOMIXER_AudioDeviceNotificationSubsystem_generated_h
#error "AudioDeviceNotificationSubsystem.generated.h already included, missing '#pragma once' in AudioDeviceNotificationSubsystem.h"
#endif
#define AUDIOMIXER_AudioDeviceNotificationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioDeviceChangedRole : uint8;
enum class EAudioDeviceChangedState : uint8;

// ********** Begin Delegate FOnAudioDefaultDeviceChanged ******************************************
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_38_DELEGATE \
AUDIOMIXER_API void FOnAudioDefaultDeviceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDefaultDeviceChanged, EAudioDeviceChangedRole AudioDeviceRole, const FString& DeviceId);


// ********** End Delegate FOnAudioDefaultDeviceChanged ********************************************

// ********** Begin Delegate FOnAudioDeviceStateChanged ********************************************
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_39_DELEGATE \
AUDIOMIXER_API void FOnAudioDeviceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceStateChanged, const FString& DeviceId, EAudioDeviceChangedState NewState);


// ********** End Delegate FOnAudioDeviceStateChanged **********************************************

// ********** Begin Delegate FOnAudioDeviceChange **************************************************
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_40_DELEGATE \
AUDIOMIXER_API void FOnAudioDeviceChange_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceChange, const FString& DeviceId);


// ********** End Delegate FOnAudioDeviceChange ****************************************************

// ********** Begin Class UAudioDeviceNotificationSubsystem ****************************************
struct Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics;
AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioDeviceNotificationSubsystem(); \
	friend struct ::Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMIXER_API UClass* ::Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioDeviceNotificationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAudioDeviceNotificationSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMIXER_API UAudioDeviceNotificationSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioDeviceNotificationSubsystem(UAudioDeviceNotificationSubsystem&&) = delete; \
	UAudioDeviceNotificationSubsystem(const UAudioDeviceNotificationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, UAudioDeviceNotificationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioDeviceNotificationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioDeviceNotificationSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_49_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioDeviceNotificationSubsystem;

// ********** End Class UAudioDeviceNotificationSubsystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h

// ********** Begin Enum EAudioDeviceChangedRole ***************************************************
#define FOREACH_ENUM_EAUDIODEVICECHANGEDROLE(op) \
	op(EAudioDeviceChangedRole::Invalid) \
	op(EAudioDeviceChangedRole::Console) \
	op(EAudioDeviceChangedRole::Multimedia) \
	op(EAudioDeviceChangedRole::Communications) \
	op(EAudioDeviceChangedRole::Count) 

enum class EAudioDeviceChangedRole : uint8;
template<> struct TIsUEnumClass<EAudioDeviceChangedRole> { enum { Value = true }; };
template<> AUDIOMIXER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioDeviceChangedRole>();
// ********** End Enum EAudioDeviceChangedRole *****************************************************

// ********** Begin Enum EAudioDeviceChangedState **************************************************
#define FOREACH_ENUM_EAUDIODEVICECHANGEDSTATE(op) \
	op(EAudioDeviceChangedState::Invalid) \
	op(EAudioDeviceChangedState::Active) \
	op(EAudioDeviceChangedState::Disabled) \
	op(EAudioDeviceChangedState::NotPresent) \
	op(EAudioDeviceChangedState::Unplugged) \
	op(EAudioDeviceChangedState::Count) 

enum class EAudioDeviceChangedState : uint8;
template<> struct TIsUEnumClass<EAudioDeviceChangedState> { enum { Value = true }; };
template<> AUDIOMIXER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioDeviceChangedState>();
// ********** End Enum EAudioDeviceChangedState ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
