// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Orbit/ParticleModuleOrbit.h"

#ifdef ENGINE_ParticleModuleOrbit_generated_h
#error "ParticleModuleOrbit.generated.h already included, missing '#pragma once' in ParticleModuleOrbit.h"
#endif
#define ENGINE_ParticleModuleOrbit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOrbitOptions *****************************************************
struct Z_Construct_UScriptStruct_FOrbitOptions_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOrbitOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FOrbitOptions;
// ********** End ScriptStruct FOrbitOptions *******************************************************

// ********** Begin Class UParticleModuleOrbit *****************************************************
struct Z_Construct_UClass_UParticleModuleOrbit_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleOrbit(); \
	friend struct ::Z_Construct_UClass_UParticleModuleOrbit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleOrbit_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleOrbit, UParticleModuleOrbitBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleOrbit_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleOrbit)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrbit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrbit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrbit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrbit); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleOrbit(UParticleModuleOrbit&&) = delete; \
	UParticleModuleOrbit(const UParticleModuleOrbit&) = delete; \
	ENGINE_API virtual ~UParticleModuleOrbit();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_65_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleOrbit;

// ********** End Class UParticleModuleOrbit *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h

// ********** Begin Enum EOrbitChainMode ***********************************************************
#define FOREACH_ENUM_EORBITCHAINMODE(op) \
	op(EOChainMode_Add) \
	op(EOChainMode_Scale) \
	op(EOChainMode_Link) 

enum EOrbitChainMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrbitChainMode>();
// ********** End Enum EOrbitChainMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
