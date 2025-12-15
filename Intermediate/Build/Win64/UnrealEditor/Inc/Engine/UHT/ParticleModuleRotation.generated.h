// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Rotation/ParticleModuleRotation.h"

#ifdef ENGINE_ParticleModuleRotation_generated_h
#error "ParticleModuleRotation.generated.h already included, missing '#pragma once' in ParticleModuleRotation.h"
#endif
#define ENGINE_ParticleModuleRotation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleRotation **************************************************
struct Z_Construct_UClass_UParticleModuleRotation_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotation_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleRotation(); \
	friend struct ::Z_Construct_UClass_UParticleModuleRotation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleRotation_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleRotation, UParticleModuleRotationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleRotation_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleRotation)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleRotation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleRotation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleRotation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleRotation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleRotation(UParticleModuleRotation&&) = delete; \
	UParticleModuleRotation(const UParticleModuleRotation&) = delete; \
	ENGINE_API virtual ~UParticleModuleRotation();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleRotation;

// ********** End Class UParticleModuleRotation ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
