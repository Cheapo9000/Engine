// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Rotation/ParticleModuleRotation_Seeded.h"

#ifdef ENGINE_ParticleModuleRotation_Seeded_generated_h
#error "ParticleModuleRotation_Seeded.generated.h already included, missing '#pragma once' in ParticleModuleRotation_Seeded.h"
#endif
#define ENGINE_ParticleModuleRotation_Seeded_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleRotation_Seeded *******************************************
struct Z_Construct_UClass_UParticleModuleRotation_Seeded_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotation_Seeded_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_Seeded_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleRotation_Seeded(); \
	friend struct ::Z_Construct_UClass_UParticleModuleRotation_Seeded_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleRotation_Seeded_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleRotation_Seeded, UParticleModuleRotation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleRotation_Seeded_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleRotation_Seeded)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_Seeded_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleRotation_Seeded(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleRotation_Seeded) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleRotation_Seeded); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleRotation_Seeded); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleRotation_Seeded(UParticleModuleRotation_Seeded&&) = delete; \
	UParticleModuleRotation_Seeded(const UParticleModuleRotation_Seeded&) = delete; \
	NO_API virtual ~UParticleModuleRotation_Seeded();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_Seeded_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_Seeded_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_Seeded_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_Seeded_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleRotation_Seeded;

// ********** End Class UParticleModuleRotation_Seeded *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_Seeded_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
