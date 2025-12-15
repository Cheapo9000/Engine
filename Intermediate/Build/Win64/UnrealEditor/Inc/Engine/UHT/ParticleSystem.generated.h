// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleSystem.h"

#ifdef ENGINE_ParticleSystem_generated_h
#error "ParticleSystem.generated.h already included, missing '#pragma once' in ParticleSystem.h"
#endif
#define ENGINE_ParticleSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;

// ********** Begin ScriptStruct FParticleSystemLOD ************************************************
struct Z_Construct_UScriptStruct_FParticleSystemLOD_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleSystemLOD_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleSystemLOD;
// ********** End ScriptStruct FParticleSystemLOD **************************************************

// ********** Begin ScriptStruct FLODSoloTrack *****************************************************
struct Z_Construct_UScriptStruct_FLODSoloTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLODSoloTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLODSoloTrack;
// ********** End ScriptStruct FLODSoloTrack *******************************************************

// ********** Begin ScriptStruct FNamedEmitterMaterial *********************************************
struct Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNamedEmitterMaterial;
// ********** End ScriptStruct FNamedEmitterMaterial ***********************************************

// ********** Begin Class UFXSystemAsset ***********************************************************
struct Z_Construct_UClass_UFXSystemAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUFXSystemAsset(); \
	friend struct ::Z_Construct_UClass_UFXSystemAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UFXSystemAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UFXSystemAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UFXSystemAsset_NoRegister) \
	DECLARE_SERIALIZER(UFXSystemAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFXSystemAsset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXSystemAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFXSystemAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXSystemAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFXSystemAsset(UFXSystemAsset&&) = delete; \
	UFXSystemAsset(const UFXSystemAsset&) = delete; \
	ENGINE_API virtual ~UFXSystemAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_116_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFXSystemAsset;

// ********** End Class UFXSystemAsset *************************************************************

// ********** Begin Class UParticleSystem **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_RPC_WRAPPERS \
	DECLARE_FUNCTION(execContainsEmitterType);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystem, ENGINE_API)


struct Z_Construct_UClass_UParticleSystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystem(); \
	friend struct ::Z_Construct_UClass_UParticleSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleSystem_NoRegister) \
	DECLARE_SERIALIZER(UParticleSystem) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystem); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleSystem(UParticleSystem&&) = delete; \
	UParticleSystem(const UParticleSystem&) = delete; \
	ENGINE_API virtual ~UParticleSystem();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_158_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_161_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleSystem;

// ********** End Class UParticleSystem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h

// ********** Begin Enum EParticleSystemUpdateMode *************************************************
#define FOREACH_ENUM_EPARTICLESYSTEMUPDATEMODE(op) \
	op(EPSUM_RealTime) \
	op(EPSUM_FixedTime) 

enum EParticleSystemUpdateMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleSystemUpdateMode>();
// ********** End Enum EParticleSystemUpdateMode ***************************************************

// ********** Begin Enum ParticleSystemLODMethod ***************************************************
#define FOREACH_ENUM_PARTICLESYSTEMLODMETHOD(op) \
	op(PARTICLESYSTEMLODMETHOD_Automatic) \
	op(PARTICLESYSTEMLODMETHOD_DirectSet) \
	op(PARTICLESYSTEMLODMETHOD_ActivateAutomatic) 

enum ParticleSystemLODMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ParticleSystemLODMethod>();
// ********** End Enum ParticleSystemLODMethod *****************************************************

// ********** Begin Enum EParticleSystemOcclusionBoundsMethod **************************************
#define FOREACH_ENUM_EPARTICLESYSTEMOCCLUSIONBOUNDSMETHOD(op) \
	op(EPSOBM_None) \
	op(EPSOBM_ParticleBounds) \
	op(EPSOBM_CustomBounds) 

enum EParticleSystemOcclusionBoundsMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleSystemOcclusionBoundsMethod>();
// ********** End Enum EParticleSystemOcclusionBoundsMethod ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
