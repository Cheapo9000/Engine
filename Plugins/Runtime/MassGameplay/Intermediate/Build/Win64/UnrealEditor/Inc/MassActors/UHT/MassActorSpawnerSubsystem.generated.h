// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassActorSpawnerSubsystem.h"

#ifdef MASSACTORS_MassActorSpawnerSubsystem_generated_h
#error "MassActorSpawnerSubsystem.generated.h already included, missing '#pragma once' in MassActorSpawnerSubsystem.h"
#endif
#define MASSACTORS_MassActorSpawnerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassActorSpawnRequestHandle **************************************
struct Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FIndexedHandleBase Super;


struct FMassActorSpawnRequestHandle;
// ********** End ScriptStruct FMassActorSpawnRequestHandle ****************************************

// ********** Begin ScriptStruct FMassActorSpawnRequest ********************************************
struct Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct();


struct FMassActorSpawnRequest;
// ********** End ScriptStruct FMassActorSpawnRequest **********************************************

// ********** Begin Class UMassActorSpawnerSubsystem ***********************************************
struct Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActorSpawnerSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassActorSpawnerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActorSpawnerSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassActorSpawnerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassActorSpawnerSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSACTORS_API UMassActorSpawnerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActorSpawnerSubsystem(UMassActorSpawnerSubsystem&&) = delete; \
	UMassActorSpawnerSubsystem(const UMassActorSpawnerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassActorSpawnerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorSpawnerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActorSpawnerSubsystem) \
	MASSACTORS_API virtual ~UMassActorSpawnerSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_128_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_131_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActorSpawnerSubsystem;

// ********** End Class UMassActorSpawnerSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h

// ********** Begin Enum ESpawnRequestStatus *******************************************************
#define FOREACH_ENUM_ESPAWNREQUESTSTATUS(op) \
	op(ESpawnRequestStatus::None) \
	op(ESpawnRequestStatus::Pending) \
	op(ESpawnRequestStatus::Processing) \
	op(ESpawnRequestStatus::Succeeded) \
	op(ESpawnRequestStatus::Failed) \
	op(ESpawnRequestStatus::RetryPending) 

enum class ESpawnRequestStatus : uint8;
template<> struct TIsUEnumClass<ESpawnRequestStatus> { enum { Value = true }; };
template<> MASSACTORS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpawnRequestStatus>();
// ********** End Enum ESpawnRequestStatus *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
