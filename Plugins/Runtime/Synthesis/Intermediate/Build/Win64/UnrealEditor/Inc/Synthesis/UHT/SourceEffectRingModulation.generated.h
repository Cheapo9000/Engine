// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectRingModulation.h"

#ifdef SYNTHESIS_SourceEffectRingModulation_generated_h
#error "SourceEffectRingModulation.generated.h already included, missing '#pragma once' in SourceEffectRingModulation.h"
#endif
#define SYNTHESIS_SourceEffectRingModulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectRingModulationSettings;

// ********** Begin ScriptStruct FSourceEffectRingModulationSettings *******************************
struct Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectRingModulationSettings;
// ********** End ScriptStruct FSourceEffectRingModulationSettings *********************************

// ********** Begin Class USourceEffectRingModulationPreset ****************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectRingModulationPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectRingModulationPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectRingModulationPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectRingModulationPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectRingModulationPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectRingModulationPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectRingModulationPreset(USourceEffectRingModulationPreset&&) = delete; \
	USourceEffectRingModulationPreset(const USourceEffectRingModulationPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectRingModulationPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectRingModulationPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectRingModulationPreset) \
	SYNTHESIS_API virtual ~USourceEffectRingModulationPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_71_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectRingModulationPreset;

// ********** End Class USourceEffectRingModulationPreset ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h

// ********** Begin Enum ERingModulatorTypeSourceEffect ********************************************
#define FOREACH_ENUM_ERINGMODULATORTYPESOURCEEFFECT(op) \
	op(ERingModulatorTypeSourceEffect::Sine) \
	op(ERingModulatorTypeSourceEffect::Saw) \
	op(ERingModulatorTypeSourceEffect::Triangle) \
	op(ERingModulatorTypeSourceEffect::Square) \
	op(ERingModulatorTypeSourceEffect::Count) 

enum class ERingModulatorTypeSourceEffect : uint8;
template<> struct TIsUEnumClass<ERingModulatorTypeSourceEffect> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERingModulatorTypeSourceEffect>();
// ********** End Enum ERingModulatorTypeSourceEffect **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
