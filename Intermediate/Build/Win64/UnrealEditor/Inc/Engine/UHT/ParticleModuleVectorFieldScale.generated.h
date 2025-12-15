// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/VectorField/ParticleModuleVectorFieldScale.h"

#ifdef ENGINE_ParticleModuleVectorFieldScale_generated_h
#error "ParticleModuleVectorFieldScale.generated.h already included, missing '#pragma once' in ParticleModuleVectorFieldScale.h"
#endif
#define ENGINE_ParticleModuleVectorFieldScale_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleVectorFieldScale ******************************************
struct Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleVectorFieldScale(); \
	friend struct ::Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleVectorFieldScale, UParticleModuleVectorFieldBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleVectorFieldScale)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleVectorFieldScale(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleVectorFieldScale) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleVectorFieldScale); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleVectorFieldScale); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleVectorFieldScale(UParticleModuleVectorFieldScale&&) = delete; \
	UParticleModuleVectorFieldScale(const UParticleModuleVectorFieldScale&) = delete; \
	ENGINE_API virtual ~UParticleModuleVectorFieldScale();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleVectorFieldScale;

// ********** End Class UParticleModuleVectorFieldScale ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
