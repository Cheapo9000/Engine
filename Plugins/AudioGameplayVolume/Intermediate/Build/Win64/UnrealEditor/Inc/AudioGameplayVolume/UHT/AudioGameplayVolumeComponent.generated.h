// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayVolumeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeComponent_generated_h
#error "AudioGameplayVolumeComponent.generated.h already included, missing '#pragma once' in AudioGameplayVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeComponent_generated_h

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_13_DELEGATE \
AUDIOGAMEPLAYVOLUME_API void FOnAudioGameplayVolumeProxyStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnAudioGameplayVolumeProxyStateChange);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeComponent(); \
	friend struct Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioGameplayVolumeComponent, UAudioGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioGameplayVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioGameplayVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioGameplayVolumeComponent(UAudioGameplayVolumeComponent&&); \
	UAudioGameplayVolumeComponent(const UAudioGameplayVolumeComponent&); \
public:


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_19_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_22_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<class UAudioGameplayVolumeComponent>();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeComponentBase(); \
	friend struct Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics; \
public: \
	DECLARE_CLASS(UAudioGameplayVolumeComponentBase, UAudioGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeComponentBase) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioGameplayVolumeComponentBase*>(this); }


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioGameplayVolumeComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioGameplayVolumeComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioGameplayVolumeComponentBase(UAudioGameplayVolumeComponentBase&&); \
	UAudioGameplayVolumeComponentBase(const UAudioGameplayVolumeComponentBase&); \
public:


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_78_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_82_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<class UAudioGameplayVolumeComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
