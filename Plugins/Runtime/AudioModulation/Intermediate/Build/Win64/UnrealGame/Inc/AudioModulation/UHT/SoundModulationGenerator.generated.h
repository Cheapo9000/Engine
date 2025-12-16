// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundModulationGenerator.h"

#ifdef AUDIOMODULATION_SoundModulationGenerator_generated_h
#error "SoundModulationGenerator.generated.h already included, missing '#pragma once' in SoundModulationGenerator.h"
#endif
#define AUDIOMODULATION_SoundModulationGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundModulationGenerator ************************************************
struct Z_Construct_UClass_USoundModulationGenerator_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGenerator_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationGenerator_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationGenerator(); \
	friend struct ::Z_Construct_UClass_USoundModulationGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationGenerator, USoundModulatorBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationGenerator_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationGenerator)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationGenerator_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationGenerator(USoundModulationGenerator&&) = delete; \
	USoundModulationGenerator(const USoundModulationGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationGenerator) \
	AUDIOMODULATION_API virtual ~USoundModulationGenerator();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationGenerator_h_85_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationGenerator_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationGenerator_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationGenerator_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationGenerator;

// ********** End Class USoundModulationGenerator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
