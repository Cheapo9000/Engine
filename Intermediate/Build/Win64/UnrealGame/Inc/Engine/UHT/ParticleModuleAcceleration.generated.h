// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Acceleration/ParticleModuleAcceleration.h"

#ifdef ENGINE_ParticleModuleAcceleration_generated_h
#error "ParticleModuleAcceleration.generated.h already included, missing '#pragma once' in ParticleModuleAcceleration.h"
#endif
#define ENGINE_ParticleModuleAcceleration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleAcceleration **********************************************
struct Z_Construct_UClass_UParticleModuleAcceleration_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAcceleration_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAcceleration(); \
	friend struct ::Z_Construct_UClass_UParticleModuleAcceleration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleAcceleration_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleAcceleration, UParticleModuleAccelerationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleAcceleration_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleAcceleration)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAcceleration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAcceleration) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAcceleration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAcceleration); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleAcceleration(UParticleModuleAcceleration&&) = delete; \
	UParticleModuleAcceleration(const UParticleModuleAcceleration&) = delete; \
	ENGINE_API virtual ~UParticleModuleAcceleration();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleAcceleration;

// ********** End Class UParticleModuleAcceleration ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAcceleration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
