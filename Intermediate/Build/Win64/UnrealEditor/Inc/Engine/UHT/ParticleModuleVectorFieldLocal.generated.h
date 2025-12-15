// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/VectorField/ParticleModuleVectorFieldLocal.h"

#ifdef ENGINE_ParticleModuleVectorFieldLocal_generated_h
#error "ParticleModuleVectorFieldLocal.generated.h already included, missing '#pragma once' in ParticleModuleVectorFieldLocal.h"
#endif
#define ENGINE_ParticleModuleVectorFieldLocal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleVectorFieldLocal ******************************************
struct Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleVectorFieldLocal(); \
	friend struct ::Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleVectorFieldLocal, UParticleModuleVectorFieldBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleVectorFieldLocal)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleVectorFieldLocal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleVectorFieldLocal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleVectorFieldLocal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleVectorFieldLocal); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleVectorFieldLocal(UParticleModuleVectorFieldLocal&&) = delete; \
	UParticleModuleVectorFieldLocal(const UParticleModuleVectorFieldLocal&) = delete; \
	ENGINE_API virtual ~UParticleModuleVectorFieldLocal();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleVectorFieldLocal;

// ********** End Class UParticleModuleVectorFieldLocal ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
