// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayVolume.h"

#ifdef AUDIOGAMEPLAYVOLUME_AudioGameplayVolume_generated_h
#error "AudioGameplayVolume.generated.h already included, missing '#pragma once' in AudioGameplayVolume.h"
#endif
#define AUDIOGAMEPLAYVOLUME_AudioGameplayVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FAudioGameplayVolumeEvent *********************************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_14_DELEGATE \
AUDIOGAMEPLAYVOLUME_API void FAudioGameplayVolumeEvent_DelegateWrapper(const FMulticastScriptDelegate& AudioGameplayVolumeEvent);


// ********** End Delegate FAudioGameplayVolumeEvent ***********************************************

// ********** Begin Class AAudioGameplayVolume *****************************************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_RPC_WRAPPERS \
	AUDIOGAMEPLAYVOLUME_API virtual void OnListenerExit_Implementation(); \
	AUDIOGAMEPLAYVOLUME_API virtual void OnListenerEnter_Implementation(); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AAudioGameplayVolume_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_AAudioGameplayVolume_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAAudioGameplayVolume(); \
	friend struct ::Z_Construct_UClass_AAudioGameplayVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_AAudioGameplayVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AAudioGameplayVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_AAudioGameplayVolume_NoRegister) \
	DECLARE_SERIALIZER(AAudioGameplayVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(AUDIOGAMEPLAYVOLUME_API)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API AAudioGameplayVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioGameplayVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, AAudioGameplayVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioGameplayVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAudioGameplayVolume(AAudioGameplayVolume&&) = delete; \
	AAudioGameplayVolume(const AAudioGameplayVolume&) = delete; \
	AUDIOGAMEPLAYVOLUME_API virtual ~AAudioGameplayVolume();


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_27_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAudioGameplayVolume;

// ********** End Class AAudioGameplayVolume *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
