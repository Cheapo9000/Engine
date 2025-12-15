// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Acceleration/ParticleModuleAccelerationConstant.h"

#ifdef ENGINE_ParticleModuleAccelerationConstant_generated_h
#error "ParticleModuleAccelerationConstant.generated.h already included, missing '#pragma once' in ParticleModuleAccelerationConstant.h"
#endif
#define ENGINE_ParticleModuleAccelerationConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleAccelerationConstant **************************************
struct Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAccelerationConstant(); \
	friend struct ::Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleAccelerationConstant, UParticleModuleAccelerationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleAccelerationConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAccelerationConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAccelerationConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAccelerationConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAccelerationConstant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleAccelerationConstant(UParticleModuleAccelerationConstant&&) = delete; \
	UParticleModuleAccelerationConstant(const UParticleModuleAccelerationConstant&) = delete; \
	ENGINE_API virtual ~UParticleModuleAccelerationConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleAccelerationConstant;

// ********** End Class UParticleModuleAccelerationConstant ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
