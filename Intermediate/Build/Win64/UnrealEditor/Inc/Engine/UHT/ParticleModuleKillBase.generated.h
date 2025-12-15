// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Kill/ParticleModuleKillBase.h"

#ifdef ENGINE_ParticleModuleKillBase_generated_h
#error "ParticleModuleKillBase.generated.h already included, missing '#pragma once' in ParticleModuleKillBase.h"
#endif
#define ENGINE_ParticleModuleKillBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleKillBase **************************************************
struct Z_Construct_UClass_UParticleModuleKillBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleKillBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleKillBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleKillBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleKillBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleKillBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleKillBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleKillBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleKillBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleKillBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleKillBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleKillBase(UParticleModuleKillBase&&) = delete; \
	UParticleModuleKillBase(const UParticleModuleKillBase&) = delete; \
	NO_API virtual ~UParticleModuleKillBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleKillBase;

// ********** End Class UParticleModuleKillBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
