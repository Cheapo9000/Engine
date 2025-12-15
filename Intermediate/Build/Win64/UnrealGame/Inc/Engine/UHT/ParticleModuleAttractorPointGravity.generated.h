// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Attractor/ParticleModuleAttractorPointGravity.h"

#ifdef ENGINE_ParticleModuleAttractorPointGravity_generated_h
#error "ParticleModuleAttractorPointGravity.generated.h already included, missing '#pragma once' in ParticleModuleAttractorPointGravity.h"
#endif
#define ENGINE_ParticleModuleAttractorPointGravity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleAttractorPointGravity *************************************
struct Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAttractorPointGravity(); \
	friend struct ::Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleAttractorPointGravity, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleAttractorPointGravity)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleAttractorPointGravity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorPointGravity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleAttractorPointGravity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorPointGravity); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleAttractorPointGravity(UParticleModuleAttractorPointGravity&&) = delete; \
	UParticleModuleAttractorPointGravity(const UParticleModuleAttractorPointGravity&) = delete; \
	NO_API virtual ~UParticleModuleAttractorPointGravity();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleAttractorPointGravity;

// ********** End Class UParticleModuleAttractorPointGravity ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPointGravity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
