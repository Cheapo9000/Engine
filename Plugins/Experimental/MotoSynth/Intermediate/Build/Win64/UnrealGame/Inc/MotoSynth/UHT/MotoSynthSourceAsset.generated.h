// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotoSynthSourceAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTOSYNTH_MotoSynthSourceAsset_generated_h
#error "MotoSynthSourceAsset.generated.h already included, missing '#pragma once' in MotoSynthSourceAsset.h"
#endif
#define MOTOSYNTH_MotoSynthSourceAsset_generated_h

#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrainTableEntry_Statics; \
	MOTOSYNTH_API static class UScriptStruct* StaticStruct();


template<> MOTOSYNTH_API UScriptStruct* StaticStruct<struct FGrainTableEntry>();

#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execStopToneMatch); \
	DECLARE_FUNCTION(execPlayToneMatch); \
	DECLARE_FUNCTION(execPerformGrainTableAnalysis);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotoSynthSource(); \
	friend struct Z_Construct_UClass_UMotoSynthSource_Statics; \
public: \
	DECLARE_CLASS(UMotoSynthSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotoSynth"), NO_API) \
	DECLARE_SERIALIZER(UMotoSynthSource)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotoSynthSource(UMotoSynthSource&&); \
	UMotoSynthSource(const UMotoSynthSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotoSynthSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotoSynthSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotoSynthSource)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_75_PROLOG
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTOSYNTH_API UClass* StaticClass<class UMotoSynthSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
