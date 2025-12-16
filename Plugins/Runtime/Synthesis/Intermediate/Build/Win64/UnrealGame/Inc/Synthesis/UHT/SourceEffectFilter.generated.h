// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectFilter.h"

#ifdef SYNTHESIS_SourceEffectFilter_generated_h
#error "SourceEffectFilter.generated.h already included, missing '#pragma once' in SourceEffectFilter.h"
#endif
#define SYNTHESIS_SourceEffectFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectFilterSettings;

// ********** Begin ScriptStruct FSourceEffectFilterAudioBusModulationSettings *********************
struct Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectFilterAudioBusModulationSettings;
// ********** End ScriptStruct FSourceEffectFilterAudioBusModulationSettings ***********************

// ********** Begin ScriptStruct FSourceEffectFilterSettings ***************************************
struct Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectFilterSettings;
// ********** End ScriptStruct FSourceEffectFilterSettings *****************************************

// ********** Begin Class USourceEffectFilterPreset ************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectFilterPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFilterPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectFilterPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectFilterPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectFilterPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectFilterPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectFilterPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectFilterPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectFilterPreset(USourceEffectFilterPreset&&) = delete; \
	USourceEffectFilterPreset(const USourceEffectFilterPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectFilterPreset) \
	SYNTHESIS_API virtual ~USourceEffectFilterPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_164_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_167_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectFilterPreset;

// ********** End Class USourceEffectFilterPreset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h

// ********** Begin Enum ESourceEffectFilterCircuit ************************************************
#define FOREACH_ENUM_ESOURCEEFFECTFILTERCIRCUIT(op) \
	op(ESourceEffectFilterCircuit::OnePole) \
	op(ESourceEffectFilterCircuit::StateVariable) \
	op(ESourceEffectFilterCircuit::Ladder) \
	op(ESourceEffectFilterCircuit::Count) 

enum class ESourceEffectFilterCircuit : uint8;
template<> struct TIsUEnumClass<ESourceEffectFilterCircuit> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectFilterCircuit>();
// ********** End Enum ESourceEffectFilterCircuit **************************************************

// ********** Begin Enum ESourceEffectFilterType ***************************************************
#define FOREACH_ENUM_ESOURCEEFFECTFILTERTYPE(op) \
	op(ESourceEffectFilterType::LowPass) \
	op(ESourceEffectFilterType::HighPass) \
	op(ESourceEffectFilterType::BandPass) \
	op(ESourceEffectFilterType::BandStop) \
	op(ESourceEffectFilterType::Count) 

enum class ESourceEffectFilterType : uint8;
template<> struct TIsUEnumClass<ESourceEffectFilterType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectFilterType>();
// ********** End Enum ESourceEffectFilterType *****************************************************

// ********** Begin Enum ESourceEffectFilterParam **************************************************
#define FOREACH_ENUM_ESOURCEEFFECTFILTERPARAM(op) \
	op(ESourceEffectFilterParam::FilterFrequency) \
	op(ESourceEffectFilterParam::FilterResonance) \
	op(ESourceEffectFilterParam::Count) 

enum class ESourceEffectFilterParam : uint8;
template<> struct TIsUEnumClass<ESourceEffectFilterParam> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectFilterParam>();
// ********** End Enum ESourceEffectFilterParam ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
