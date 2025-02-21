// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotoSynthPreset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTOSYNTH_MotoSynthPreset_generated_h
#error "MotoSynthPreset.generated.h already included, missing '#pragma once' in MotoSynthPreset.h"
#endif
#define MOTOSYNTH_MotoSynthPreset_generated_h

#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOTOSYNTH_API UScriptStruct* StaticStruct<struct FMotoSynthRuntimeSettings>();

#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDumpRuntimeMemoryUsage); \
	DECLARE_FUNCTION(execStopEnginePreview); \
	DECLARE_FUNCTION(execStartEnginePreview);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotoSynthPreset(); \
	friend struct Z_Construct_UClass_UMotoSynthPreset_Statics; \
public: \
	DECLARE_CLASS(UMotoSynthPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotoSynth"), NO_API) \
	DECLARE_SERIALIZER(UMotoSynthPreset)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotoSynthPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotoSynthPreset(UMotoSynthPreset&&); \
	UMotoSynthPreset(const UMotoSynthPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotoSynthPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotoSynthPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotoSynthPreset) \
	NO_API virtual ~UMotoSynthPreset();


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_216_PROLOG
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTOSYNTH_API UClass* StaticClass<class UMotoSynthPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
