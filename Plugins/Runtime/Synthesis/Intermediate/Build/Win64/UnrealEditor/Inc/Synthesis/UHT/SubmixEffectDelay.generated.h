// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectDelay.h"

#ifdef SYNTHESIS_SubmixEffectDelay_generated_h
#error "SubmixEffectDelay.generated.h already included, missing '#pragma once' in SubmixEffectDelay.h"
#endif
#define SYNTHESIS_SubmixEffectDelay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectDelaySettings;

// ********** Begin ScriptStruct FSubmixEffectDelaySettings ****************************************
struct Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectDelaySettings;
// ********** End ScriptStruct FSubmixEffectDelaySettings ******************************************

// ********** Begin Class USubmixEffectDelayStatics ************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDelayLength); \
	DECLARE_FUNCTION(execSetInterpolationTime); \
	DECLARE_FUNCTION(execSetMaximumDelayLength);


struct Z_Construct_UClass_USubmixEffectDelayStatics_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayStatics_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectDelayStatics(); \
	friend struct ::Z_Construct_UClass_USubmixEffectDelayStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectDelayStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectDelayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectDelayStatics_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectDelayStatics)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USubmixEffectDelayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectDelayStatics(USubmixEffectDelayStatics&&) = delete; \
	USubmixEffectDelayStatics(const USubmixEffectDelayStatics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectDelayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectDelayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectDelayStatics) \
	SYNTHESIS_API virtual ~USubmixEffectDelayStatics();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectDelayStatics;

// ********** End Class USubmixEffectDelayStatics **************************************************

// ********** Begin Class USubmixEffectDelayPreset *************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execSetInterpolationTime); \
	DECLARE_FUNCTION(execGetMaxDelayInMilliseconds); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectDelayPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectDelayPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectDelayPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectDelayPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectDelayPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USubmixEffectDelayPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectDelayPreset(USubmixEffectDelayPreset&&) = delete; \
	USubmixEffectDelayPreset(const USubmixEffectDelayPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectDelayPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectDelayPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectDelayPreset) \
	SYNTHESIS_API virtual ~USubmixEffectDelayPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_127_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_130_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectDelayPreset;

// ********** End Class USubmixEffectDelayPreset ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
