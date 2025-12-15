// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleSpriteEmitter.h"

#ifdef ENGINE_ParticleSpriteEmitter_generated_h
#error "ParticleSpriteEmitter.generated.h already included, missing '#pragma once' in ParticleSpriteEmitter.h"
#endif
#define ENGINE_ParticleSpriteEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleSpriteEmitter ***************************************************
struct Z_Construct_UClass_UParticleSpriteEmitter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleSpriteEmitter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSpriteEmitter(); \
	friend struct ::Z_Construct_UClass_UParticleSpriteEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleSpriteEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleSpriteEmitter, UParticleEmitter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleSpriteEmitter_NoRegister) \
	DECLARE_SERIALIZER(UParticleSpriteEmitter)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSpriteEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSpriteEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSpriteEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSpriteEmitter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleSpriteEmitter(UParticleSpriteEmitter&&) = delete; \
	UParticleSpriteEmitter(const UParticleSpriteEmitter&) = delete; \
	ENGINE_API virtual ~UParticleSpriteEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleSpriteEmitter;

// ********** End Class UParticleSpriteEmitter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h

// ********** Begin Enum EParticleScreenAlignment **************************************************
#define FOREACH_ENUM_EPARTICLESCREENALIGNMENT(op) \
	op(PSA_FacingCameraPosition) \
	op(PSA_Square) \
	op(PSA_Rectangle) \
	op(PSA_Velocity) \
	op(PSA_AwayFromCenter) \
	op(PSA_TypeSpecific) \
	op(PSA_FacingCameraDistanceBlend) 

enum EParticleScreenAlignment : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleScreenAlignment>();
// ********** End Enum EParticleScreenAlignment ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
