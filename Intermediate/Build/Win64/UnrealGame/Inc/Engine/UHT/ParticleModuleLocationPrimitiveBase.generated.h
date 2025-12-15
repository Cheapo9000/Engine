// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationPrimitiveBase.h"

#ifdef ENGINE_ParticleModuleLocationPrimitiveBase_generated_h
#error "ParticleModuleLocationPrimitiveBase.generated.h already included, missing '#pragma once' in ParticleModuleLocationPrimitiveBase.h"
#endif
#define ENGINE_ParticleModuleLocationPrimitiveBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocationPrimitiveBase *************************************
struct Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationPrimitiveBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationPrimitiveBase, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationPrimitiveBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationPrimitiveBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationPrimitiveBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationPrimitiveBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationPrimitiveBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationPrimitiveBase(UParticleModuleLocationPrimitiveBase&&) = delete; \
	UParticleModuleLocationPrimitiveBase(const UParticleModuleLocationPrimitiveBase&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationPrimitiveBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationPrimitiveBase;

// ********** End Class UParticleModuleLocationPrimitiveBase ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
