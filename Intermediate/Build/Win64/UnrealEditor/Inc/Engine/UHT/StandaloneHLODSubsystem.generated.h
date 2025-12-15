// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/StandaloneHLODSubsystem.h"

#ifdef ENGINE_StandaloneHLODSubsystem_generated_h
#error "StandaloneHLODSubsystem.generated.h already included, missing '#pragma once' in StandaloneHLODSubsystem.h"
#endif
#define ENGINE_StandaloneHLODSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionStandaloneHLODSubsystem ***********************************
struct Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionStandaloneHLODSubsystem(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionStandaloneHLODSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionStandaloneHLODSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionStandaloneHLODSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionStandaloneHLODSubsystem(UWorldPartitionStandaloneHLODSubsystem&&) = delete; \
	UWorldPartitionStandaloneHLODSubsystem(const UWorldPartitionStandaloneHLODSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionStandaloneHLODSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionStandaloneHLODSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPartitionStandaloneHLODSubsystem) \
	ENGINE_API virtual ~UWorldPartitionStandaloneHLODSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionStandaloneHLODSubsystem;

// ********** End Class UWorldPartitionStandaloneHLODSubsystem *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
