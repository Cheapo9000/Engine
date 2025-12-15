// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionSubsystem.h"

#ifdef ENGINE_WorldPartitionSubsystem_generated_h
#error "WorldPartitionSubsystem.generated.h already included, missing '#pragma once' in WorldPartitionSubsystem.h"
#endif
#define ENGINE_WorldPartitionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWorldPartitionRuntimeCellState : uint8;
struct FWorldPartitionStreamingQuerySource;

// ********** Begin Class UWorldPartitionSubsystem *************************************************
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAllStreamingCompleted); \
	DECLARE_FUNCTION(execIsStreamingCompleted);


struct Z_Construct_UClass_UWorldPartitionSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionSubsystem(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UWorldPartitionSubsystem*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionSubsystem(UWorldPartitionSubsystem&&) = delete; \
	UWorldPartitionSubsystem(const UWorldPartitionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPartitionSubsystem) \
	ENGINE_API virtual ~UWorldPartitionSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_50_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionSubsystem;

// ********** End Class UWorldPartitionSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
