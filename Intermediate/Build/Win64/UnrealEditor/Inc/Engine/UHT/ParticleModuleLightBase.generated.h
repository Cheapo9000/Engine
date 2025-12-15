// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Light/ParticleModuleLightBase.h"

#ifdef ENGINE_ParticleModuleLightBase_generated_h
#error "ParticleModuleLightBase.generated.h already included, missing '#pragma once' in ParticleModuleLightBase.h"
#endif
#define ENGINE_ParticleModuleLightBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLightBase *************************************************
struct Z_Construct_UClass_UParticleModuleLightBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLightBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLightBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLightBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLightBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLightBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLightBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLightBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLightBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLightBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLightBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLightBase(UParticleModuleLightBase&&) = delete; \
	UParticleModuleLightBase(const UParticleModuleLightBase&) = delete; \
	NO_API virtual ~UParticleModuleLightBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLightBase;

// ********** End Class UParticleModuleLightBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
