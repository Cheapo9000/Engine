// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundUtilities.h"

#ifdef SOUNDUTILITIES_SoundUtilities_generated_h
#error "SoundUtilities.generated.h already included, missing '#pragma once' in SoundUtilities.h"
#endif
#define SOUNDUTILITIES_SoundUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundUtilitiesBPFunctionLibrary *****************************************
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetQFromBandwidth); \
	DECLARE_FUNCTION(execGetBandwidthFromQ); \
	DECLARE_FUNCTION(execGetFrequencyMultiplierFromSemitones); \
	DECLARE_FUNCTION(execGetLinearFrequencyClamped); \
	DECLARE_FUNCTION(execGetLogFrequencyClamped); \
	DECLARE_FUNCTION(execConvertDecibelsToLinear); \
	DECLARE_FUNCTION(execConvertLinearToDecibels); \
	DECLARE_FUNCTION(execGetGainFromMidiVelocity); \
	DECLARE_FUNCTION(execGetPitchScaleFromMIDIPitch); \
	DECLARE_FUNCTION(execGetMIDIPitchFromFrequency); \
	DECLARE_FUNCTION(execGetFrequencyFromMIDIPitch); \
	DECLARE_FUNCTION(execGetBeatTempo);


struct Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics;
SOUNDUTILITIES_API UClass* Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundUtilitiesBPFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDUTILITIES_API UClass* ::Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundUtilitiesBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundUtilities"), Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USoundUtilitiesBPFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDUTILITIES_API USoundUtilitiesBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundUtilitiesBPFunctionLibrary(USoundUtilitiesBPFunctionLibrary&&) = delete; \
	USoundUtilitiesBPFunctionLibrary(const USoundUtilitiesBPFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDUTILITIES_API, USoundUtilitiesBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundUtilitiesBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundUtilitiesBPFunctionLibrary) \
	SOUNDUTILITIES_API virtual ~USoundUtilitiesBPFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundUtilitiesBPFunctionLibrary;

// ********** End Class USoundUtilitiesBPFunctionLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
