// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Beam/ParticleModuleBeamSource.h"

#ifdef ENGINE_ParticleModuleBeamSource_generated_h
#error "ParticleModuleBeamSource.generated.h already included, missing '#pragma once' in ParticleModuleBeamSource.h"
#endif
#define ENGINE_ParticleModuleBeamSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleBeamSource ************************************************
struct Z_Construct_UClass_UParticleModuleBeamSource_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamSource_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamSource(); \
	friend struct ::Z_Construct_UClass_UParticleModuleBeamSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleBeamSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleBeamSource, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleBeamSource_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleBeamSource)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleBeamSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleBeamSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamSource); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleBeamSource(UParticleModuleBeamSource&&) = delete; \
	UParticleModuleBeamSource(const UParticleModuleBeamSource&) = delete; \
	ENGINE_API virtual ~UParticleModuleBeamSource();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleBeamSource;

// ********** End Class UParticleModuleBeamSource **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
