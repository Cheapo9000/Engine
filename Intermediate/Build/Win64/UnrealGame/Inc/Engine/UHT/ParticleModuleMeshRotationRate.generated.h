// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/RotationRate/ParticleModuleMeshRotationRate.h"

#ifdef ENGINE_ParticleModuleMeshRotationRate_generated_h
#error "ParticleModuleMeshRotationRate.generated.h already included, missing '#pragma once' in ParticleModuleMeshRotationRate.h"
#endif
#define ENGINE_ParticleModuleMeshRotationRate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleMeshRotationRate ******************************************
struct Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleMeshRotationRate(); \
	friend struct ::Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleMeshRotationRate, UParticleModuleRotationRateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleMeshRotationRate)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleMeshRotationRate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleMeshRotationRate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleMeshRotationRate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleMeshRotationRate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleMeshRotationRate(UParticleModuleMeshRotationRate&&) = delete; \
	UParticleModuleMeshRotationRate(const UParticleModuleMeshRotationRate&) = delete; \
	ENGINE_API virtual ~UParticleModuleMeshRotationRate();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleMeshRotationRate;

// ********** End Class UParticleModuleMeshRotationRate ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
