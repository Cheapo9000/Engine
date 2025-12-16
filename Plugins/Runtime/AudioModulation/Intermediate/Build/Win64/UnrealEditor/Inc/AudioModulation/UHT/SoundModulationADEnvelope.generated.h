// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/SoundModulationADEnvelope.h"

#ifdef AUDIOMODULATION_SoundModulationADEnvelope_generated_h
#error "SoundModulationADEnvelope.generated.h already included, missing '#pragma once' in SoundModulationADEnvelope.h"
#endif
#define AUDIOMODULATION_SoundModulationADEnvelope_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundModulationADEnvelopeParams **********************************
struct Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundModulationADEnvelopeParams_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct();


struct FSoundModulationADEnvelopeParams;
// ********** End ScriptStruct FSoundModulationADEnvelopeParams ************************************

// ********** Begin Class USoundModulationGeneratorADEnvelope **************************************
struct Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorADEnvelope_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationGeneratorADEnvelope(); \
	friend struct ::Z_Construct_UClass_USoundModulationGeneratorADEnvelope_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationGeneratorADEnvelope_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationGeneratorADEnvelope, USoundModulationGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationGeneratorADEnvelope_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationGeneratorADEnvelope)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationGeneratorADEnvelope(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationGeneratorADEnvelope(USoundModulationGeneratorADEnvelope&&) = delete; \
	USoundModulationGeneratorADEnvelope(const USoundModulationGeneratorADEnvelope&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationGeneratorADEnvelope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationGeneratorADEnvelope); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationGeneratorADEnvelope) \
	AUDIOMODULATION_API virtual ~USoundModulationGeneratorADEnvelope();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationGeneratorADEnvelope;

// ********** End Class USoundModulationGeneratorADEnvelope ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationADEnvelope_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
