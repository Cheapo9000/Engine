// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitter.h"

#ifdef NIAGARA_NiagaraEmitter_generated_h
#error "NiagaraEmitter.generated.h already included, missing '#pragma once' in NiagaraEmitter.h"
#endif
#define NIAGARA_NiagaraEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraEventReceiverProperties ***********************************
struct Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraEventReceiverProperties;
// ********** End ScriptStruct FNiagaraEventReceiverProperties *************************************

// ********** Begin ScriptStruct FNiagaraEventGeneratorProperties **********************************
struct Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraEventGeneratorProperties;
// ********** End ScriptStruct FNiagaraEventGeneratorProperties ************************************

// ********** Begin ScriptStruct FNiagaraEmitterScriptProperties ***********************************
struct Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraEmitterScriptProperties;
// ********** End ScriptStruct FNiagaraEmitterScriptProperties *************************************

// ********** Begin ScriptStruct FNiagaraEventScriptProperties *************************************
struct Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraEmitterScriptProperties Super;


struct FNiagaraEventScriptProperties;
// ********** End ScriptStruct FNiagaraEventScriptProperties ***************************************

// ********** Begin ScriptStruct FNiagaraDetailsLevelScaleOverrides ********************************
struct Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_210_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraDetailsLevelScaleOverrides;
// ********** End ScriptStruct FNiagaraDetailsLevelScaleOverrides **********************************

// ********** Begin ScriptStruct FVersionedNiagaraEmitterData **************************************
struct Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FVersionedNiagaraEmitterData;
// ********** End ScriptStruct FVersionedNiagaraEmitterData ****************************************

// ********** Begin Class UNiagaraEmitter **********************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_596_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEmitter, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraEmitter_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_596_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEmitter(); \
	friend struct ::Z_Construct_UClass_UNiagaraEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEmitter, UNiagaraEmitterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraEmitter_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEmitter) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_596_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_596_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEmitter(UNiagaraEmitter&&) = delete; \
	UNiagaraEmitter(const UNiagaraEmitter&) = delete; \
	NIAGARA_API virtual ~UNiagaraEmitter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_593_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_596_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_596_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_596_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEmitter;

// ********** End Class UNiagaraEmitter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h

// ********** Begin Enum EScriptExecutionMode ******************************************************
#define FOREACH_ENUM_ESCRIPTEXECUTIONMODE(op) \
	op(EScriptExecutionMode::EveryParticle) \
	op(EScriptExecutionMode::SpawnedParticles) \
	op(EScriptExecutionMode::SingleParticle) 

enum class EScriptExecutionMode : uint8;
template<> struct TIsUEnumClass<EScriptExecutionMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptExecutionMode>();
// ********** End Enum EScriptExecutionMode ********************************************************

// ********** Begin Enum EParticleAllocationMode ***************************************************
#define FOREACH_ENUM_EPARTICLEALLOCATIONMODE(op) \
	op(EParticleAllocationMode::AutomaticEstimate) \
	op(EParticleAllocationMode::ManualEstimate) \
	op(EParticleAllocationMode::FixedCount) 

enum class EParticleAllocationMode : uint8;
template<> struct TIsUEnumClass<EParticleAllocationMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleAllocationMode>();
// ********** End Enum EParticleAllocationMode *****************************************************

// ********** Begin Enum ENiagaraEmitterCalculateBoundMode *****************************************
#define FOREACH_ENUM_ENIAGARAEMITTERCALCULATEBOUNDMODE(op) \
	op(ENiagaraEmitterCalculateBoundMode::Dynamic) \
	op(ENiagaraEmitterCalculateBoundMode::Fixed) \
	op(ENiagaraEmitterCalculateBoundMode::Programmable) 

enum class ENiagaraEmitterCalculateBoundMode : uint8;
template<> struct TIsUEnumClass<ENiagaraEmitterCalculateBoundMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraEmitterCalculateBoundMode>();
// ********** End Enum ENiagaraEmitterCalculateBoundMode *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
