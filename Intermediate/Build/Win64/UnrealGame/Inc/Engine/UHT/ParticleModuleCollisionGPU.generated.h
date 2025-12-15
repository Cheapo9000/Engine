// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Collision/ParticleModuleCollisionGPU.h"

#ifdef ENGINE_ParticleModuleCollisionGPU_generated_h
#error "ParticleModuleCollisionGPU.generated.h already included, missing '#pragma once' in ParticleModuleCollisionGPU.h"
#endif
#define ENGINE_ParticleModuleCollisionGPU_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleCollisionGPU **********************************************
struct Z_Construct_UClass_UParticleModuleCollisionGPU_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionGPU_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleCollisionGPU(); \
	friend struct ::Z_Construct_UClass_UParticleModuleCollisionGPU_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleCollisionGPU_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleCollisionGPU, UParticleModuleCollisionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleCollisionGPU_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleCollisionGPU)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleCollisionGPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionGPU) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleCollisionGPU); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionGPU); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleCollisionGPU(UParticleModuleCollisionGPU&&) = delete; \
	UParticleModuleCollisionGPU(const UParticleModuleCollisionGPU&) = delete; \
	ENGINE_API virtual ~UParticleModuleCollisionGPU();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleCollisionGPU;

// ********** End Class UParticleModuleCollisionGPU ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h

// ********** Begin Enum EParticleCollisionResponse ************************************************
#define FOREACH_ENUM_EPARTICLECOLLISIONRESPONSE(op) \
	op(EParticleCollisionResponse::Bounce) \
	op(EParticleCollisionResponse::Stop) \
	op(EParticleCollisionResponse::Kill) 

namespace EParticleCollisionResponse { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleCollisionResponse::Type>();
// ********** End Enum EParticleCollisionResponse **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
