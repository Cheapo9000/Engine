// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectStereoDelay.h"

#ifdef SYNTHESIS_SubmixEffectStereoDelay_generated_h
#error "SubmixEffectStereoDelay.generated.h already included, missing '#pragma once' in SubmixEffectStereoDelay.h"
#endif
#define SYNTHESIS_SubmixEffectStereoDelay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectStereoDelaySettings;

// ********** Begin ScriptStruct FSubmixEffectStereoDelaySettings **********************************
struct Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectStereoDelaySettings;
// ********** End ScriptStruct FSubmixEffectStereoDelaySettings ************************************

// ********** Begin Class USubmixEffectStereoDelayPreset *******************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectStereoDelayPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectStereoDelayPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectStereoDelayPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USubmixEffectStereoDelayPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectStereoDelayPreset(USubmixEffectStereoDelayPreset&&) = delete; \
	USubmixEffectStereoDelayPreset(const USubmixEffectStereoDelayPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectStereoDelayPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectStereoDelayPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectStereoDelayPreset) \
	SYNTHESIS_API virtual ~USubmixEffectStereoDelayPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_84_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectStereoDelayPreset;

// ********** End Class USubmixEffectStereoDelayPreset *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
