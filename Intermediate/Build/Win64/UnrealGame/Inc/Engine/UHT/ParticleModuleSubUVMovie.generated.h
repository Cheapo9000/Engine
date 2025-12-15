// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/SubUV/ParticleModuleSubUVMovie.h"

#ifdef ENGINE_ParticleModuleSubUVMovie_generated_h
#error "ParticleModuleSubUVMovie.generated.h already included, missing '#pragma once' in ParticleModuleSubUVMovie.h"
#endif
#define ENGINE_ParticleModuleSubUVMovie_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleSubUVMovie ************************************************
struct Z_Construct_UClass_UParticleModuleSubUVMovie_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSubUVMovie(); \
	friend struct ::Z_Construct_UClass_UParticleModuleSubUVMovie_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleSubUVMovie, UParticleModuleSubUV, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleSubUVMovie)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleSubUVMovie(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSubUVMovie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleSubUVMovie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSubUVMovie); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleSubUVMovie(UParticleModuleSubUVMovie&&) = delete; \
	UParticleModuleSubUVMovie(const UParticleModuleSubUVMovie&) = delete; \
	ENGINE_API virtual ~UParticleModuleSubUVMovie();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleSubUVMovie;

// ********** End Class UParticleModuleSubUVMovie **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
