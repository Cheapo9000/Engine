// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayVolumeComponent.h"

#ifdef AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeComponent_generated_h
#error "AudioGameplayVolumeComponent.generated.h already included, missing '#pragma once' in AudioGameplayVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnAudioGameplayVolumeProxyStateChange ********************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_15_DELEGATE \
AUDIOGAMEPLAYVOLUME_API void FOnAudioGameplayVolumeProxyStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnAudioGameplayVolumeProxyStateChange);


// ********** End Delegate FOnAudioGameplayVolumeProxyStateChange **********************************

// ********** Begin Class UAudioGameplayVolumeComponent ********************************************
struct Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeComponent(); \
	friend struct ::Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioGameplayVolumeComponent, UAudioGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API UAudioGameplayVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, UAudioGameplayVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioGameplayVolumeComponent(UAudioGameplayVolumeComponent&&) = delete; \
	UAudioGameplayVolumeComponent(const UAudioGameplayVolumeComponent&) = delete;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_28_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_31_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioGameplayVolumeComponent;

// ********** End Class UAudioGameplayVolumeComponent **********************************************

// ********** Begin Class UAudioGameplayVolumeComponentBase ****************************************
struct Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponentBase_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeComponentBase(); \
	friend struct ::Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_UAudioGameplayVolumeComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioGameplayVolumeComponentBase, UAudioGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_UAudioGameplayVolumeComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeComponentBase) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioGameplayVolumeComponentBase*>(this); }


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API UAudioGameplayVolumeComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, UAudioGameplayVolumeComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeComponentBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioGameplayVolumeComponentBase(UAudioGameplayVolumeComponentBase&&) = delete; \
	UAudioGameplayVolumeComponentBase(const UAudioGameplayVolumeComponentBase&) = delete;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_91_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_95_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioGameplayVolumeComponentBase;

// ********** End Class UAudioGameplayVolumeComponentBase ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
