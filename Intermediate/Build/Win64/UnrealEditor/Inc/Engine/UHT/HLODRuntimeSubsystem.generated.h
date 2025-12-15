// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODRuntimeSubsystem.h"

#ifdef ENGINE_HLODRuntimeSubsystem_generated_h
#error "HLODRuntimeSubsystem.generated.h already included, missing '#pragma once' in HLODRuntimeSubsystem.h"
#endif
#define ENGINE_HLODRuntimeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionHLODRuntimeSubsystem **************************************
struct Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionHLODRuntimeSubsystem(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionHLODRuntimeSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionHLODRuntimeSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionHLODRuntimeSubsystem(UWorldPartitionHLODRuntimeSubsystem&&) = delete; \
	UWorldPartitionHLODRuntimeSubsystem(const UWorldPartitionHLODRuntimeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionHLODRuntimeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionHLODRuntimeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPartitionHLODRuntimeSubsystem) \
	ENGINE_API virtual ~UWorldPartitionHLODRuntimeSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionHLODRuntimeSubsystem;

// ********** End Class UWorldPartitionHLODRuntimeSubsystem ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
