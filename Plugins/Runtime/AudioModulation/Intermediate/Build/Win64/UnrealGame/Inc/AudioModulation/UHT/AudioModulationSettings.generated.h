// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioModulationSettings.h"

#ifdef AUDIOMODULATION_AudioModulationSettings_generated_h
#error "AudioModulationSettings.generated.h already included, missing '#pragma once' in AudioModulationSettings.h"
#endif
#define AUDIOMODULATION_AudioModulationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioModulationSettings *************************************************
struct Z_Construct_UClass_UAudioModulationSettings_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioModulationSettings(); \
	friend struct ::Z_Construct_UClass_UAudioModulationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_UAudioModulationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioModulationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_UAudioModulationSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioModulationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("AudioModulation");} \



#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API UAudioModulationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioModulationSettings(UAudioModulationSettings&&) = delete; \
	UAudioModulationSettings(const UAudioModulationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, UAudioModulationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioModulationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioModulationSettings) \
	AUDIOMODULATION_API virtual ~UAudioModulationSettings();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioModulationSettings;

// ********** End Class UAudioModulationSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
