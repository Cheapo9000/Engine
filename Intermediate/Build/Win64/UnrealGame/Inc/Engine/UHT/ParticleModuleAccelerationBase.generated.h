// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Acceleration/ParticleModuleAccelerationBase.h"

#ifdef ENGINE_ParticleModuleAccelerationBase_generated_h
#error "ParticleModuleAccelerationBase.generated.h already included, missing '#pragma once' in ParticleModuleAccelerationBase.h"
#endif
#define ENGINE_ParticleModuleAccelerationBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleAccelerationBase ******************************************
struct Z_Construct_UClass_UParticleModuleAccelerationBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAccelerationBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleAccelerationBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleAccelerationBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleAccelerationBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleAccelerationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAccelerationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleAccelerationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAccelerationBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleAccelerationBase(UParticleModuleAccelerationBase&&) = delete; \
	UParticleModuleAccelerationBase(const UParticleModuleAccelerationBase&) = delete; \
	NO_API virtual ~UParticleModuleAccelerationBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleAccelerationBase;

// ********** End Class UParticleModuleAccelerationBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
