// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationWorldOffset.h"

#ifdef ENGINE_ParticleModuleLocationWorldOffset_generated_h
#error "ParticleModuleLocationWorldOffset.generated.h already included, missing '#pragma once' in ParticleModuleLocationWorldOffset.h"
#endif
#define ENGINE_ParticleModuleLocationWorldOffset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocationWorldOffset ***************************************
struct Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationWorldOffset(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationWorldOffset, UParticleModuleLocation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationWorldOffset)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationWorldOffset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationWorldOffset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationWorldOffset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationWorldOffset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationWorldOffset(UParticleModuleLocationWorldOffset&&) = delete; \
	UParticleModuleLocationWorldOffset(const UParticleModuleLocationWorldOffset&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationWorldOffset();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationWorldOffset;

// ********** End Class UParticleModuleLocationWorldOffset *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
