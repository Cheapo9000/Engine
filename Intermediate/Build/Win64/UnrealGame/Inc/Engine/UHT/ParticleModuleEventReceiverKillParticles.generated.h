// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Event/ParticleModuleEventReceiverKillParticles.h"

#ifdef ENGINE_ParticleModuleEventReceiverKillParticles_generated_h
#error "ParticleModuleEventReceiverKillParticles.generated.h already included, missing '#pragma once' in ParticleModuleEventReceiverKillParticles.h"
#endif
#define ENGINE_ParticleModuleEventReceiverKillParticles_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleEventReceiverKillParticles ********************************
struct Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventReceiverKillParticles(); \
	friend struct ::Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleEventReceiverKillParticles, UParticleModuleEventReceiverBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleEventReceiverKillParticles)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleEventReceiverKillParticles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventReceiverKillParticles) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleEventReceiverKillParticles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventReceiverKillParticles); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleEventReceiverKillParticles(UParticleModuleEventReceiverKillParticles&&) = delete; \
	UParticleModuleEventReceiverKillParticles(const UParticleModuleEventReceiverKillParticles&) = delete; \
	NO_API virtual ~UParticleModuleEventReceiverKillParticles();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleEventReceiverKillParticles;

// ********** End Class UParticleModuleEventReceiverKillParticles **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverKillParticles_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
