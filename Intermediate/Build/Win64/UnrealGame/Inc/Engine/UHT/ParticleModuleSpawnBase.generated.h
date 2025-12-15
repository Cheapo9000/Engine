// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Spawn/ParticleModuleSpawnBase.h"

#ifdef ENGINE_ParticleModuleSpawnBase_generated_h
#error "ParticleModuleSpawnBase.generated.h already included, missing '#pragma once' in ParticleModuleSpawnBase.h"
#endif
#define ENGINE_ParticleModuleSpawnBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleSpawnBase *************************************************
struct Z_Construct_UClass_UParticleModuleSpawnBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSpawnBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleSpawnBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleSpawnBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleSpawnBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleSpawnBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSpawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleSpawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSpawnBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleSpawnBase(UParticleModuleSpawnBase&&) = delete; \
	UParticleModuleSpawnBase(const UParticleModuleSpawnBase&) = delete; \
	NO_API virtual ~UParticleModuleSpawnBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleSpawnBase;

// ********** End Class UParticleModuleSpawnBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
