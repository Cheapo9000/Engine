// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Color/ParticleModuleColorOverLife.h"

#ifdef ENGINE_ParticleModuleColorOverLife_generated_h
#error "ParticleModuleColorOverLife.generated.h already included, missing '#pragma once' in ParticleModuleColorOverLife.h"
#endif
#define ENGINE_ParticleModuleColorOverLife_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleColorOverLife *********************************************
struct Z_Construct_UClass_UParticleModuleColorOverLife_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleColorOverLife(); \
	friend struct ::Z_Construct_UClass_UParticleModuleColorOverLife_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleColorOverLife, UParticleModuleColorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleColorOverLife)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleColorOverLife(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleColorOverLife) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleColorOverLife); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleColorOverLife); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleColorOverLife(UParticleModuleColorOverLife&&) = delete; \
	UParticleModuleColorOverLife(const UParticleModuleColorOverLife&) = delete; \
	ENGINE_API virtual ~UParticleModuleColorOverLife();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleColorOverLife;

// ********** End Class UParticleModuleColorOverLife ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
