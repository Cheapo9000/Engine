// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEvents.h"

#ifdef NIAGARA_NiagaraEvents_generated_h
#error "NiagaraEvents.generated.h already included, missing '#pragma once' in NiagaraEvents.h"
#endif
#define NIAGARA_NiagaraEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraCollisionEventPayload *************************************
struct Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraCollisionEventPayload;
// ********** End ScriptStruct FNiagaraCollisionEventPayload ***************************************

// ********** Begin Class UNiagaraEventReceiverEmitterAction ***************************************
struct Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEventReceiverEmitterAction(); \
	friend struct ::Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEventReceiverEmitterAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEventReceiverEmitterAction)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEventReceiverEmitterAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEventReceiverEmitterAction(UNiagaraEventReceiverEmitterAction&&) = delete; \
	UNiagaraEventReceiverEmitterAction(const UNiagaraEventReceiverEmitterAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEventReceiverEmitterAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEventReceiverEmitterAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEventReceiverEmitterAction) \
	NO_API virtual ~UNiagaraEventReceiverEmitterAction();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_48_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEventReceiverEmitterAction;

// ********** End Class UNiagaraEventReceiverEmitterAction *****************************************

// ********** Begin Class UNiagaraEventReceiverEmitterAction_SpawnParticles ************************
struct Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles(); \
	friend struct ::Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEventReceiverEmitterAction_SpawnParticles, UNiagaraEventReceiverEmitterAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEventReceiverEmitterAction_SpawnParticles)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEventReceiverEmitterAction_SpawnParticles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEventReceiverEmitterAction_SpawnParticles(UNiagaraEventReceiverEmitterAction_SpawnParticles&&) = delete; \
	UNiagaraEventReceiverEmitterAction_SpawnParticles(const UNiagaraEventReceiverEmitterAction_SpawnParticles&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEventReceiverEmitterAction_SpawnParticles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEventReceiverEmitterAction_SpawnParticles); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEventReceiverEmitterAction_SpawnParticles) \
	NO_API virtual ~UNiagaraEventReceiverEmitterAction_SpawnParticles();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_56_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEventReceiverEmitterAction_SpawnParticles;

// ********** End Class UNiagaraEventReceiverEmitterAction_SpawnParticles **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
