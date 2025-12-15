// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AudioSettings.h"

#ifdef ENGINE_AudioSettings_generated_h
#error "AudioSettings.generated.h already included, missing '#pragma once' in AudioSettings.h"
#endif
#define ENGINE_AudioSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAudioQualitySettings *********************************************
struct Z_Construct_UScriptStruct_FAudioQualitySettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioQualitySettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAudioQualitySettings;
// ********** End ScriptStruct FAudioQualitySettings ***********************************************

// ********** Begin ScriptStruct FSoundDebugEntry **************************************************
struct Z_Construct_UScriptStruct_FSoundDebugEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundDebugEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundDebugEntry;
// ********** End ScriptStruct FSoundDebugEntry ****************************************************

// ********** Begin ScriptStruct FDefaultAudioBusSettings ******************************************
struct Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDefaultAudioBusSettings;
// ********** End ScriptStruct FDefaultAudioBusSettings ********************************************

// ********** Begin Class UAudioSettings ***********************************************************
struct Z_Construct_UClass_UAudioSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAudioSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSettings(); \
	friend struct ::Z_Construct_UClass_UAudioSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAudioSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAudioSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSettings(UAudioSettings&&) = delete; \
	UAudioSettings(const UAudioSettings&) = delete; \
	ENGINE_API virtual ~UAudioSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_123_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_126_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSettings;

// ********** End Class UAudioSettings *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h

// ********** Begin Enum EVoiceSampleRate **********************************************************
#define FOREACH_ENUM_EVOICESAMPLERATE(op) \
	op(EVoiceSampleRate::Low16000Hz) \
	op(EVoiceSampleRate::Normal24000Hz) 

enum class EVoiceSampleRate : int32;
template<> struct TIsUEnumClass<EVoiceSampleRate> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVoiceSampleRate>();
// ********** End Enum EVoiceSampleRate ************************************************************

// ********** Begin Enum EPanningMethod ************************************************************
#define FOREACH_ENUM_EPANNINGMETHOD(op) \
	op(EPanningMethod::Linear) \
	op(EPanningMethod::EqualPower) 

enum class EPanningMethod : int8;
template<> struct TIsUEnumClass<EPanningMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPanningMethod>();
// ********** End Enum EPanningMethod **************************************************************

// ********** Begin Enum EMonoChannelUpmixMethod ***************************************************
#define FOREACH_ENUM_EMONOCHANNELUPMIXMETHOD(op) \
	op(EMonoChannelUpmixMethod::Linear) \
	op(EMonoChannelUpmixMethod::EqualPower) \
	op(EMonoChannelUpmixMethod::FullVolume) 

enum class EMonoChannelUpmixMethod : int8;
template<> struct TIsUEnumClass<EMonoChannelUpmixMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMonoChannelUpmixMethod>();
// ********** End Enum EMonoChannelUpmixMethod *****************************************************

// ********** Begin Enum EDefaultAudioCompressionType **********************************************
#define FOREACH_ENUM_EDEFAULTAUDIOCOMPRESSIONTYPE(op) \
	op(EDefaultAudioCompressionType::BinkAudio) \
	op(EDefaultAudioCompressionType::ADPCM) \
	op(EDefaultAudioCompressionType::PCM) \
	op(EDefaultAudioCompressionType::Opus) \
	op(EDefaultAudioCompressionType::PlatformSpecific) \
	op(EDefaultAudioCompressionType::RADAudio) 

enum class EDefaultAudioCompressionType : uint8;
template<> struct TIsUEnumClass<EDefaultAudioCompressionType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDefaultAudioCompressionType>();
// ********** End Enum EDefaultAudioCompressionType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
