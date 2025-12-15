// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationBase.h"

#ifdef ENGINE_ParticleModuleLocationBase_generated_h
#error "ParticleModuleLocationBase.generated.h already included, missing '#pragma once' in ParticleModuleLocationBase.h"
#endif
#define ENGINE_ParticleModuleLocationBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocationBase **********************************************
struct Z_Construct_UClass_UParticleModuleLocationBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationBase(UParticleModuleLocationBase&&) = delete; \
	UParticleModuleLocationBase(const UParticleModuleLocationBase&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationBase;

// ********** End Class UParticleModuleLocationBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
