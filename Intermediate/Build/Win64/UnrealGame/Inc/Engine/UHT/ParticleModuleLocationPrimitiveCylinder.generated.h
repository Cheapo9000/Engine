// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationPrimitiveCylinder.h"

#ifdef ENGINE_ParticleModuleLocationPrimitiveCylinder_generated_h
#error "ParticleModuleLocationPrimitiveCylinder.generated.h already included, missing '#pragma once' in ParticleModuleLocationPrimitiveCylinder.h"
#endif
#define ENGINE_ParticleModuleLocationPrimitiveCylinder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocationPrimitiveCylinder *********************************
struct Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationPrimitiveCylinder, UParticleModuleLocationPrimitiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationPrimitiveCylinder)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationPrimitiveCylinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationPrimitiveCylinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationPrimitiveCylinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationPrimitiveCylinder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationPrimitiveCylinder(UParticleModuleLocationPrimitiveCylinder&&) = delete; \
	UParticleModuleLocationPrimitiveCylinder(const UParticleModuleLocationPrimitiveCylinder&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationPrimitiveCylinder();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationPrimitiveCylinder;

// ********** End Class UParticleModuleLocationPrimitiveCylinder ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h

// ********** Begin Enum CylinderHeightAxis ********************************************************
#define FOREACH_ENUM_CYLINDERHEIGHTAXIS(op) \
	op(PMLPC_HEIGHTAXIS_X) \
	op(PMLPC_HEIGHTAXIS_Y) \
	op(PMLPC_HEIGHTAXIS_Z) 

enum CylinderHeightAxis : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<CylinderHeightAxis>();
// ********** End Enum CylinderHeightAxis **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
