// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Color/ParticleModuleColor_Seeded.h"

#ifdef ENGINE_ParticleModuleColor_Seeded_generated_h
#error "ParticleModuleColor_Seeded.generated.h already included, missing '#pragma once' in ParticleModuleColor_Seeded.h"
#endif
#define ENGINE_ParticleModuleColor_Seeded_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleColor_Seeded **********************************************
struct Z_Construct_UClass_UParticleModuleColor_Seeded_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_Seeded_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_Seeded_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleColor_Seeded(); \
	friend struct ::Z_Construct_UClass_UParticleModuleColor_Seeded_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleColor_Seeded_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleColor_Seeded, UParticleModuleColor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleColor_Seeded_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleColor_Seeded)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_Seeded_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleColor_Seeded(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleColor_Seeded) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleColor_Seeded); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleColor_Seeded); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleColor_Seeded(UParticleModuleColor_Seeded&&) = delete; \
	UParticleModuleColor_Seeded(const UParticleModuleColor_Seeded&) = delete; \
	NO_API virtual ~UParticleModuleColor_Seeded();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_Seeded_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_Seeded_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_Seeded_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_Seeded_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleColor_Seeded;

// ********** End Class UParticleModuleColor_Seeded ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_Seeded_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
