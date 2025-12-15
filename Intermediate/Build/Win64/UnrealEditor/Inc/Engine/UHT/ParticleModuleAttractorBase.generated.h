// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Attractor/ParticleModuleAttractorBase.h"

#ifdef ENGINE_ParticleModuleAttractorBase_generated_h
#error "ParticleModuleAttractorBase.generated.h already included, missing '#pragma once' in ParticleModuleAttractorBase.h"
#endif
#define ENGINE_ParticleModuleAttractorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleAttractorBase *********************************************
struct Z_Construct_UClass_UParticleModuleAttractorBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAttractorBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleAttractorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleAttractorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleAttractorBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleAttractorBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleAttractorBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleAttractorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleAttractorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleAttractorBase(UParticleModuleAttractorBase&&) = delete; \
	UParticleModuleAttractorBase(const UParticleModuleAttractorBase&) = delete; \
	NO_API virtual ~UParticleModuleAttractorBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleAttractorBase;

// ********** End Class UParticleModuleAttractorBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
