// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/VectorField/ParticleModuleVectorFieldBase.h"

#ifdef ENGINE_ParticleModuleVectorFieldBase_generated_h
#error "ParticleModuleVectorFieldBase.generated.h already included, missing '#pragma once' in ParticleModuleVectorFieldBase.h"
#endif
#define ENGINE_ParticleModuleVectorFieldBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleVectorFieldBase *******************************************
struct Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleVectorFieldBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleVectorFieldBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleVectorFieldBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleVectorFieldBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleVectorFieldBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleVectorFieldBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleVectorFieldBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleVectorFieldBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleVectorFieldBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleVectorFieldBase(UParticleModuleVectorFieldBase&&) = delete; \
	UParticleModuleVectorFieldBase(const UParticleModuleVectorFieldBase&) = delete; \
	NO_API virtual ~UParticleModuleVectorFieldBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleVectorFieldBase;

// ********** End Class UParticleModuleVectorFieldBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
