// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Beam/ParticleModuleBeamModifier.h"

#ifdef ENGINE_ParticleModuleBeamModifier_generated_h
#error "ParticleModuleBeamModifier.generated.h already included, missing '#pragma once' in ParticleModuleBeamModifier.h"
#endif
#define ENGINE_ParticleModuleBeamModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBeamModifierOptions **********************************************
struct Z_Construct_UScriptStruct_FBeamModifierOptions_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBeamModifierOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBeamModifierOptions;
// ********** End ScriptStruct FBeamModifierOptions ************************************************

// ********** Begin Class UParticleModuleBeamModifier **********************************************
struct Z_Construct_UClass_UParticleModuleBeamModifier_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamModifier(); \
	friend struct ::Z_Construct_UClass_UParticleModuleBeamModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleBeamModifier, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleBeamModifier)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleBeamModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleBeamModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamModifier); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleBeamModifier(UParticleModuleBeamModifier&&) = delete; \
	UParticleModuleBeamModifier(const UParticleModuleBeamModifier&) = delete; \
	NO_API virtual ~UParticleModuleBeamModifier();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_64_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleBeamModifier;

// ********** End Class UParticleModuleBeamModifier ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h

// ********** Begin Enum BeamModifierType **********************************************************
#define FOREACH_ENUM_BEAMMODIFIERTYPE(op) \
	op(PEB2MT_Source) \
	op(PEB2MT_Target) 

enum BeamModifierType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<BeamModifierType>();
// ********** End Enum BeamModifierType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
