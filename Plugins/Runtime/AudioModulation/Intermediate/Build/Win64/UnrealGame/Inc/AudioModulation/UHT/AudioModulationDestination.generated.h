// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioModulationDestination.h"

#ifdef AUDIOMODULATION_AudioModulationDestination_generated_h
#error "AudioModulationDestination.generated.h already included, missing '#pragma once' in AudioModulationDestination.h"
#endif
#define AUDIOMODULATION_AudioModulationDestination_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundModulatorBase;

// ********** Begin Class UAudioModulationDestination **********************************************
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetModulator); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execGetModulator); \
	DECLARE_FUNCTION(execClearModulator);


struct Z_Construct_UClass_UAudioModulationDestination_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationDestination_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioModulationDestination(); \
	friend struct ::Z_Construct_UClass_UAudioModulationDestination_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_UAudioModulationDestination_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioModulationDestination, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_UAudioModulationDestination_NoRegister) \
	DECLARE_SERIALIZER(UAudioModulationDestination)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API UAudioModulationDestination(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioModulationDestination(UAudioModulationDestination&&) = delete; \
	UAudioModulationDestination(const UAudioModulationDestination&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, UAudioModulationDestination); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioModulationDestination); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioModulationDestination) \
	AUDIOMODULATION_API virtual ~UAudioModulationDestination();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioModulationDestination;

// ********** End Class UAudioModulationDestination ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationDestination_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
