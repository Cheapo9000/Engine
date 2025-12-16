// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectStereoToQuad.h"

#ifdef SYNTHESIS_SubmixEffectStereoToQuad_generated_h
#error "SubmixEffectStereoToQuad.generated.h already included, missing '#pragma once' in SubmixEffectStereoToQuad.h"
#endif
#define SYNTHESIS_SubmixEffectStereoToQuad_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectStereoToQuadSettings;

// ********** Begin ScriptStruct FSubmixEffectStereoToQuadSettings *********************************
struct Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectStereoToQuadSettings;
// ********** End ScriptStruct FSubmixEffectStereoToQuadSettings ***********************************

// ********** Begin Class USubmixEffectStereoToQuadPreset ******************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoToQuadPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectStereoToQuadPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectStereoToQuadPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectStereoToQuadPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectStereoToQuadPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectStereoToQuadPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USubmixEffectStereoToQuadPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectStereoToQuadPreset(USubmixEffectStereoToQuadPreset&&) = delete; \
	USubmixEffectStereoToQuadPreset(const USubmixEffectStereoToQuadPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectStereoToQuadPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectStereoToQuadPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectStereoToQuadPreset) \
	SYNTHESIS_API virtual ~USubmixEffectStereoToQuadPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_49_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectStereoToQuadPreset;

// ********** End Class USubmixEffectStereoToQuadPreset ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
