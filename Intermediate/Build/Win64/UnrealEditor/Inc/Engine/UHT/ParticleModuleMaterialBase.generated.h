// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Material/ParticleModuleMaterialBase.h"

#ifdef ENGINE_ParticleModuleMaterialBase_generated_h
#error "ParticleModuleMaterialBase.generated.h already included, missing '#pragma once' in ParticleModuleMaterialBase.h"
#endif
#define ENGINE_ParticleModuleMaterialBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleMaterialBase **********************************************
struct Z_Construct_UClass_UParticleModuleMaterialBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleMaterialBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleMaterialBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleMaterialBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleMaterialBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleMaterialBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleMaterialBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleMaterialBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleMaterialBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleMaterialBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleMaterialBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleMaterialBase(UParticleModuleMaterialBase&&) = delete; \
	UParticleModuleMaterialBase(const UParticleModuleMaterialBase&) = delete; \
	NO_API virtual ~UParticleModuleMaterialBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleMaterialBase;

// ********** End Class UParticleModuleMaterialBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
