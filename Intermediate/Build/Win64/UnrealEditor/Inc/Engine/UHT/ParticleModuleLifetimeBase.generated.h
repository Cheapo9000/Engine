// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Lifetime/ParticleModuleLifetimeBase.h"

#ifdef ENGINE_ParticleModuleLifetimeBase_generated_h
#error "ParticleModuleLifetimeBase.generated.h already included, missing '#pragma once' in ParticleModuleLifetimeBase.h"
#endif
#define ENGINE_ParticleModuleLifetimeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLifetimeBase **********************************************
struct Z_Construct_UClass_UParticleModuleLifetimeBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLifetimeBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLifetimeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLifetimeBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLifetimeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLifetimeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLifetimeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLifetimeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLifetimeBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLifetimeBase(UParticleModuleLifetimeBase&&) = delete; \
	UParticleModuleLifetimeBase(const UParticleModuleLifetimeBase&) = delete; \
	NO_API virtual ~UParticleModuleLifetimeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLifetimeBase;

// ********** End Class UParticleModuleLifetimeBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
