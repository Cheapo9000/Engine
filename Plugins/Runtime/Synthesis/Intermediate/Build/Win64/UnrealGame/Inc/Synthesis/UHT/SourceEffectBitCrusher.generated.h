// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectBitCrusher.h"

#ifdef SYNTHESIS_SourceEffectBitCrusher_generated_h
#error "SourceEffectBitCrusher.generated.h already included, missing '#pragma once' in SourceEffectBitCrusher.h"
#endif
#define SYNTHESIS_SourceEffectBitCrusher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundModulatorBase;
struct FSourceEffectBitCrusherBaseSettings;
struct FSourceEffectBitCrusherSettings;

// ********** Begin ScriptStruct FSourceEffectBitCrusherBaseSettings *******************************
struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectBitCrusherBaseSettings;
// ********** End ScriptStruct FSourceEffectBitCrusherBaseSettings *********************************

// ********** Begin ScriptStruct FSourceEffectBitCrusherSettings ***********************************
struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectBitCrusherSettings;
// ********** End ScriptStruct FSourceEffectBitCrusherSettings *************************************

// ********** Begin Class USourceEffectBitCrusherPreset ********************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetModulationSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetSampleRateModulators); \
	DECLARE_FUNCTION(execSetSampleRateModulator); \
	DECLARE_FUNCTION(execSetSampleRate); \
	DECLARE_FUNCTION(execSetBitModulators); \
	DECLARE_FUNCTION(execSetBitModulator); \
	DECLARE_FUNCTION(execSetBits);


struct Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectBitCrusherPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectBitCrusherPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectBitCrusherPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectBitCrusherPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectBitCrusherPreset(USourceEffectBitCrusherPreset&&) = delete; \
	USourceEffectBitCrusherPreset(const USourceEffectBitCrusherPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectBitCrusherPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectBitCrusherPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectBitCrusherPreset) \
	SYNTHESIS_API virtual ~USourceEffectBitCrusherPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_77_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectBitCrusherPreset;

// ********** End Class USourceEffectBitCrusherPreset **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
