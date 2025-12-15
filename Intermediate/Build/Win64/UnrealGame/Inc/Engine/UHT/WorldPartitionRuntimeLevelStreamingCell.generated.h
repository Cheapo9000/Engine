// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h"

#ifdef ENGINE_WorldPartitionRuntimeLevelStreamingCell_generated_h
#error "WorldPartitionRuntimeLevelStreamingCell.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeLevelStreamingCell.h"
#endif
#define ENGINE_WorldPartitionRuntimeLevelStreamingCell_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionRuntimeLevelStreamingCell *********************************
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnLevelHidden); \
	DECLARE_FUNCTION(execOnLevelShown);


struct Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeLevelStreamingCell, UWorldPartitionRuntimeCell, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeLevelStreamingCell)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeLevelStreamingCell(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeLevelStreamingCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeLevelStreamingCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeLevelStreamingCell); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeLevelStreamingCell(UWorldPartitionRuntimeLevelStreamingCell&&) = delete; \
	UWorldPartitionRuntimeLevelStreamingCell(const UWorldPartitionRuntimeLevelStreamingCell&) = delete; \
	ENGINE_API virtual ~UWorldPartitionRuntimeLevelStreamingCell();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeLevelStreamingCell;

// ********** End Class UWorldPartitionRuntimeLevelStreamingCell ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
