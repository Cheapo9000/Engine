// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectFlexiverb.h"

#ifdef SYNTHESIS_SubmixEffectFlexiverb_generated_h
#error "SubmixEffectFlexiverb.generated.h already included, missing '#pragma once' in SubmixEffectFlexiverb.h"
#endif
#define SYNTHESIS_SubmixEffectFlexiverb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectFlexiverbSettings;

// ********** Begin ScriptStruct FSubmixEffectFlexiverbSettings ************************************
struct Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectFlexiverbSettings;
// ********** End ScriptStruct FSubmixEffectFlexiverbSettings **************************************

// ********** Begin Class USubmixEffectFlexiverbPreset *********************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectFlexiverbPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectFlexiverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectFlexiverbPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USubmixEffectFlexiverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectFlexiverbPreset(USubmixEffectFlexiverbPreset&&) = delete; \
	USubmixEffectFlexiverbPreset(const USubmixEffectFlexiverbPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectFlexiverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectFlexiverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectFlexiverbPreset) \
	SYNTHESIS_API virtual ~USubmixEffectFlexiverbPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_72_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectFlexiverbPreset;

// ********** End Class USubmixEffectFlexiverbPreset ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
