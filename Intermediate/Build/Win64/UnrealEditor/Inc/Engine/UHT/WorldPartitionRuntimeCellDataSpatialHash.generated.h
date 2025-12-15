// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeCellDataSpatialHash.h"

#ifdef ENGINE_WorldPartitionRuntimeCellDataSpatialHash_generated_h
#error "WorldPartitionRuntimeCellDataSpatialHash.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCellDataSpatialHash.h"
#endif
#define ENGINE_WorldPartitionRuntimeCellDataSpatialHash_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionRuntimeCellDataSpatialHash ********************************
struct Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCellDataSpatialHash(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeCellDataSpatialHash, UWorldPartitionRuntimeCellData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCellDataSpatialHash) \
	DECLARE_WITHIN(UWorldPartitionRuntimeCell)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeCellDataSpatialHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCellDataSpatialHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeCellDataSpatialHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCellDataSpatialHash); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCellDataSpatialHash(UWorldPartitionRuntimeCellDataSpatialHash&&) = delete; \
	UWorldPartitionRuntimeCellDataSpatialHash(const UWorldPartitionRuntimeCellDataSpatialHash&) = delete; \
	ENGINE_API virtual ~UWorldPartitionRuntimeCellDataSpatialHash();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeCellDataSpatialHash;

// ********** End Class UWorldPartitionRuntimeCellDataSpatialHash **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
