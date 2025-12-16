// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayComponent.h"

#ifdef AUDIOGAMEPLAY_AudioGameplayComponent_generated_h
#error "AudioGameplayComponent.generated.h already included, missing '#pragma once' in AudioGameplayComponent.h"
#endif
#define AUDIOGAMEPLAY_AudioGameplayComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioGameplayComponent **************************************************
struct Z_Construct_UClass_UAudioGameplayComponent_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayComponent_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAudioGameplayComponent(); \
	friend struct ::Z_Construct_UClass_UAudioGameplayComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioGameplayComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioGameplayComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioGameplayComponent_NoRegister) \
	DECLARE_SERIALIZER(UAudioGameplayComponent) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioGameplayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioGameplayComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioGameplayComponent(UAudioGameplayComponent&&) = delete; \
	UAudioGameplayComponent(const UAudioGameplayComponent&) = delete;


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_13_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_16_INCLASS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioGameplayComponent;

// ********** End Class UAudioGameplayComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
