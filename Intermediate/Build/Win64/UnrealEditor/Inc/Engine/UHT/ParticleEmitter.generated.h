// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleEmitter.h"

#ifdef ENGINE_ParticleEmitter_generated_h
#error "ParticleEmitter.generated.h already included, missing '#pragma once' in ParticleEmitter.h"
#endif
#define ENGINE_ParticleEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParticleBurst ****************************************************
struct Z_Construct_UScriptStruct_FParticleBurst_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleBurst_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleBurst;
// ********** End ScriptStruct FParticleBurst ******************************************************

// ********** Begin Class UParticleEmitter *********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_99_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleEmitter, ENGINE_API)


struct Z_Construct_UClass_UParticleEmitter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUParticleEmitter(); \
	friend struct ::Z_Construct_UClass_UParticleEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleEmitter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleEmitter_NoRegister) \
	DECLARE_SERIALIZER(UParticleEmitter) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_99_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleEmitter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleEmitter(UParticleEmitter&&) = delete; \
	UParticleEmitter(const UParticleEmitter&) = delete; \
	ENGINE_API virtual ~UParticleEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_96_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_99_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleEmitter;

// ********** End Class UParticleEmitter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h

// ********** Begin Enum EParticleBurstMethod ******************************************************
#define FOREACH_ENUM_EPARTICLEBURSTMETHOD(op) \
	op(EPBM_Instant) \
	op(EPBM_Interpolated) 

enum EParticleBurstMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleBurstMethod>();
// ********** End Enum EParticleBurstMethod ********************************************************

// ********** Begin Enum EParticleSubUVInterpMethod ************************************************
#define FOREACH_ENUM_EPARTICLESUBUVINTERPMETHOD(op) \
	op(PSUVIM_None) \
	op(PSUVIM_Linear) \
	op(PSUVIM_Linear_Blend) \
	op(PSUVIM_Random) \
	op(PSUVIM_Random_Blend) 

enum EParticleSubUVInterpMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleSubUVInterpMethod>();
// ********** End Enum EParticleSubUVInterpMethod **************************************************

// ********** Begin Enum EEmitterRenderMode ********************************************************
#define FOREACH_ENUM_EEMITTERRENDERMODE(op) \
	op(ERM_Normal) \
	op(ERM_Point) \
	op(ERM_Cross) \
	op(ERM_LightsOnly) \
	op(ERM_None) 

enum EEmitterRenderMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEmitterRenderMode>();
// ********** End Enum EEmitterRenderMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
