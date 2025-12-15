// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorSpatialHash.h"

#ifdef ENGINE_WorldPartitionEditorSpatialHash_generated_h
#error "WorldPartitionEditorSpatialHash.generated.h already included, missing '#pragma once' in WorldPartitionEditorSpatialHash.h"
#endif
#define ENGINE_WorldPartitionEditorSpatialHash_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionEditorSpatialHash *****************************************
struct Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorSpatialHash_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorSpatialHash(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionEditorSpatialHash_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionEditorSpatialHash, UWorldPartitionEditorHash, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionEditorSpatialHash_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionEditorSpatialHash)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionEditorSpatialHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionEditorSpatialHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionEditorSpatialHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorSpatialHash); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorSpatialHash(UWorldPartitionEditorSpatialHash&&) = delete; \
	UWorldPartitionEditorSpatialHash(const UWorldPartitionEditorSpatialHash&) = delete;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionEditorSpatialHash;

// ********** End Class UWorldPartitionEditorSpatialHash *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
