// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAY_AudioGameplayComponent_generated_h
#error "AudioGameplayComponent.generated.h already included, missing '#pragma once' in AudioGameplayComponent.h"
#endif
#define AUDIOGAMEPLAY_AudioGameplayComponent_generated_h

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAudioGameplayComponent(); \
	friend struct Z_Construct_UClass_UAudioGameplayComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioGameplayComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAudioGameplayComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioGameplayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioGameplayComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioGameplayComponent(UAudioGameplayComponent&&); \
	UAudioGameplayComponent(const UAudioGameplayComponent&); \
public:


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_11_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_14_INCLASS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAY_API UClass* StaticClass<class UAudioGameplayComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
