// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectMotionFilter.h"

#ifdef SYNTHESIS_SourceEffectMotionFilter_generated_h
#error "SourceEffectMotionFilter.generated.h already included, missing '#pragma once' in SourceEffectMotionFilter.h"
#endif
#define SYNTHESIS_SourceEffectMotionFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectMotionFilterSettings;

// ********** Begin ScriptStruct FSourceEffectIndividualFilterSettings *****************************
struct Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectIndividualFilterSettings;
// ********** End ScriptStruct FSourceEffectIndividualFilterSettings *******************************

// ********** Begin ScriptStruct FSourceEffectMotionFilterModulationSettings ***********************
struct Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectMotionFilterModulationSettings;
// ********** End ScriptStruct FSourceEffectMotionFilterModulationSettings *************************

// ********** Begin ScriptStruct FSourceEffectMotionFilterSettings *********************************
struct Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectMotionFilterSettings;
// ********** End ScriptStruct FSourceEffectMotionFilterSettings ***********************************

// ********** Begin Class USourceEffectMotionFilterPreset ******************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMotionFilterPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectMotionFilterPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectMotionFilterPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectMotionFilterPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectMotionFilterPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectMotionFilterPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_327_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectMotionFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectMotionFilterPreset(USourceEffectMotionFilterPreset&&) = delete; \
	USourceEffectMotionFilterPreset(const USourceEffectMotionFilterPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectMotionFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectMotionFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectMotionFilterPreset) \
	SYNTHESIS_API virtual ~USourceEffectMotionFilterPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_324_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_327_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_327_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectMotionFilterPreset;

// ********** End Class USourceEffectMotionFilterPreset ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h

// ********** Begin Enum ESourceEffectMotionFilterModSource ****************************************
#define FOREACH_ENUM_ESOURCEEFFECTMOTIONFILTERMODSOURCE(op) \
	op(ESourceEffectMotionFilterModSource::DistanceFromListener) \
	op(ESourceEffectMotionFilterModSource::SpeedRelativeToListener) \
	op(ESourceEffectMotionFilterModSource::SpeedOfSourceEmitter) \
	op(ESourceEffectMotionFilterModSource::SpeedOfListener) \
	op(ESourceEffectMotionFilterModSource::SpeedOfAngleDelta) \
	op(ESourceEffectMotionFilterModSource::Count) 

enum class ESourceEffectMotionFilterModSource : uint8;
template<> struct TIsUEnumClass<ESourceEffectMotionFilterModSource> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectMotionFilterModSource>();
// ********** End Enum ESourceEffectMotionFilterModSource ******************************************

// ********** Begin Enum ESourceEffectMotionFilterModDestination ***********************************
#define FOREACH_ENUM_ESOURCEEFFECTMOTIONFILTERMODDESTINATION(op) \
	op(ESourceEffectMotionFilterModDestination::FilterACutoffFrequency) \
	op(ESourceEffectMotionFilterModDestination::FilterAResonance) \
	op(ESourceEffectMotionFilterModDestination::FilterAOutputVolumeDB) \
	op(ESourceEffectMotionFilterModDestination::FilterBCutoffFrequency) \
	op(ESourceEffectMotionFilterModDestination::FilterBResonance) \
	op(ESourceEffectMotionFilterModDestination::FilterBOutputVolumeDB) \
	op(ESourceEffectMotionFilterModDestination::FilterMix) \
	op(ESourceEffectMotionFilterModDestination::Count) 

enum class ESourceEffectMotionFilterModDestination : uint8;
template<> struct TIsUEnumClass<ESourceEffectMotionFilterModDestination> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectMotionFilterModDestination>();
// ********** End Enum ESourceEffectMotionFilterModDestination *************************************

// ********** Begin Enum ESourceEffectMotionFilterTopology *****************************************
#define FOREACH_ENUM_ESOURCEEFFECTMOTIONFILTERTOPOLOGY(op) \
	op(ESourceEffectMotionFilterTopology::SerialMode) \
	op(ESourceEffectMotionFilterTopology::ParallelMode) \
	op(ESourceEffectMotionFilterTopology::Count) 

enum class ESourceEffectMotionFilterTopology : uint8;
template<> struct TIsUEnumClass<ESourceEffectMotionFilterTopology> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectMotionFilterTopology>();
// ********** End Enum ESourceEffectMotionFilterTopology *******************************************

// ********** Begin Enum ESourceEffectMotionFilterCircuit ******************************************
#define FOREACH_ENUM_ESOURCEEFFECTMOTIONFILTERCIRCUIT(op) \
	op(ESourceEffectMotionFilterCircuit::OnePole) \
	op(ESourceEffectMotionFilterCircuit::StateVariable) \
	op(ESourceEffectMotionFilterCircuit::Ladder) \
	op(ESourceEffectMotionFilterCircuit::Count) 

enum class ESourceEffectMotionFilterCircuit : uint8;
template<> struct TIsUEnumClass<ESourceEffectMotionFilterCircuit> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectMotionFilterCircuit>();
// ********** End Enum ESourceEffectMotionFilterCircuit ********************************************

// ********** Begin Enum ESourceEffectMotionFilterType *********************************************
#define FOREACH_ENUM_ESOURCEEFFECTMOTIONFILTERTYPE(op) \
	op(ESourceEffectMotionFilterType::LowPass) \
	op(ESourceEffectMotionFilterType::HighPass) \
	op(ESourceEffectMotionFilterType::BandPass) \
	op(ESourceEffectMotionFilterType::BandStop) \
	op(ESourceEffectMotionFilterType::Count) 

enum class ESourceEffectMotionFilterType : uint8;
template<> struct TIsUEnumClass<ESourceEffectMotionFilterType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectMotionFilterType>();
// ********** End Enum ESourceEffectMotionFilterType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
