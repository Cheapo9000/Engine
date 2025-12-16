// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectPhaser.h"

#ifdef SYNTHESIS_SourceEffectPhaser_generated_h
#error "SourceEffectPhaser.generated.h already included, missing '#pragma once' in SourceEffectPhaser.h"
#endif
#define SYNTHESIS_SourceEffectPhaser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectPhaserSettings;

// ********** Begin ScriptStruct FSourceEffectPhaserSettings ***************************************
struct Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectPhaserSettings;
// ********** End ScriptStruct FSourceEffectPhaserSettings *****************************************

// ********** Begin Class USourceEffectPhaserPreset ************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectPhaserPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectPhaserPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectPhaserPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectPhaserPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectPhaserPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectPhaserPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectPhaserPreset(USourceEffectPhaserPreset&&) = delete; \
	USourceEffectPhaserPreset(const USourceEffectPhaserPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectPhaserPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectPhaserPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectPhaserPreset) \
	SYNTHESIS_API virtual ~USourceEffectPhaserPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectPhaserPreset;

// ********** End Class USourceEffectPhaserPreset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h

// ********** Begin Enum EPhaserLFOType ************************************************************
#define FOREACH_ENUM_EPHASERLFOTYPE(op) \
	op(EPhaserLFOType::Sine) \
	op(EPhaserLFOType::UpSaw) \
	op(EPhaserLFOType::DownSaw) \
	op(EPhaserLFOType::Square) \
	op(EPhaserLFOType::Triangle) \
	op(EPhaserLFOType::Exponential) \
	op(EPhaserLFOType::RandomSampleHold) \
	op(EPhaserLFOType::Count) 

enum class EPhaserLFOType : uint8;
template<> struct TIsUEnumClass<EPhaserLFOType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhaserLFOType>();
// ********** End Enum EPhaserLFOType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
