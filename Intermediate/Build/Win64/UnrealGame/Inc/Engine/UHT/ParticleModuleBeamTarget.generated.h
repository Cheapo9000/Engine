// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Beam/ParticleModuleBeamTarget.h"

#ifdef ENGINE_ParticleModuleBeamTarget_generated_h
#error "ParticleModuleBeamTarget.generated.h already included, missing '#pragma once' in ParticleModuleBeamTarget.h"
#endif
#define ENGINE_ParticleModuleBeamTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleBeamTarget ************************************************
struct Z_Construct_UClass_UParticleModuleBeamTarget_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamTarget(); \
	friend struct ::Z_Construct_UClass_UParticleModuleBeamTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleBeamTarget, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleBeamTarget)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleBeamTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleBeamTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamTarget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleBeamTarget(UParticleModuleBeamTarget&&) = delete; \
	UParticleModuleBeamTarget(const UParticleModuleBeamTarget&) = delete; \
	ENGINE_API virtual ~UParticleModuleBeamTarget();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleBeamTarget;

// ********** End Class UParticleModuleBeamTarget **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
