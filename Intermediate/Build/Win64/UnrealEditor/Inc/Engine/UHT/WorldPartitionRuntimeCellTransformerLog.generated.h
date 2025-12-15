// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeCellTransformerLog.h"

#ifdef ENGINE_WorldPartitionRuntimeCellTransformerLog_generated_h
#error "WorldPartitionRuntimeCellTransformerLog.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCellTransformerLog.h"
#endif
#define ENGINE_WorldPartitionRuntimeCellTransformerLog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionRuntimeCellTransformerLog *********************************
struct Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCellTransformerLog(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeCellTransformerLog, UWorldPartitionRuntimeCellTransformer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCellTransformerLog)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionRuntimeCellTransformerLog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCellTransformerLog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionRuntimeCellTransformerLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCellTransformerLog); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCellTransformerLog(UWorldPartitionRuntimeCellTransformerLog&&) = delete; \
	UWorldPartitionRuntimeCellTransformerLog(const UWorldPartitionRuntimeCellTransformerLog&) = delete; \
	NO_API virtual ~UWorldPartitionRuntimeCellTransformerLog();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_11_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeCellTransformerLog;

// ********** End Class UWorldPartitionRuntimeCellTransformerLog ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
