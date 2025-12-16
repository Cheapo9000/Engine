// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/SynthComponentMonoWaveTable.h"

#ifdef SYNTHESIS_SynthComponentMonoWaveTable_generated_h
#error "SynthComponentMonoWaveTable.generated.h already included, missing '#pragma once' in SynthComponentMonoWaveTable.h"
#endif
#define SYNTHESIS_SynthComponentMonoWaveTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CurveInterpolationType : uint8;
enum class ESynthLFOType : uint8;

// ********** Begin Class UMonoWaveTableSynthPreset ************************************************
struct Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonoWaveTableSynthPreset(); \
	friend struct ::Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMonoWaveTableSynthPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister) \
	DECLARE_SERIALIZER(UMonoWaveTableSynthPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMonoWaveTableSynthPreset(UMonoWaveTableSynthPreset&&) = delete; \
	UMonoWaveTableSynthPreset(const UMonoWaveTableSynthPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, UMonoWaveTableSynthPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonoWaveTableSynthPreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMonoWaveTableSynthPreset) \
	SYNTHESIS_API virtual ~UMonoWaveTableSynthPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMonoWaveTableSynthPreset;

// ********** End Class UMonoWaveTableSynthPreset **************************************************

// ********** Begin Delegate FOnTableAltered *******************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_123_DELEGATE \
SYNTHESIS_API void FOnTableAltered_DelegateWrapper(const FMulticastScriptDelegate& OnTableAltered, int32 TableIndex);


// ********** End Delegate FOnTableAltered *********************************************************

// ********** Begin Delegate FNumTablesChanged *****************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_124_DELEGATE \
SYNTHESIS_API void FNumTablesChanged_DelegateWrapper(const FMulticastScriptDelegate& NumTablesChanged);


// ********** End Delegate FNumTablesChanged *******************************************************

// ********** Begin Class USynthComponentMonoWaveTable *********************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetKeyFrameValuesForTable); \
	DECLARE_FUNCTION(execGetCurveTangent); \
	DECLARE_FUNCTION(execSetCurveTangent); \
	DECLARE_FUNCTION(execSetCurveInterpolationType); \
	DECLARE_FUNCTION(execSetCurveValue); \
	DECLARE_FUNCTION(execGetMaxTableIndex); \
	DECLARE_FUNCTION(execSetPositionEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetPositionEnvelopeDepth); \
	DECLARE_FUNCTION(execSetPositionEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetPositionEnvelopeInvert); \
	DECLARE_FUNCTION(execSetPositionEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetPositionEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetPositionEnvelopeDecayTime); \
	DECLARE_FUNCTION(execSetPositionEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetFilterEnvelopeDepth); \
	DECLARE_FUNCTION(execSetFilterEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetFilterEnvelopeInvert); \
	DECLARE_FUNCTION(execSetFilterEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetFilterEnvelopenDecayTime); \
	DECLARE_FUNCTION(execSetFilterEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeBiasDepth); \
	DECLARE_FUNCTION(execSetAmpEnvelopeDepth); \
	DECLARE_FUNCTION(execSetAmpEnvelopeBiasInvert); \
	DECLARE_FUNCTION(execSetAmpEnvelopeInvert); \
	DECLARE_FUNCTION(execSetAmpEnvelopeReleaseTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeSustainGain); \
	DECLARE_FUNCTION(execSetAmpEnvelopeDecayTime); \
	DECLARE_FUNCTION(execSetAmpEnvelopeAttackTime); \
	DECLARE_FUNCTION(execSetLowPassFilterResonance); \
	DECLARE_FUNCTION(execSetPosLfoType); \
	DECLARE_FUNCTION(execSetPosLfoDepth); \
	DECLARE_FUNCTION(execSetPosLfoFrequency); \
	DECLARE_FUNCTION(execRefreshAllWaveTables); \
	DECLARE_FUNCTION(execRefreshWaveTable); \
	DECLARE_FUNCTION(execSetWaveTablePosition); \
	DECLARE_FUNCTION(execSetFrequencyWithMidiNote); \
	DECLARE_FUNCTION(execSetFrequencyPitchBend); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetSustainPedalState); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn); \
	DECLARE_FUNCTION(execGetNumTableEntries);


struct Z_Construct_UClass_USynthComponentMonoWaveTable_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentMonoWaveTable_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponentMonoWaveTable(); \
	friend struct ::Z_Construct_UClass_USynthComponentMonoWaveTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USynthComponentMonoWaveTable_NoRegister(); \
public: \
	DECLARE_CLASS2(USynthComponentMonoWaveTable, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USynthComponentMonoWaveTable_NoRegister) \
	DECLARE_SERIALIZER(USynthComponentMonoWaveTable)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_138_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynthComponentMonoWaveTable(USynthComponentMonoWaveTable&&) = delete; \
	USynthComponentMonoWaveTable(const USynthComponentMonoWaveTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USynthComponentMonoWaveTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponentMonoWaveTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponentMonoWaveTable)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_135_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynthComponentMonoWaveTable;

// ********** End Class USynthComponentMonoWaveTable ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h

// ********** Begin Enum CurveInterpolationType ****************************************************
#define FOREACH_ENUM_CURVEINTERPOLATIONTYPE(op) \
	op(CurveInterpolationType::AUTOINTERP) \
	op(CurveInterpolationType::LINEAR) \
	op(CurveInterpolationType::CONSTANT) 

enum class CurveInterpolationType : uint8;
template<> struct TIsUEnumClass<CurveInterpolationType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<CurveInterpolationType>();
// ********** End Enum CurveInterpolationType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
