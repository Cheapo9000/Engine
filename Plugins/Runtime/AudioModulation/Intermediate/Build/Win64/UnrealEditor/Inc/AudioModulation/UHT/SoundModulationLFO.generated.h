// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/SoundModulationLFO.h"

#ifdef AUDIOMODULATION_SoundModulationLFO_generated_h
#error "SoundModulationLFO.generated.h already included, missing '#pragma once' in SoundModulationLFO.h"
#endif
#define AUDIOMODULATION_SoundModulationLFO_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundModulationLFOParams *****************************************
struct Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct();


struct FSoundModulationLFOParams;
// ********** End ScriptStruct FSoundModulationLFOParams *******************************************

// ********** Begin Class USoundModulationGeneratorLFO *********************************************
struct Z_Construct_UClass_USoundModulationGeneratorLFO_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorLFO_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationGeneratorLFO(); \
	friend struct ::Z_Construct_UClass_USoundModulationGeneratorLFO_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationGeneratorLFO_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationGeneratorLFO, USoundModulationGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationGeneratorLFO_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationGeneratorLFO)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationGeneratorLFO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationGeneratorLFO(USoundModulationGeneratorLFO&&) = delete; \
	USoundModulationGeneratorLFO(const USoundModulationGeneratorLFO&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationGeneratorLFO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationGeneratorLFO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationGeneratorLFO) \
	AUDIOMODULATION_API virtual ~USoundModulationGeneratorLFO();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_72_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationGeneratorLFO;

// ********** End Class USoundModulationGeneratorLFO ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h

// ********** Begin Enum ESoundModulationLFOShape **************************************************
#define FOREACH_ENUM_ESOUNDMODULATIONLFOSHAPE(op) \
	op(ESoundModulationLFOShape::Sine) \
	op(ESoundModulationLFOShape::UpSaw) \
	op(ESoundModulationLFOShape::DownSaw) \
	op(ESoundModulationLFOShape::Square) \
	op(ESoundModulationLFOShape::Triangle) \
	op(ESoundModulationLFOShape::Exponential) \
	op(ESoundModulationLFOShape::RandomSampleHold) \
	op(ESoundModulationLFOShape::COUNT) 

enum class ESoundModulationLFOShape : uint8;
template<> struct TIsUEnumClass<ESoundModulationLFOShape> { enum { Value = true }; };
template<> AUDIOMODULATION_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundModulationLFOShape>();
// ********** End Enum ESoundModulationLFOShape ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
