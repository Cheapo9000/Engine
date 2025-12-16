// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixSendVolumeComponent.h"

#ifdef AUDIOGAMEPLAYVOLUME_SubmixSendVolumeComponent_generated_h
#error "SubmixSendVolumeComponent.generated.h already included, missing '#pragma once' in SubmixSendVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_SubmixSendVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioVolumeSubmixSendSettings;

// ********** Begin Class USubmixSendVolumeComponent ***********************************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSubmixSendSettings);


struct Z_Construct_UClass_USubmixSendVolumeComponent_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_USubmixSendVolumeComponent_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixSendVolumeComponent(); \
	friend struct ::Z_Construct_UClass_USubmixSendVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_USubmixSendVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixSendVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_USubmixSendVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(USubmixSendVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API USubmixSendVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixSendVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, USubmixSendVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixSendVolumeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixSendVolumeComponent(USubmixSendVolumeComponent&&) = delete; \
	USubmixSendVolumeComponent(const USubmixSendVolumeComponent&) = delete;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_33_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_36_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixSendVolumeComponent;

// ********** End Class USubmixSendVolumeComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
