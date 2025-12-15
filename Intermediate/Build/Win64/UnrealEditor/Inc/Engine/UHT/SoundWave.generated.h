// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundWave.h"

#ifdef ENGINE_SoundWave_generated_h
#error "SoundWave.generated.h already included, missing '#pragma once' in SoundWave.h"
#endif
#define ENGINE_SoundWave_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESoundAssetCompressionType : uint8;
struct FSoundWaveCuePoint;

// ********** Begin ScriptStruct FStreamedAudioPlatformData ****************************************
struct Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStreamedAudioPlatformData;
// ********** End ScriptStruct FStreamedAudioPlatformData ******************************************

// ********** Begin ScriptStruct FSoundWaveSpectralData ********************************************
struct Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_224_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundWaveSpectralData;
// ********** End ScriptStruct FSoundWaveSpectralData **********************************************

// ********** Begin ScriptStruct FSoundWaveSpectralDataPerSound ************************************
struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundWaveSpectralDataPerSound;
// ********** End ScriptStruct FSoundWaveSpectralDataPerSound **************************************

// ********** Begin ScriptStruct FSoundWaveEnvelopeDataPerSound ************************************
struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_260_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundWaveEnvelopeDataPerSound;
// ********** End ScriptStruct FSoundWaveEnvelopeDataPerSound **************************************

// ********** Begin ScriptStruct FSoundWaveSpectralDataEntry ***************************************
struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_289_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundWaveSpectralDataEntry;
// ********** End ScriptStruct FSoundWaveSpectralDataEntry *****************************************

// ********** Begin ScriptStruct FSoundWaveSpectralTimeData ****************************************
struct Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_305_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundWaveSpectralTimeData;
// ********** End ScriptStruct FSoundWaveSpectralTimeData ******************************************

// ********** Begin ScriptStruct FSoundWaveEnvelopeTimeData ****************************************
struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_320_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundWaveEnvelopeTimeData;
// ********** End ScriptStruct FSoundWaveEnvelopeTimeData ******************************************

// ********** Begin Class USoundWave ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLoopRegions); \
	DECLARE_FUNCTION(execGetCuePoints); \
	DECLARE_FUNCTION(execSetSoundAssetCompressionType); \
	DECLARE_FUNCTION(execGetSoundAssetCompressionType);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWave, ENGINE_API)


struct Z_Construct_UClass_USoundWave_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_INCLASS \
private: \
	static void StaticRegisterNativesUSoundWave(); \
	friend struct ::Z_Construct_UClass_USoundWave_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundWave_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundWave, USoundBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundWave_NoRegister) \
	DECLARE_SERIALIZER(USoundWave) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USoundWave*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWave); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundWave(USoundWave&&) = delete; \
	USoundWave(const USoundWave&) = delete; \
	ENGINE_API virtual ~USoundWave();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_415_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_418_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundWave;

// ********** End Class USoundWave *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h

// ********** Begin Enum EDecompressionType ********************************************************
#define FOREACH_ENUM_EDECOMPRESSIONTYPE(op) \
	op(DTYPE_Setup) \
	op(DTYPE_Invalid) \
	op(DTYPE_RealTime) \
	op(DTYPE_Procedural) \
	op(DTYPE_Xenon) \
	op(DTYPE_Streaming) 

enum EDecompressionType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDecompressionType>();
// ********** End Enum EDecompressionType **********************************************************

// ********** Begin Enum ESoundWaveCuePointOrigin **************************************************
#define FOREACH_ENUM_ESOUNDWAVECUEPOINTORIGIN(op) \
	op(ESoundWaveCuePointOrigin::WaveFile) \
	op(ESoundWaveCuePointOrigin::MarkerTransformation) 

enum class ESoundWaveCuePointOrigin : uint8;
template<> struct TIsUEnumClass<ESoundWaveCuePointOrigin> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundWaveCuePointOrigin>();
// ********** End Enum ESoundWaveCuePointOrigin ****************************************************

// ********** Begin Enum ESoundWaveFFTSize *********************************************************
#define FOREACH_ENUM_ESOUNDWAVEFFTSIZE(op) \
	op(ESoundWaveFFTSize::VerySmall_64) \
	op(ESoundWaveFFTSize::Small_256) \
	op(ESoundWaveFFTSize::Medium_512) \
	op(ESoundWaveFFTSize::Large_1024) \
	op(ESoundWaveFFTSize::VeryLarge_2048) 

enum class ESoundWaveFFTSize : uint8;
template<> struct TIsUEnumClass<ESoundWaveFFTSize> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundWaveFFTSize>();
// ********** End Enum ESoundWaveFFTSize ***********************************************************

// ********** Begin Enum ESoundAssetCompressionType ************************************************
#define FOREACH_ENUM_ESOUNDASSETCOMPRESSIONTYPE(op) \
	op(ESoundAssetCompressionType::BinkAudio) \
	op(ESoundAssetCompressionType::ADPCM) \
	op(ESoundAssetCompressionType::PCM) \
	op(ESoundAssetCompressionType::Opus) \
	op(ESoundAssetCompressionType::PlatformSpecific) \
	op(ESoundAssetCompressionType::ProjectDefined) \
	op(ESoundAssetCompressionType::RADAudio) 

enum class ESoundAssetCompressionType : uint8;
template<> struct TIsUEnumClass<ESoundAssetCompressionType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundAssetCompressionType>();
// ********** End Enum ESoundAssetCompressionType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
