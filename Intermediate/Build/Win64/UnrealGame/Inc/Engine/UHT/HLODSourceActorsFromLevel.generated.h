// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODSourceActorsFromLevel.h"

#ifdef ENGINE_HLODSourceActorsFromLevel_generated_h
#error "HLODSourceActorsFromLevel.generated.h already included, missing '#pragma once' in HLODSourceActorsFromLevel.h"
#endif
#define ENGINE_HLODSourceActorsFromLevel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionHLODSourceActorsFromLevel *********************************
struct Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionHLODSourceActorsFromLevel(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionHLODSourceActorsFromLevel, UWorldPartitionHLODSourceActors, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionHLODSourceActorsFromLevel)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionHLODSourceActorsFromLevel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionHLODSourceActorsFromLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionHLODSourceActorsFromLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionHLODSourceActorsFromLevel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionHLODSourceActorsFromLevel(UWorldPartitionHLODSourceActorsFromLevel&&) = delete; \
	UWorldPartitionHLODSourceActorsFromLevel(const UWorldPartitionHLODSourceActorsFromLevel&) = delete; \
	ENGINE_API virtual ~UWorldPartitionHLODSourceActorsFromLevel();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionHLODSourceActorsFromLevel;

// ********** End Class UWorldPartitionHLODSourceActorsFromLevel ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
