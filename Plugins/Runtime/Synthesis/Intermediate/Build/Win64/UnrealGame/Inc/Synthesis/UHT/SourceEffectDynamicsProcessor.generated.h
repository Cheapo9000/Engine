// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectDynamicsProcessor.h"

#ifdef SYNTHESIS_SourceEffectDynamicsProcessor_generated_h
#error "SourceEffectDynamicsProcessor.generated.h already included, missing '#pragma once' in SourceEffectDynamicsProcessor.h"
#endif
#define SYNTHESIS_SourceEffectDynamicsProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectDynamicsProcessorSettings;

// ********** Begin ScriptStruct FSourceEffectDynamicsProcessorSettings ****************************
struct Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectDynamicsProcessorSettings;
// ********** End ScriptStruct FSourceEffectDynamicsProcessorSettings ******************************

// ********** Begin Class USourceEffectDynamicsProcessorPreset *************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectDynamicsProcessorPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectDynamicsProcessorPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectDynamicsProcessorPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectDynamicsProcessorPreset(USourceEffectDynamicsProcessorPreset&&) = delete; \
	USourceEffectDynamicsProcessorPreset(const USourceEffectDynamicsProcessorPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectDynamicsProcessorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectDynamicsProcessorPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectDynamicsProcessorPreset) \
	SYNTHESIS_API virtual ~USourceEffectDynamicsProcessorPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_118_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectDynamicsProcessorPreset;

// ********** End Class USourceEffectDynamicsProcessorPreset ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h

// ********** Begin Enum ESourceEffectDynamicsProcessorType ****************************************
#define FOREACH_ENUM_ESOURCEEFFECTDYNAMICSPROCESSORTYPE(op) \
	op(ESourceEffectDynamicsProcessorType::Compressor) \
	op(ESourceEffectDynamicsProcessorType::Limiter) \
	op(ESourceEffectDynamicsProcessorType::Expander) \
	op(ESourceEffectDynamicsProcessorType::Gate) \
	op(ESourceEffectDynamicsProcessorType::UpwardsCompressor) \
	op(ESourceEffectDynamicsProcessorType::Count) 

enum class ESourceEffectDynamicsProcessorType : uint8;
template<> struct TIsUEnumClass<ESourceEffectDynamicsProcessorType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectDynamicsProcessorType>();
// ********** End Enum ESourceEffectDynamicsProcessorType ******************************************

// ********** Begin Enum ESourceEffectDynamicsPeakMode *********************************************
#define FOREACH_ENUM_ESOURCEEFFECTDYNAMICSPEAKMODE(op) \
	op(ESourceEffectDynamicsPeakMode::MeanSquared) \
	op(ESourceEffectDynamicsPeakMode::RootMeanSquared) \
	op(ESourceEffectDynamicsPeakMode::Peak) \
	op(ESourceEffectDynamicsPeakMode::Count) 

enum class ESourceEffectDynamicsPeakMode : uint8;
template<> struct TIsUEnumClass<ESourceEffectDynamicsPeakMode> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceEffectDynamicsPeakMode>();
// ********** End Enum ESourceEffectDynamicsPeakMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
