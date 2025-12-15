// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleModule.h"

#ifdef ENGINE_ParticleModule_generated_h
#error "ParticleModule.generated.h already included, missing '#pragma once' in ParticleModule.h"
#endif
#define ENGINE_ParticleModule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParticleCurvePair ************************************************
struct Z_Construct_UScriptStruct_FParticleCurvePair_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleCurvePair_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleCurvePair;
// ********** End ScriptStruct FParticleCurvePair **************************************************

// ********** Begin ScriptStruct FParticleRandomSeedInfo *******************************************
struct Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleRandomSeedInfo;
// ********** End ScriptStruct FParticleRandomSeedInfo *********************************************

// ********** Begin Class UParticleModule **********************************************************
struct Z_Construct_UClass_UParticleModule_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModule(); \
	friend struct ::Z_Construct_UClass_UParticleModule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModule_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModule_NoRegister) \
	DECLARE_SERIALIZER(UParticleModule) \
	DECLARE_WITHIN(UParticleSystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModule); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModule(UParticleModule&&) = delete; \
	UParticleModule(const UParticleModule&) = delete; \
	ENGINE_API virtual ~UParticleModule();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_147_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModule;

// ********** End Class UParticleModule ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h

// ********** Begin Enum EModuleType ***************************************************************
#define FOREACH_ENUM_EMODULETYPE(op) \
	op(EPMT_General) \
	op(EPMT_TypeData) \
	op(EPMT_Beam) \
	op(EPMT_Trail) \
	op(EPMT_Spawn) \
	op(EPMT_Required) \
	op(EPMT_Event) \
	op(EPMT_Light) \
	op(EPMT_SubUV) 

enum EModuleType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EModuleType>();
// ********** End Enum EModuleType *****************************************************************

// ********** Begin Enum EParticleSourceSelectionMethod ********************************************
#define FOREACH_ENUM_EPARTICLESOURCESELECTIONMETHOD(op) \
	op(EPSSM_Random) \
	op(EPSSM_Sequential) 

enum EParticleSourceSelectionMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleSourceSelectionMethod>();
// ********** End Enum EParticleSourceSelectionMethod **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
