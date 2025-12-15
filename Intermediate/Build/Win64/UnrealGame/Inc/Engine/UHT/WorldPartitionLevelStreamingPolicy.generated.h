// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionLevelStreamingPolicy.h"

#ifdef ENGINE_WorldPartitionLevelStreamingPolicy_generated_h
#error "WorldPartitionLevelStreamingPolicy.generated.h already included, missing '#pragma once' in WorldPartitionLevelStreamingPolicy.h"
#endif
#define ENGINE_WorldPartitionLevelStreamingPolicy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionLevelStreamingPolicy **************************************
struct Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionLevelStreamingPolicy(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionLevelStreamingPolicy, UWorldPartitionStreamingPolicy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionLevelStreamingPolicy)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionLevelStreamingPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionLevelStreamingPolicy(UWorldPartitionLevelStreamingPolicy&&) = delete; \
	UWorldPartitionLevelStreamingPolicy(const UWorldPartitionLevelStreamingPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionLevelStreamingPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionLevelStreamingPolicy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionLevelStreamingPolicy) \
	NO_API virtual ~UWorldPartitionLevelStreamingPolicy();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionLevelStreamingPolicy;

// ********** End Class UWorldPartitionLevelStreamingPolicy ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
