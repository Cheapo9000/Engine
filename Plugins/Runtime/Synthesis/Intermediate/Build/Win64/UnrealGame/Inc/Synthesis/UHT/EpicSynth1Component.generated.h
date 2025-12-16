// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/EpicSynth1Component.h"

#ifdef SYNTHESIS_EpicSynth1Component_generated_h
#error "EpicSynth1Component.generated.h already included, missing '#pragma once' in EpicSynth1Component.h"
#endif
#define SYNTHESIS_EpicSynth1Component_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModularSynthPresetBank;
enum class ESynth1OscType : uint8;
enum class ESynth1PatchSource : uint8;
enum class ESynthFilterAlgorithm : uint8;
enum class ESynthFilterType : uint8;
enum class ESynthLFOMode : uint8;
enum class ESynthLFOPatchType : uint8;
enum class ESynthLFOType : uint8;
enum class ESynthModEnvBiasPatch : uint8;
enum class ESynthModEnvPatch : uint8;
enum class ESynthStereoDelayMode : uint8;
struct FModularSynthPreset;
struct FPatchId;
struct FSynth1PatchCable;

// ********** Begin ScriptStruct FEpicSynth1Patch **************************************************
struct Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FEpicSynth1Patch;
// ********** End ScriptStruct FEpicSynth1Patch ****************************************************

// ********** Begin ScriptStruct FModularSynthPreset ***********************************************
struct Z_Construct_UScriptStruct_FModularSynthPreset_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularSynthPreset_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FModularSynthPreset;
// ********** End ScriptStruct FModularSynthPreset *************************************************

// ********** Begin ScriptStruct FModularSynthPresetBankEntry **************************************
struct Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_332_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FModularSynthPresetBankEntry;
// ********** End ScriptStruct FModularSynthPresetBankEntry ****************************************

// ********** Begin Class UModularSynthPresetBank **************************************************
struct Z_Construct_UClass_UModularSynthPresetBank_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthPresetBank_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_349_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthPresetBank(); \
	friend struct ::Z_Construct_UClass_UModularSynthPresetBank_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_UModularSynthPresetBank_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularSynthPresetBank, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_UModularSynthPresetBank_NoRegister) \
	DECLARE_SERIALIZER(UModularSynthPresetBank)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_349_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API UModularSynthPresetBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularSynthPresetBank(UModularSynthPresetBank&&) = delete; \
	UModularSynthPresetBank(const UModularSynthPresetBank&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, UModularSynthPresetBank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthPresetBank); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthPresetBank) \
	SYNTHESIS_API virtual ~UModularSynthPresetBank();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_346_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_349_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_349_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_349_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularSynthPresetBank;

// ********** End Class UModularSynthPresetBank ****************************************************

// ********** Begin Class UModularSynthLibrary *****************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddModularSynthPresetToBankAsset);


struct Z_Construct_UClass_UModularSynthLibrary_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_360_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthLibrary(); \
	friend struct ::Z_Construct_UClass_UModularSynthLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_UModularSynthLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularSynthLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_UModularSynthLibrary_NoRegister) \
	DECLARE_SERIALIZER(UModularSynthLibrary)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_360_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API UModularSynthLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularSynthLibrary(UModularSynthLibrary&&) = delete; \
	UModularSynthLibrary(const UModularSynthLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, UModularSynthLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthLibrary) \
	SYNTHESIS_API virtual ~UModularSynthLibrary();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_357_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_360_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_360_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_360_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularSynthLibrary;

// ********** End Class UModularSynthLibrary *******************************************************

// ********** Begin Class UModularSynthComponent ***************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_375_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnablePatch); \
	DECLARE_FUNCTION(execCreatePatch); \
	DECLARE_FUNCTION(execSetSynthPreset); \
	DECLARE_FUNCTION(execSetChorusFrequency); \
	DECLARE_FUNCTION(execSetChorusFeedback); \
	DECLARE_FUNCTION(execSetChorusDepth); \
	DECLARE_FUNCTION(execSetChorusEnabled); \
	DECLARE_FUNCTION(execSetStereoDelayRatio); \
	DECLARE_FUNCTION(execSetStereoDelayWetlevel); \
	DECLARE_FUNCTION(execSetStereoDelayFeedback); \
	DECLARE_FUNCTION(execSetStereoDelayTime); \
	DECLARE_FUNCTION(execSetStereoDelayMode); \
	DECLARE_FUNCTION(execSetStereoDelayIsEnabled); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterFrequency); \
	DECLARE_FUNCTION(execSetEnableRetrigger); \
	DECLARE_FUNCTION(execSetEnableLegato); \
	DECLARE_FUNCTION(execSetModEnvReleaseTime); \
	DECLARE_FUNCTION(execSetModEnvSustainGain); \
	DECLARE_FUNCTION(execSetModEnvDecayTime); \
	DECLARE_FUNCTION(execSetModEnvAttackTime); \
	DECLARE_FUNCTION(execSetModEnvDepth); \
	DECLARE_FUNCTION(execSetModEnvBiasInvert); \
	DECLARE_FUNCTION(execSetModEnvInvert); \
	DECLARE_FUNCTION(execSetModEnvBiasPatch); \
	DECLARE_FUNCTION(execSetModEnvPatch); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetSustainGain); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetGainDb); \
	DECLARE_FUNCTION(execSetLFOPatch); \
	DECLARE_FUNCTION(execSetLFOMode); \
	DECLARE_FUNCTION(execSetLFOType); \
	DECLARE_FUNCTION(execSetLFOGainMod); \
	DECLARE_FUNCTION(execSetLFOGain); \
	DECLARE_FUNCTION(execSetLFOFrequencyMod); \
	DECLARE_FUNCTION(execSetLFOFrequency); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetPan); \
	DECLARE_FUNCTION(execSetOscSync); \
	DECLARE_FUNCTION(execSetEnableUnison); \
	DECLARE_FUNCTION(execSetOscPulsewidth); \
	DECLARE_FUNCTION(execSetPortamento); \
	DECLARE_FUNCTION(execSetPitchBend); \
	DECLARE_FUNCTION(execSetOscCents); \
	DECLARE_FUNCTION(execSetOscSemitones); \
	DECLARE_FUNCTION(execSetOscOctave); \
	DECLARE_FUNCTION(execSetOscType); \
	DECLARE_FUNCTION(execSetOscFrequencyMod); \
	DECLARE_FUNCTION(execSetOscGainMod); \
	DECLARE_FUNCTION(execSetOscGain); \
	DECLARE_FUNCTION(execSetEnablePolyphony); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn);


struct Z_Construct_UClass_UModularSynthComponent_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_UModularSynthComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_375_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthComponent(); \
	friend struct ::Z_Construct_UClass_UModularSynthComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_UModularSynthComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularSynthComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_UModularSynthComponent_NoRegister) \
	DECLARE_SERIALIZER(UModularSynthComponent)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_375_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularSynthComponent(UModularSynthComponent&&) = delete; \
	UModularSynthComponent(const UModularSynthComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, UModularSynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthComponent) \
	SYNTHESIS_API virtual ~UModularSynthComponent();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_372_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_375_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_375_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_375_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_375_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularSynthComponent;

// ********** End Class UModularSynthComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
