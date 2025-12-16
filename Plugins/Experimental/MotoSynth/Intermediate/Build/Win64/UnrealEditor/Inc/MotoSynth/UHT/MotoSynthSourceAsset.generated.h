// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotoSynthSourceAsset.h"

#ifdef MOTOSYNTH_MotoSynthSourceAsset_generated_h
#error "MotoSynthSourceAsset.generated.h already included, missing '#pragma once' in MotoSynthSourceAsset.h"
#endif
#define MOTOSYNTH_MotoSynthSourceAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGrainTableEntry **************************************************
struct Z_Construct_UScriptStruct_FGrainTableEntry_Statics;
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGrainTableEntry_Statics; \
	MOTOSYNTH_API static class UScriptStruct* StaticStruct();


struct FGrainTableEntry;
// ********** End ScriptStruct FGrainTableEntry ****************************************************

// ********** Begin Class UMotoSynthSource *********************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execStopToneMatch); \
	DECLARE_FUNCTION(execPlayToneMatch); \
	DECLARE_FUNCTION(execPerformGrainTableAnalysis);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMotoSynthSource_Statics;
MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthSource_NoRegister();

#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotoSynthSource(); \
	friend struct ::Z_Construct_UClass_UMotoSynthSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTOSYNTH_API UClass* ::Z_Construct_UClass_UMotoSynthSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotoSynthSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotoSynth"), Z_Construct_UClass_UMotoSynthSource_NoRegister) \
	DECLARE_SERIALIZER(UMotoSynthSource)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotoSynthSource(UMotoSynthSource&&) = delete; \
	UMotoSynthSource(const UMotoSynthSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTOSYNTH_API, UMotoSynthSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotoSynthSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotoSynthSource)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_77_PROLOG
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotoSynthSource;

// ********** End Class UMotoSynthSource ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
