// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectConvolutionReverb.h"

#ifdef SYNTHESIS_SourceEffectConvolutionReverb_generated_h
#error "SourceEffectConvolutionReverb.generated.h already included, missing '#pragma once' in SourceEffectConvolutionReverb.h"
#endif
#define SYNTHESIS_SourceEffectConvolutionReverb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioImpulseResponse;
struct FSourceEffectConvolutionReverbSettings;

// ********** Begin ScriptStruct FSourceEffectConvolutionReverbSettings ****************************
struct Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectConvolutionReverbSettings;
// ********** End ScriptStruct FSourceEffectConvolutionReverbSettings ******************************

// ********** Begin Class USourceEffectConvolutionReverbPreset *************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetImpulseResponse); \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectConvolutionReverbPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectConvolutionReverbPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectConvolutionReverbPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_83_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectConvolutionReverbPreset(USourceEffectConvolutionReverbPreset&&) = delete; \
	USourceEffectConvolutionReverbPreset(const USourceEffectConvolutionReverbPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectConvolutionReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectConvolutionReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectConvolutionReverbPreset) \
	SYNTHESIS_API virtual ~USourceEffectConvolutionReverbPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_80_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectConvolutionReverbPreset;

// ********** End Class USourceEffectConvolutionReverbPreset ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
