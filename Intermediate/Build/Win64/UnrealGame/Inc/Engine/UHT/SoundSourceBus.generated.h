// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSourceBus.h"

#ifdef ENGINE_SoundSourceBus_generated_h
#error "SoundSourceBus.generated.h already included, missing '#pragma once' in SoundSourceBus.h"
#endif
#define ENGINE_SoundSourceBus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundSourceBus **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSourceBus, ENGINE_API)


struct Z_Construct_UClass_USoundSourceBus_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceBus(); \
	friend struct ::Z_Construct_UClass_USoundSourceBus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundSourceBus_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSourceBus, USoundWave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundSourceBus_NoRegister) \
	DECLARE_SERIALIZER(USoundSourceBus) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSourceBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSourceBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBus); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSourceBus(USoundSourceBus&&) = delete; \
	USoundSourceBus(const USoundSourceBus&) = delete; \
	ENGINE_API virtual ~USoundSourceBus();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSourceBus;

// ********** End Class USoundSourceBus ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h

// ********** Begin Enum ESourceBusChannels ********************************************************
#define FOREACH_ENUM_ESOURCEBUSCHANNELS(op) \
	op(ESourceBusChannels::Mono) \
	op(ESourceBusChannels::Stereo) 

enum class ESourceBusChannels : uint8;
template<> struct TIsUEnumClass<ESourceBusChannels> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceBusChannels>();
// ********** End Enum ESourceBusChannels **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
