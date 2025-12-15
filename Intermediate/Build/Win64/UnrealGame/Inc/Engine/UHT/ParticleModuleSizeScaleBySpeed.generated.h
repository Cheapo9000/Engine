// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Size/ParticleModuleSizeScaleBySpeed.h"

#ifdef ENGINE_ParticleModuleSizeScaleBySpeed_generated_h
#error "ParticleModuleSizeScaleBySpeed.generated.h already included, missing '#pragma once' in ParticleModuleSizeScaleBySpeed.h"
#endif
#define ENGINE_ParticleModuleSizeScaleBySpeed_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleSizeScaleBySpeed ******************************************
struct Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSizeScaleBySpeed(); \
	friend struct ::Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleSizeScaleBySpeed, UParticleModuleSizeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleSizeScaleBySpeed)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleSizeScaleBySpeed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSizeScaleBySpeed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleSizeScaleBySpeed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSizeScaleBySpeed); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleSizeScaleBySpeed(UParticleModuleSizeScaleBySpeed&&) = delete; \
	UParticleModuleSizeScaleBySpeed(const UParticleModuleSizeScaleBySpeed&) = delete; \
	ENGINE_API virtual ~UParticleModuleSizeScaleBySpeed();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleSizeScaleBySpeed;

// ********** End Class UParticleModuleSizeScaleBySpeed ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
