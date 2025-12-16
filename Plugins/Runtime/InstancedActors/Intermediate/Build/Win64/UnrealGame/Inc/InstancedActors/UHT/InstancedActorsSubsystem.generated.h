// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsSubsystem.h"

#ifdef INSTANCEDACTORS_InstancedActorsSubsystem_generated_h
#error "InstancedActorsSubsystem.generated.h already included, missing '#pragma once' in InstancedActorsSubsystem.h"
#endif
#define INSTANCEDACTORS_InstancedActorsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AInstancedActorsManager;
class UClass;
class ULevel;
struct FGameplayTagContainer;
struct FInstancedActorsInstanceHandle;

// ********** Begin Class UInstancedActorsSubsystem ************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRemoveActorInstance); \
	DECLARE_FUNCTION(execInstanceActor);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UInstancedActorsSubsystem_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsSubsystem(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsSubsystem)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsSubsystem(UInstancedActorsSubsystem&&) = delete; \
	UInstancedActorsSubsystem(const UInstancedActorsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UInstancedActorsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInstancedActorsSubsystem) \
	INSTANCEDACTORS_API virtual ~UInstancedActorsSubsystem();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsSubsystem;

// ********** End Class UInstancedActorsSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
