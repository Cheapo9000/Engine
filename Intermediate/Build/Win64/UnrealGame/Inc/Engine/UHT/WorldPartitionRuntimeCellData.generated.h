// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeCellData.h"

#ifdef ENGINE_WorldPartitionRuntimeCellData_generated_h
#error "WorldPartitionRuntimeCellData.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCellData.h"
#endif
#define ENGINE_WorldPartitionRuntimeCellData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionRuntimeCellData *******************************************
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionRuntimeCellData, ENGINE_API)


struct Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCellData(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeCellData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCellData) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeCellData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCellData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeCellData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCellData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCellData(UWorldPartitionRuntimeCellData&&) = delete; \
	UWorldPartitionRuntimeCellData(const UWorldPartitionRuntimeCellData&) = delete;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeCellData;

// ********** End Class UWorldPartitionRuntimeCellData *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
