// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotoSynthPreset.h"

#ifdef MOTOSYNTH_MotoSynthPreset_generated_h
#error "MotoSynthPreset.generated.h already included, missing '#pragma once' in MotoSynthPreset.h"
#endif
#define MOTOSYNTH_MotoSynthPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMotoSynthRuntimeSettings *****************************************
struct Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics;
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics; \
	MOTOSYNTH_API static class UScriptStruct* StaticStruct();


struct FMotoSynthRuntimeSettings;
// ********** End ScriptStruct FMotoSynthRuntimeSettings *******************************************

// ********** Begin Class UMotoSynthPreset *********************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDumpRuntimeMemoryUsage); \
	DECLARE_FUNCTION(execStopEnginePreview); \
	DECLARE_FUNCTION(execStartEnginePreview);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMotoSynthPreset_Statics;
MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthPreset_NoRegister();

#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotoSynthPreset(); \
	friend struct ::Z_Construct_UClass_UMotoSynthPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTOSYNTH_API UClass* ::Z_Construct_UClass_UMotoSynthPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotoSynthPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotoSynth"), Z_Construct_UClass_UMotoSynthPreset_NoRegister) \
	DECLARE_SERIALIZER(UMotoSynthPreset)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOTOSYNTH_API UMotoSynthPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotoSynthPreset(UMotoSynthPreset&&) = delete; \
	UMotoSynthPreset(const UMotoSynthPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTOSYNTH_API, UMotoSynthPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotoSynthPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotoSynthPreset) \
	MOTOSYNTH_API virtual ~UMotoSynthPreset();


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_218_PROLOG
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_221_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotoSynthPreset;

// ********** End Class UMotoSynthPreset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
