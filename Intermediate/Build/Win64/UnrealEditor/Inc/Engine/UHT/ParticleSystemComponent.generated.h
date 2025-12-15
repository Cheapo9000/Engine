// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleSystemComponent.h"

#ifdef ENGINE_ParticleSystemComponent_generated_h
#error "ParticleSystemComponent.generated.h already included, missing '#pragma once' in ParticleSystemComponent.h"
#endif
#define ENGINE_ParticleSystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFXSystemAsset;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
enum class EAttachmentRule : uint8;
struct FLinearColor;

// ********** Begin Delegate FOnSystemFinished *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_97_DELEGATE \
ENGINE_API void FOnSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSystemFinished, UParticleSystemComponent* PSystem);


// ********** End Delegate FOnSystemFinished *******************************************************

// ********** Begin ScriptStruct FParticleSysParam *************************************************
struct Z_Construct_UScriptStruct_FParticleSysParam_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleSysParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleSysParam;
// ********** End ScriptStruct FParticleSysParam ***************************************************

// ********** Begin ScriptStruct FFXSystemSpawnParameters ******************************************
struct Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_336_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FFXSystemSpawnParameters;
// ********** End ScriptStruct FFXSystemSpawnParameters ********************************************

// ********** Begin Class UFXSystemComponent *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_381_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReleaseToPool); \
	DECLARE_FUNCTION(execSetUseAutoManageAttachment); \
	DECLARE_FUNCTION(execSetAutoAttachmentParameters); \
	DECLARE_FUNCTION(execSetEmitterEnable); \
	DECLARE_FUNCTION(execGetFXSystemAsset); \
	DECLARE_FUNCTION(execSetActorParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter);


struct Z_Construct_UClass_UFXSystemComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_381_INCLASS \
private: \
	static void StaticRegisterNativesUFXSystemComponent(); \
	friend struct ::Z_Construct_UClass_UFXSystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UFXSystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFXSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UFXSystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UFXSystemComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_381_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFXSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFXSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXSystemComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFXSystemComponent(UFXSystemComponent&&) = delete; \
	UFXSystemComponent(const UFXSystemComponent&) = delete; \
	ENGINE_API virtual ~UFXSystemComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_378_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_381_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_381_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_381_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_381_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFXSystemComponent;

// ********** End Class UFXSystemComponent *********************************************************

// ********** Begin Class UParticleSystemComponent *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGenerateParticleEvent); \
	DECLARE_FUNCTION(execGetNamedMaterial); \
	DECLARE_FUNCTION(execCreateNamedDynamicMaterialInstance); \
	DECLARE_FUNCTION(execSetTrailSourceData); \
	DECLARE_FUNCTION(execEndTrails); \
	DECLARE_FUNCTION(execBeginTrails); \
	DECLARE_FUNCTION(execGetNumActiveParticles); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execSetMaterialParameter); \
	DECLARE_FUNCTION(execGetBeamTargetStrength); \
	DECLARE_FUNCTION(execGetBeamTargetTangent); \
	DECLARE_FUNCTION(execGetBeamTargetPoint); \
	DECLARE_FUNCTION(execGetBeamSourceStrength); \
	DECLARE_FUNCTION(execGetBeamSourceTangent); \
	DECLARE_FUNCTION(execGetBeamSourcePoint); \
	DECLARE_FUNCTION(execGetBeamEndPoint); \
	DECLARE_FUNCTION(execSetBeamTargetStrength); \
	DECLARE_FUNCTION(execSetBeamTargetTangent); \
	DECLARE_FUNCTION(execSetBeamTargetPoint); \
	DECLARE_FUNCTION(execSetBeamSourceStrength); \
	DECLARE_FUNCTION(execSetBeamSourceTangent); \
	DECLARE_FUNCTION(execSetBeamSourcePoint); \
	DECLARE_FUNCTION(execSetBeamEndPoint); \
	DECLARE_FUNCTION(execSetAutoAttachParams);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemComponent, ENGINE_API)


struct Z_Construct_UClass_UParticleSystemComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemComponent(); \
	friend struct ::Z_Construct_UClass_UParticleSystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleSystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleSystemComponent, UFXSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleSystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UParticleSystemComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleSystemComponent(UParticleSystemComponent&&) = delete; \
	UParticleSystemComponent(const UParticleSystemComponent&) = delete; \
	ENGINE_API virtual ~UParticleSystemComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_486_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_491_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleSystemComponent;

// ********** End Class UParticleSystemComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h

// ********** Begin Enum EParticleSysParamType *****************************************************
#define FOREACH_ENUM_EPARTICLESYSPARAMTYPE(op) \
	op(PSPT_None) \
	op(PSPT_Scalar) \
	op(PSPT_ScalarRand) \
	op(PSPT_Vector) \
	op(PSPT_VectorRand) \
	op(PSPT_Color) \
	op(PSPT_Actor) \
	op(PSPT_Material) \
	op(PSPT_VectorUnitRand) 

enum EParticleSysParamType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleSysParamType>();
// ********** End Enum EParticleSysParamType *******************************************************

// ********** Begin Enum ParticleReplayState *******************************************************
#define FOREACH_ENUM_PARTICLEREPLAYSTATE(op) \
	op(PRS_Disabled) \
	op(PRS_Capturing) \
	op(PRS_Replaying) 

enum ParticleReplayState : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ParticleReplayState>();
// ********** End Enum ParticleReplayState *********************************************************

// ********** Begin Enum EParticleEventType ********************************************************
#define FOREACH_ENUM_EPARTICLEEVENTTYPE(op) \
	op(EPET_Any) \
	op(EPET_Spawn) \
	op(EPET_Death) \
	op(EPET_Collision) \
	op(EPET_Burst) \
	op(EPET_Blueprint) 

enum EParticleEventType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleEventType>();
// ********** End Enum EParticleEventType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
