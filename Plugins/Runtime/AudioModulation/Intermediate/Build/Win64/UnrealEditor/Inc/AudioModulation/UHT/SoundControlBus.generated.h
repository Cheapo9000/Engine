// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundControlBus.h"

#ifdef AUDIOMODULATION_SoundControlBus_generated_h
#error "SoundControlBus.generated.h already included, missing '#pragma once' in SoundControlBus.h"
#endif
#define AUDIOMODULATION_SoundControlBus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundControlBus *********************************************************
struct Z_Construct_UClass_USoundControlBus_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSoundControlBus(); \
	friend struct ::Z_Construct_UClass_USoundControlBus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundControlBus_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundControlBus, USoundModulatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundControlBus_NoRegister) \
	DECLARE_SERIALIZER(USoundControlBus)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundControlBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundControlBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundControlBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundControlBus); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundControlBus(USoundControlBus&&) = delete; \
	USoundControlBus(const USoundControlBus&) = delete; \
	AUDIOMODULATION_API virtual ~USoundControlBus();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundControlBus;

// ********** End Class USoundControlBus ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
