// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientInstancedActorsSpawnerSubsystem.h"

#ifdef INSTANCEDACTORS_ClientInstancedActorsSpawnerSubsystem_generated_h
#error "ClientInstancedActorsSpawnerSubsystem.generated.h already included, missing '#pragma once' in ClientInstancedActorsSpawnerSubsystem.h"
#endif
#define INSTANCEDACTORS_ClientInstancedActorsSpawnerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClientInstancedActorsSpawnerSubsystem ***********************************
struct Z_Construct_UClass_UClientInstancedActorsSpawnerSubsystem_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UClientInstancedActorsSpawnerSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ClientInstancedActorsSpawnerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientInstancedActorsSpawnerSubsystem(); \
	friend struct ::Z_Construct_UClass_UClientInstancedActorsSpawnerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UClientInstancedActorsSpawnerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UClientInstancedActorsSpawnerSubsystem, UMassActorSpawnerSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UClientInstancedActorsSpawnerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UClientInstancedActorsSpawnerSubsystem)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ClientInstancedActorsSpawnerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INSTANCEDACTORS_API UClientInstancedActorsSpawnerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClientInstancedActorsSpawnerSubsystem(UClientInstancedActorsSpawnerSubsystem&&) = delete; \
	UClientInstancedActorsSpawnerSubsystem(const UClientInstancedActorsSpawnerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UClientInstancedActorsSpawnerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientInstancedActorsSpawnerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClientInstancedActorsSpawnerSubsystem) \
	INSTANCEDACTORS_API virtual ~UClientInstancedActorsSpawnerSubsystem();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ClientInstancedActorsSpawnerSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ClientInstancedActorsSpawnerSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ClientInstancedActorsSpawnerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ClientInstancedActorsSpawnerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClientInstancedActorsSpawnerSubsystem;

// ********** End Class UClientInstancedActorsSpawnerSubsystem *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ClientInstancedActorsSpawnerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
