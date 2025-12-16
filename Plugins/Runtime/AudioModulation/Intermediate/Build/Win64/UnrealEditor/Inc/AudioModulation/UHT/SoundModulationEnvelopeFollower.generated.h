// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/SoundModulationEnvelopeFollower.h"

#ifdef AUDIOMODULATION_SoundModulationEnvelopeFollower_generated_h
#error "SoundModulationEnvelopeFollower.generated.h already included, missing '#pragma once' in SoundModulationEnvelopeFollower.h"
#endif
#define AUDIOMODULATION_SoundModulationEnvelopeFollower_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEnvelopeFollowerGeneratorParams **********************************
struct Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct();


struct FEnvelopeFollowerGeneratorParams;
// ********** End ScriptStruct FEnvelopeFollowerGeneratorParams ************************************

// ********** Begin Class USoundModulationGeneratorEnvelopeFollower ********************************
struct Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationGeneratorEnvelopeFollower(); \
	friend struct ::Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationGeneratorEnvelopeFollower, USoundModulationGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationGeneratorEnvelopeFollower)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationGeneratorEnvelopeFollower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationGeneratorEnvelopeFollower(USoundModulationGeneratorEnvelopeFollower&&) = delete; \
	USoundModulationGeneratorEnvelopeFollower(const USoundModulationGeneratorEnvelopeFollower&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationGeneratorEnvelopeFollower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationGeneratorEnvelopeFollower); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationGeneratorEnvelopeFollower) \
	AUDIOMODULATION_API virtual ~USoundModulationGeneratorEnvelopeFollower();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_55_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationGeneratorEnvelopeFollower;

// ********** End Class USoundModulationGeneratorEnvelopeFollower **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
