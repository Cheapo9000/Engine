// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectSimpleDelay.h"

#ifdef SYNTHESIS_SourceEffectSimpleDelay_generated_h
#error "SourceEffectSimpleDelay.generated.h already included, missing '#pragma once' in SourceEffectSimpleDelay.h"
#endif
#define SYNTHESIS_SourceEffectSimpleDelay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectSimpleDelaySettings;

// ********** Begin ScriptStruct FSourceEffectSimpleDelaySettings **********************************
struct Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectSimpleDelaySettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectSimpleDelaySettings;
// ********** End ScriptStruct FSourceEffectSimpleDelaySettings ************************************

// ********** Begin Class USourceEffectSimpleDelayPreset *******************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectSimpleDelayPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectSimpleDelayPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectSimpleDelayPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectSimpleDelayPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectSimpleDelayPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectSimpleDelayPreset(USourceEffectSimpleDelayPreset&&) = delete; \
	USourceEffectSimpleDelayPreset(const USourceEffectSimpleDelayPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectSimpleDelayPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectSimpleDelayPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectSimpleDelayPreset) \
	SYNTHESIS_API virtual ~USourceEffectSimpleDelayPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_70_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectSimpleDelayPreset;

// ********** End Class USourceEffectSimpleDelayPreset *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectSimpleDelay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
