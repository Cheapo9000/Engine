// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AudioBus.h"

#ifdef ENGINE_AudioBus_generated_h
#error "AudioBus.generated.h already included, missing '#pragma once' in AudioBus.h"
#endif
#define ENGINE_AudioBus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioBus ****************************************************************
struct Z_Construct_UClass_UAudioBus_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUAudioBus(); \
	friend struct ::Z_Construct_UClass_UAudioBus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAudioBus_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioBus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAudioBus_NoRegister) \
	DECLARE_SERIALIZER(UAudioBus)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBus); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioBus(UAudioBus&&) = delete; \
	UAudioBus(const UAudioBus&) = delete; \
	ENGINE_API virtual ~UAudioBus();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioBus;

// ********** End Class UAudioBus ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h

// ********** Begin Enum EAudioBusChannels *********************************************************
#define FOREACH_ENUM_EAUDIOBUSCHANNELS(op) \
	op(EAudioBusChannels::Mono) \
	op(EAudioBusChannels::Stereo) \
	op(EAudioBusChannels::Quad) \
	op(EAudioBusChannels::FivePointOne) \
	op(EAudioBusChannels::SevenPointOne) \
	op(EAudioBusChannels::MaxChannelCount) 

enum class EAudioBusChannels : uint8;
template<> struct TIsUEnumClass<EAudioBusChannels> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioBusChannels>();
// ********** End Enum EAudioBusChannels ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
