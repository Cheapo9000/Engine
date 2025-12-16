// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundModulationPatch.h"

#ifdef AUDIOMODULATION_SoundModulationPatch_generated_h
#error "SoundModulationPatch.generated.h already included, missing '#pragma once' in SoundModulationPatch.h"
#endif
#define AUDIOMODULATION_SoundModulationPatch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundModulationTransform *****************************************
struct Z_Construct_UScriptStruct_FSoundModulationTransform_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundModulationTransform_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct(); \
	typedef FWaveTableTransform Super;


struct FSoundModulationTransform;
// ********** End ScriptStruct FSoundModulationTransform *******************************************

// ********** Begin ScriptStruct FSoundControlModulationInput **************************************
struct Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct();


struct FSoundControlModulationInput;
// ********** End ScriptStruct FSoundControlModulationInput ****************************************

// ********** Begin ScriptStruct FSoundControlModulationPatch **************************************
struct Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct();


struct FSoundControlModulationPatch;
// ********** End ScriptStruct FSoundControlModulationPatch ****************************************

// ********** Begin Class USoundModulationPatch ****************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundModulationPatch, AUDIOMODULATION_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_USoundModulationPatch_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationPatch_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulationPatch(); \
	friend struct ::Z_Construct_UClass_USoundModulationPatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationPatch_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationPatch, USoundModulatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationPatch_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationPatch) \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationPatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationPatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationPatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationPatch); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationPatch(USoundModulationPatch&&) = delete; \
	USoundModulationPatch(const USoundModulationPatch&) = delete; \
	AUDIOMODULATION_API virtual ~USoundModulationPatch();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationPatch;

// ********** End Class USoundModulationPatch ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
