// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Orientation/ParticleModuleOrientationAxisLock.h"

#ifdef ENGINE_ParticleModuleOrientationAxisLock_generated_h
#error "ParticleModuleOrientationAxisLock.generated.h already included, missing '#pragma once' in ParticleModuleOrientationAxisLock.h"
#endif
#define ENGINE_ParticleModuleOrientationAxisLock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleOrientationAxisLock ***************************************
struct Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleOrientationAxisLock(); \
	friend struct ::Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleOrientationAxisLock, UParticleModuleOrientationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleOrientationAxisLock)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrientationAxisLock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrientationAxisLock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrientationAxisLock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrientationAxisLock); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleOrientationAxisLock(UParticleModuleOrientationAxisLock&&) = delete; \
	UParticleModuleOrientationAxisLock(const UParticleModuleOrientationAxisLock&) = delete; \
	ENGINE_API virtual ~UParticleModuleOrientationAxisLock();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleOrientationAxisLock;

// ********** End Class UParticleModuleOrientationAxisLock *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h

// ********** Begin Enum EParticleAxisLock *********************************************************
#define FOREACH_ENUM_EPARTICLEAXISLOCK(op) \
	op(EPAL_NONE) \
	op(EPAL_X) \
	op(EPAL_Y) \
	op(EPAL_Z) \
	op(EPAL_NEGATIVE_X) \
	op(EPAL_NEGATIVE_Y) \
	op(EPAL_NEGATIVE_Z) \
	op(EPAL_ROTATE_X) \
	op(EPAL_ROTATE_Y) \
	op(EPAL_ROTATE_Z) 

enum EParticleAxisLock : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleAxisLock>();
// ********** End Enum EParticleAxisLock ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
