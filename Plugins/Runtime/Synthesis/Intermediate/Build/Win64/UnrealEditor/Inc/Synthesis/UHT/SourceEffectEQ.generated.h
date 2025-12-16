// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectEQ.h"

#ifdef SYNTHESIS_SourceEffectEQ_generated_h
#error "SourceEffectEQ.generated.h already included, missing '#pragma once' in SourceEffectEQ.h"
#endif
#define SYNTHESIS_SourceEffectEQ_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectEQSettings;

// ********** Begin ScriptStruct FSourceEffectEQBand ***********************************************
struct Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectEQBand;
// ********** End ScriptStruct FSourceEffectEQBand *************************************************

// ********** Begin ScriptStruct FSourceEffectEQSettings *******************************************
struct Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectEQSettings;
// ********** End ScriptStruct FSourceEffectEQSettings *********************************************

// ********** Begin Class USourceEffectEQPreset ****************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectEQPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEQPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectEQPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectEQPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectEQPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectEQPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectEQPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectEQPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectEQPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectEQPreset(USourceEffectEQPreset&&) = delete; \
	USourceEffectEQPreset(const USourceEffectEQPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectEQPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectEQPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectEQPreset) \
	SYNTHESIS_API virtual ~USourceEffectEQPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_78_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectEQPreset;

// ********** End Class USourceEffectEQPreset ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
