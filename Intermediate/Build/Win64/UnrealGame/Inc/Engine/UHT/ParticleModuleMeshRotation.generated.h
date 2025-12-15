// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Rotation/ParticleModuleMeshRotation.h"

#ifdef ENGINE_ParticleModuleMeshRotation_generated_h
#error "ParticleModuleMeshRotation.generated.h already included, missing '#pragma once' in ParticleModuleMeshRotation.h"
#endif
#define ENGINE_ParticleModuleMeshRotation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleMeshRotation **********************************************
struct Z_Construct_UClass_UParticleModuleMeshRotation_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleMeshRotation(); \
	friend struct ::Z_Construct_UClass_UParticleModuleMeshRotation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleMeshRotation, UParticleModuleRotationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleMeshRotation)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleMeshRotation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleMeshRotation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleMeshRotation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleMeshRotation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleMeshRotation(UParticleModuleMeshRotation&&) = delete; \
	UParticleModuleMeshRotation(const UParticleModuleMeshRotation&) = delete; \
	ENGINE_API virtual ~UParticleModuleMeshRotation();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleMeshRotation;

// ********** End Class UParticleModuleMeshRotation ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
