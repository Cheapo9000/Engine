// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectChorus.h"

#ifdef SYNTHESIS_SourceEffectChorus_generated_h
#error "SourceEffectChorus.generated.h already included, missing '#pragma once' in SourceEffectChorus.h"
#endif
#define SYNTHESIS_SourceEffectChorus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundModulatorBase;
struct FSourceEffectChorusBaseSettings;
struct FSourceEffectChorusSettings;

// ********** Begin ScriptStruct FSourceEffectChorusBaseSettings ***********************************
struct Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectChorusBaseSettings;
// ********** End ScriptStruct FSourceEffectChorusBaseSettings *************************************

// ********** Begin ScriptStruct FSourceEffectChorusSettings ***************************************
struct Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectChorusSettings;
// ********** End ScriptStruct FSourceEffectChorusSettings *****************************************

// ********** Begin Class USourceEffectChorusPreset ************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetModulationSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetSpreadModulators); \
	DECLARE_FUNCTION(execSetSpreadModulator); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetDryModulators); \
	DECLARE_FUNCTION(execSetDryModulator); \
	DECLARE_FUNCTION(execSetDry); \
	DECLARE_FUNCTION(execSetWetModulators); \
	DECLARE_FUNCTION(execSetWetModulator); \
	DECLARE_FUNCTION(execSetWet); \
	DECLARE_FUNCTION(execSetFrequencyModulators); \
	DECLARE_FUNCTION(execSetFrequencyModulator); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetFeedbackModulators); \
	DECLARE_FUNCTION(execSetFeedbackModulator); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execSetDepthModulators); \
	DECLARE_FUNCTION(execSetDepthModulator); \
	DECLARE_FUNCTION(execSetDepth);


struct Z_Construct_UClass_USourceEffectChorusPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectChorusPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectChorusPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectChorusPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectChorusPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectChorusPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectChorusPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectChorusPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectChorusPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectChorusPreset(USourceEffectChorusPreset&&) = delete; \
	USourceEffectChorusPreset(const USourceEffectChorusPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectChorusPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectChorusPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectChorusPreset) \
	SYNTHESIS_API virtual ~USourceEffectChorusPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_140_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectChorusPreset;

// ********** End Class USourceEffectChorusPreset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
