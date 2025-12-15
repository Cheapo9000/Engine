// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Modules/Location/ParticleModulePivotOffset.h"

#ifdef ENGINE_ParticleModulePivotOffset_generated_h
#error "ParticleModulePivotOffset.generated.h already included, missing '#pragma once' in ParticleModulePivotOffset.h"
#endif
#define ENGINE_ParticleModulePivotOffset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModulePivotOffset ***********************************************
struct Z_Construct_UClass_UParticleModulePivotOffset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModulePivotOffset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModulePivotOffset(); \
	friend struct ::Z_Construct_UClass_UParticleModulePivotOffset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModulePivotOffset_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModulePivotOffset, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModulePivotOffset_NoRegister) \
	DECLARE_SERIALIZER(UParticleModulePivotOffset)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModulePivotOffset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModulePivotOffset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModulePivotOffset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModulePivotOffset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModulePivotOffset(UParticleModulePivotOffset&&) = delete; \
	UParticleModulePivotOffset(const UParticleModulePivotOffset&) = delete; \
	ENGINE_API virtual ~UParticleModulePivotOffset();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModulePivotOffset;

// ********** End Class UParticleModulePivotOffset *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
