// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ServerInstancedActorsSpawnerSubsystem.h"

#ifdef INSTANCEDACTORS_ServerInstancedActorsSpawnerSubsystem_generated_h
#error "ServerInstancedActorsSpawnerSubsystem.generated.h already included, missing '#pragma once' in ServerInstancedActorsSpawnerSubsystem.h"
#endif
#define INSTANCEDACTORS_ServerInstancedActorsSpawnerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UServerInstancedActorsSpawnerSubsystem ***********************************
struct Z_Construct_UClass_UServerInstancedActorsSpawnerSubsystem_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UServerInstancedActorsSpawnerSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ServerInstancedActorsSpawnerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerInstancedActorsSpawnerSubsystem(); \
	friend struct ::Z_Construct_UClass_UServerInstancedActorsSpawnerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UServerInstancedActorsSpawnerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UServerInstancedActorsSpawnerSubsystem, UMassActorSpawnerSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UServerInstancedActorsSpawnerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UServerInstancedActorsSpawnerSubsystem)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ServerInstancedActorsSpawnerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INSTANCEDACTORS_API UServerInstancedActorsSpawnerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UServerInstancedActorsSpawnerSubsystem(UServerInstancedActorsSpawnerSubsystem&&) = delete; \
	UServerInstancedActorsSpawnerSubsystem(const UServerInstancedActorsSpawnerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UServerInstancedActorsSpawnerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerInstancedActorsSpawnerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerInstancedActorsSpawnerSubsystem) \
	INSTANCEDACTORS_API virtual ~UServerInstancedActorsSpawnerSubsystem();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ServerInstancedActorsSpawnerSubsystem_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ServerInstancedActorsSpawnerSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ServerInstancedActorsSpawnerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ServerInstancedActorsSpawnerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UServerInstancedActorsSpawnerSubsystem;

// ********** End Class UServerInstancedActorsSpawnerSubsystem *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_ServerInstancedActorsSpawnerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
