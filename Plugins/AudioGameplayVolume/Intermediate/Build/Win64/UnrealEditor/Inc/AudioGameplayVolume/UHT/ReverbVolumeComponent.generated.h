// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReverbVolumeComponent.h"

#ifdef AUDIOGAMEPLAYVOLUME_ReverbVolumeComponent_generated_h
#error "ReverbVolumeComponent.generated.h already included, missing '#pragma once' in ReverbVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_ReverbVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FReverbSettings;

// ********** Begin Class UReverbVolumeComponent ***************************************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetReverbSettings);


struct Z_Construct_UClass_UReverbVolumeComponent_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UReverbVolumeComponent_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUReverbVolumeComponent(); \
	friend struct ::Z_Construct_UClass_UReverbVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_UReverbVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UReverbVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_UReverbVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(UReverbVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API UReverbVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, UReverbVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbVolumeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReverbVolumeComponent(UReverbVolumeComponent&&) = delete; \
	UReverbVolumeComponent(const UReverbVolumeComponent&) = delete;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_34_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_37_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReverbVolumeComponent;

// ********** End Class UReverbVolumeComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
