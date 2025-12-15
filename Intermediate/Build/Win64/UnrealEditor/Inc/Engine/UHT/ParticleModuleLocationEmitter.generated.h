// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationEmitter.h"

#ifdef ENGINE_ParticleModuleLocationEmitter_generated_h
#error "ParticleModuleLocationEmitter.generated.h already included, missing '#pragma once' in ParticleModuleLocationEmitter.h"
#endif
#define ENGINE_ParticleModuleLocationEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocationEmitter *******************************************
struct Z_Construct_UClass_UParticleModuleLocationEmitter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationEmitter(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationEmitter, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationEmitter)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationEmitter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationEmitter(UParticleModuleLocationEmitter&&) = delete; \
	UParticleModuleLocationEmitter(const UParticleModuleLocationEmitter&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationEmitter;

// ********** End Class UParticleModuleLocationEmitter *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h

// ********** Begin Enum ELocationEmitterSelectionMethod *******************************************
#define FOREACH_ENUM_ELOCATIONEMITTERSELECTIONMETHOD(op) \
	op(ELESM_Random) \
	op(ELESM_Sequential) 

enum ELocationEmitterSelectionMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocationEmitterSelectionMethod>();
// ********** End Enum ELocationEmitterSelectionMethod *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
