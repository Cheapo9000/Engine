// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Velocity/ParticleModuleVelocityBase.h"

#ifdef ENGINE_ParticleModuleVelocityBase_generated_h
#error "ParticleModuleVelocityBase.generated.h already included, missing '#pragma once' in ParticleModuleVelocityBase.h"
#endif
#define ENGINE_ParticleModuleVelocityBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleVelocityBase **********************************************
struct Z_Construct_UClass_UParticleModuleVelocityBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleVelocityBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleVelocityBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleVelocityBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleVelocityBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleVelocityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleVelocityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleVelocityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleVelocityBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleVelocityBase(UParticleModuleVelocityBase&&) = delete; \
	UParticleModuleVelocityBase(const UParticleModuleVelocityBase&) = delete; \
	NO_API virtual ~UParticleModuleVelocityBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleVelocityBase;

// ********** End Class UParticleModuleVelocityBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
