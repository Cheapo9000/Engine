// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectMultiBandCompressor.h"

#ifdef SYNTHESIS_SubmixEffectMultiBandCompressor_generated_h
#error "SubmixEffectMultiBandCompressor.generated.h already included, missing '#pragma once' in SubmixEffectMultiBandCompressor.h"
#endif
#define SYNTHESIS_SubmixEffectMultiBandCompressor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class USoundSubmix;
struct FSubmixEffectMultibandCompressorSettings;

// ********** Begin ScriptStruct FDynamicsBandSettings *********************************************
struct Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FDynamicsBandSettings;
// ********** End ScriptStruct FDynamicsBandSettings ***********************************************

// ********** Begin ScriptStruct FSubmixEffectMultibandCompressorSettings **************************
struct Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectMultibandCompressorSettings;
// ********** End ScriptStruct FSubmixEffectMultibandCompressorSettings ****************************

// ********** Begin Class USubmixEffectMultibandCompressorPreset ***********************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetExternalSubmix); \
	DECLARE_FUNCTION(execSetAudioBus); \
	DECLARE_FUNCTION(execResetKey);


struct Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectMultibandCompressorPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectMultibandCompressorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectMultibandCompressorPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USubmixEffectMultibandCompressorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectMultibandCompressorPreset(USubmixEffectMultibandCompressorPreset&&) = delete; \
	USubmixEffectMultibandCompressorPreset(const USubmixEffectMultibandCompressorPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectMultibandCompressorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectMultibandCompressorPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectMultibandCompressorPreset) \
	SYNTHESIS_API virtual ~USubmixEffectMultibandCompressorPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_179_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectMultibandCompressorPreset;

// ********** End Class USubmixEffectMultibandCompressorPreset *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
