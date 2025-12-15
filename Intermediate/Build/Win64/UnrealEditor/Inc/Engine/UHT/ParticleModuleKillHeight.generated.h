// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Kill/ParticleModuleKillHeight.h"

#ifdef ENGINE_ParticleModuleKillHeight_generated_h
#error "ParticleModuleKillHeight.generated.h already included, missing '#pragma once' in ParticleModuleKillHeight.h"
#endif
#define ENGINE_ParticleModuleKillHeight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleKillHeight ************************************************
struct Z_Construct_UClass_UParticleModuleKillHeight_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillHeight_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleKillHeight(); \
	friend struct ::Z_Construct_UClass_UParticleModuleKillHeight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleKillHeight_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleKillHeight, UParticleModuleKillBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleKillHeight_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleKillHeight)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleKillHeight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleKillHeight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleKillHeight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleKillHeight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleKillHeight(UParticleModuleKillHeight&&) = delete; \
	UParticleModuleKillHeight(const UParticleModuleKillHeight&) = delete; \
	NO_API virtual ~UParticleModuleKillHeight();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleKillHeight;

// ********** End Class UParticleModuleKillHeight **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
