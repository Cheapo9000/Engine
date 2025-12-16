// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FilterVolumeComponent.h"

#ifdef AUDIOGAMEPLAYVOLUME_FilterVolumeComponent_generated_h
#error "FilterVolumeComponent.generated.h already included, missing '#pragma once' in FilterVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_FilterVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFilterVolumeComponent ***************************************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetInteriorLPF); \
	DECLARE_FUNCTION(execSetExteriorLPF);


struct Z_Construct_UClass_UFilterVolumeComponent_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UFilterVolumeComponent_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFilterVolumeComponent(); \
	friend struct ::Z_Construct_UClass_UFilterVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_UFilterVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFilterVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_UFilterVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(UFilterVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API UFilterVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilterVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, UFilterVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilterVolumeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFilterVolumeComponent(UFilterVolumeComponent&&) = delete; \
	UFilterVolumeComponent(const UFilterVolumeComponent&) = delete;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_36_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_39_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFilterVolumeComponent;

// ********** End Class UFilterVolumeComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
