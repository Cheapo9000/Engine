// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectConvolutionReverb.h"

#ifdef SYNTHESIS_SubmixEffectConvolutionReverb_generated_h
#error "SubmixEffectConvolutionReverb.generated.h already included, missing '#pragma once' in SubmixEffectConvolutionReverb.h"
#endif
#define SYNTHESIS_SubmixEffectConvolutionReverb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioImpulseResponse;
struct FSubmixEffectConvolutionReverbSettings;

// ********** Begin ScriptStruct FSubmixEffectConvolutionReverbSettings ****************************
struct Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectConvolutionReverbSettings;
// ********** End ScriptStruct FSubmixEffectConvolutionReverbSettings ******************************

// ********** Begin Class USubmixEffectConvolutionReverbPreset *************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetImpulseResponse); \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectConvolutionReverbPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectConvolutionReverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectConvolutionReverbPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectConvolutionReverbPreset(USubmixEffectConvolutionReverbPreset&&) = delete; \
	USubmixEffectConvolutionReverbPreset(const USubmixEffectConvolutionReverbPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectConvolutionReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectConvolutionReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectConvolutionReverbPreset) \
	SYNTHESIS_API virtual ~USubmixEffectConvolutionReverbPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_116_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectConvolutionReverbPreset;

// ********** End Class USubmixEffectConvolutionReverbPreset ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
