// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Rotation/ParticleModuleRotationBase.h"

#ifdef ENGINE_ParticleModuleRotationBase_generated_h
#error "ParticleModuleRotationBase.generated.h already included, missing '#pragma once' in ParticleModuleRotationBase.h"
#endif
#define ENGINE_ParticleModuleRotationBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleRotationBase **********************************************
struct Z_Construct_UClass_UParticleModuleRotationBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleRotationBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleRotationBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleRotationBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleRotationBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleRotationBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleRotationBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleRotationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleRotationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleRotationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleRotationBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleRotationBase(UParticleModuleRotationBase&&) = delete; \
	UParticleModuleRotationBase(const UParticleModuleRotationBase&) = delete; \
	NO_API virtual ~UParticleModuleRotationBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleRotationBase;

// ********** End Class UParticleModuleRotationBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
