// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSpawner.h"

#ifdef MASSSPAWNER_MassSpawner_generated_h
#error "MassSpawner.generated.h already included, missing '#pragma once' in MassSpawner.h"
#endif
#define MASSSPAWNER_MassSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FMassSpawnerOnSpawningFinishedEvent ***********************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_16_DELEGATE \
MASSSPAWNER_API void FMassSpawnerOnSpawningFinishedEvent_DelegateWrapper(const FMulticastScriptDelegate& MassSpawnerOnSpawningFinishedEvent);


// ********** End Delegate FMassSpawnerOnSpawningFinishedEvent *************************************

// ********** Begin Delegate FMassSpawnerOnDespawningFinishedEvent *********************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_17_DELEGATE \
MASSSPAWNER_API void FMassSpawnerOnDespawningFinishedEvent_DelegateWrapper(const FMulticastScriptDelegate& MassSpawnerOnDespawningFinishedEvent);


// ********** End Delegate FMassSpawnerOnDespawningFinishedEvent ***********************************

// ********** Begin Class AMassSpawner *************************************************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpawningCountScale); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execScaleSpawningCount); \
	DECLARE_FUNCTION(execUnloadConfig); \
	DECLARE_FUNCTION(execClearTemplates); \
	DECLARE_FUNCTION(execDoDespawning); \
	DECLARE_FUNCTION(execDoSpawning);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDEBUG_Clear); \
	DECLARE_FUNCTION(execDEBUG_Spawn);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_AMassSpawner_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_AMassSpawner_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassSpawner(); \
	friend struct ::Z_Construct_UClass_AMassSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_AMassSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_AMassSpawner_NoRegister) \
	DECLARE_SERIALIZER(AMassSpawner)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassSpawner(AMassSpawner&&) = delete; \
	AMassSpawner(const AMassSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, AMassSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassSpawner) \
	MASSSPAWNER_API virtual ~AMassSpawner();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassSpawner;

// ********** End Class AMassSpawner ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
