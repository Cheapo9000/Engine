// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Light/ParticleModuleLight_Seeded.h"

#ifdef ENGINE_ParticleModuleLight_Seeded_generated_h
#error "ParticleModuleLight_Seeded.generated.h already included, missing '#pragma once' in ParticleModuleLight_Seeded.h"
#endif
#define ENGINE_ParticleModuleLight_Seeded_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLight_Seeded **********************************************
struct Z_Construct_UClass_UParticleModuleLight_Seeded_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight_Seeded_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_Seeded_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLight_Seeded(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLight_Seeded_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLight_Seeded_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLight_Seeded, UParticleModuleLight, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLight_Seeded_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLight_Seeded)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_Seeded_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLight_Seeded(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLight_Seeded) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLight_Seeded); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLight_Seeded); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLight_Seeded(UParticleModuleLight_Seeded&&) = delete; \
	UParticleModuleLight_Seeded(const UParticleModuleLight_Seeded&) = delete; \
	ENGINE_API virtual ~UParticleModuleLight_Seeded();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_Seeded_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_Seeded_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_Seeded_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_Seeded_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLight_Seeded;

// ********** End Class UParticleModuleLight_Seeded ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_Seeded_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
