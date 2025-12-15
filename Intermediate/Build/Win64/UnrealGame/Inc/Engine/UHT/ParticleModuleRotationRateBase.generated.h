// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/RotationRate/ParticleModuleRotationRateBase.h"

#ifdef ENGINE_ParticleModuleRotationRateBase_generated_h
#error "ParticleModuleRotationRateBase.generated.h already included, missing '#pragma once' in ParticleModuleRotationRateBase.h"
#endif
#define ENGINE_ParticleModuleRotationRateBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleRotationRateBase ******************************************
struct Z_Construct_UClass_UParticleModuleRotationRateBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleRotationRateBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleRotationRateBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleRotationRateBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleRotationRateBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleRotationRateBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleRotationRateBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleRotationRateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleRotationRateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleRotationRateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleRotationRateBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleRotationRateBase(UParticleModuleRotationRateBase&&) = delete; \
	UParticleModuleRotationRateBase(const UParticleModuleRotationRateBase&) = delete; \
	NO_API virtual ~UParticleModuleRotationRateBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleRotationRateBase;

// ********** End Class UParticleModuleRotationRateBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
