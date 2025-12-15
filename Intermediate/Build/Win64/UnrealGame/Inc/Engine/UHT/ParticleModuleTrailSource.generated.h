// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Trail/ParticleModuleTrailSource.h"

#ifdef ENGINE_ParticleModuleTrailSource_generated_h
#error "ParticleModuleTrailSource.generated.h already included, missing '#pragma once' in ParticleModuleTrailSource.h"
#endif
#define ENGINE_ParticleModuleTrailSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleTrailSource ***********************************************
struct Z_Construct_UClass_UParticleModuleTrailSource_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTrailSource(); \
	friend struct ::Z_Construct_UClass_UParticleModuleTrailSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleTrailSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleTrailSource, UParticleModuleTrailBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleTrailSource_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleTrailSource)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTrailSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTrailSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTrailSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTrailSource); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleTrailSource(UParticleModuleTrailSource&&) = delete; \
	UParticleModuleTrailSource(const UParticleModuleTrailSource&) = delete; \
	ENGINE_API virtual ~UParticleModuleTrailSource();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleTrailSource;

// ********** End Class UParticleModuleTrailSource *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h

// ********** Begin Enum ETrail2SourceMethod *******************************************************
#define FOREACH_ENUM_ETRAIL2SOURCEMETHOD(op) \
	op(PET2SRCM_Default) \
	op(PET2SRCM_Particle) \
	op(PET2SRCM_Actor) 

enum ETrail2SourceMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrail2SourceMethod>();
// ********** End Enum ETrail2SourceMethod *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
