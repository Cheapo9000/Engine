// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocation_Seeded.h"

#ifdef ENGINE_ParticleModuleLocation_Seeded_generated_h
#error "ParticleModuleLocation_Seeded.generated.h already included, missing '#pragma once' in ParticleModuleLocation_Seeded.h"
#endif
#define ENGINE_ParticleModuleLocation_Seeded_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocation_Seeded *******************************************
struct Z_Construct_UClass_UParticleModuleLocation_Seeded_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation_Seeded_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_Seeded_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocation_Seeded(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocation_Seeded_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocation_Seeded_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocation_Seeded, UParticleModuleLocation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocation_Seeded_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocation_Seeded)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_Seeded_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocation_Seeded(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocation_Seeded) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocation_Seeded); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocation_Seeded); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocation_Seeded(UParticleModuleLocation_Seeded&&) = delete; \
	UParticleModuleLocation_Seeded(const UParticleModuleLocation_Seeded&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocation_Seeded();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_Seeded_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_Seeded_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_Seeded_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_Seeded_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocation_Seeded;

// ********** End Class UParticleModuleLocation_Seeded *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_Seeded_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
