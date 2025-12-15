// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationPrimitiveSphere.h"

#ifdef ENGINE_ParticleModuleLocationPrimitiveSphere_generated_h
#error "ParticleModuleLocationPrimitiveSphere.generated.h already included, missing '#pragma once' in ParticleModuleLocationPrimitiveSphere.h"
#endif
#define ENGINE_ParticleModuleLocationPrimitiveSphere_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocationPrimitiveSphere ***********************************
struct Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationPrimitiveSphere(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationPrimitiveSphere, UParticleModuleLocationPrimitiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationPrimitiveSphere)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationPrimitiveSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationPrimitiveSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationPrimitiveSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationPrimitiveSphere); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationPrimitiveSphere(UParticleModuleLocationPrimitiveSphere&&) = delete; \
	UParticleModuleLocationPrimitiveSphere(const UParticleModuleLocationPrimitiveSphere&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationPrimitiveSphere();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationPrimitiveSphere;

// ********** End Class UParticleModuleLocationPrimitiveSphere *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
