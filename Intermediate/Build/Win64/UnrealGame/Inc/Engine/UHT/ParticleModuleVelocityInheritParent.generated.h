// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Velocity/ParticleModuleVelocityInheritParent.h"

#ifdef ENGINE_ParticleModuleVelocityInheritParent_generated_h
#error "ParticleModuleVelocityInheritParent.generated.h already included, missing '#pragma once' in ParticleModuleVelocityInheritParent.h"
#endif
#define ENGINE_ParticleModuleVelocityInheritParent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleVelocityInheritParent *************************************
struct Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleVelocityInheritParent(); \
	friend struct ::Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleVelocityInheritParent, UParticleModuleVelocityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleVelocityInheritParent)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleVelocityInheritParent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleVelocityInheritParent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleVelocityInheritParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleVelocityInheritParent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleVelocityInheritParent(UParticleModuleVelocityInheritParent&&) = delete; \
	UParticleModuleVelocityInheritParent(const UParticleModuleVelocityInheritParent&) = delete; \
	ENGINE_API virtual ~UParticleModuleVelocityInheritParent();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleVelocityInheritParent;

// ********** End Class UParticleModuleVelocityInheritParent ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityInheritParent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
