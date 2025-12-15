// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartition.h"

#ifdef ENGINE_WorldPartition_generated_h
#error "WorldPartition.generated.h already included, missing '#pragma once' in WorldPartition.h"
#endif
#define ENGINE_WorldPartition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRuntimeCellTransformerInstance ***********************************
struct Z_Construct_UScriptStruct_FRuntimeCellTransformerInstance_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeCellTransformerInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRuntimeCellTransformerInstance;
// ********** End ScriptStruct FRuntimeCellTransformerInstance *************************************

// ********** Begin Class UWorldPartition **********************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execIsStandaloneHLODAllowed);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartition, ENGINE_API)


struct Z_Construct_UClass_UWorldPartition_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartition_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartition(); \
	friend struct ::Z_Construct_UClass_UWorldPartition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartition_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartition_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartition) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartition); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartition(UWorldPartition&&) = delete; \
	UWorldPartition(const UWorldPartition&) = delete; \
	ENGINE_API virtual ~UWorldPartition();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_140_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_143_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartition;

// ********** End Class UWorldPartition ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h

// ********** Begin Enum EWorldPartitionServerStreamingMode ****************************************
#define FOREACH_ENUM_EWORLDPARTITIONSERVERSTREAMINGMODE(op) \
	op(EWorldPartitionServerStreamingMode::ProjectDefault) \
	op(EWorldPartitionServerStreamingMode::Disabled) \
	op(EWorldPartitionServerStreamingMode::Enabled) \
	op(EWorldPartitionServerStreamingMode::EnabledInPIE) 

enum class EWorldPartitionServerStreamingMode : uint8;
template<> struct TIsUEnumClass<EWorldPartitionServerStreamingMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionServerStreamingMode>();
// ********** End Enum EWorldPartitionServerStreamingMode ******************************************

// ********** Begin Enum EWorldPartitionServerStreamingOutMode *************************************
#define FOREACH_ENUM_EWORLDPARTITIONSERVERSTREAMINGOUTMODE(op) \
	op(EWorldPartitionServerStreamingOutMode::ProjectDefault) \
	op(EWorldPartitionServerStreamingOutMode::Disabled) \
	op(EWorldPartitionServerStreamingOutMode::Enabled) 

enum class EWorldPartitionServerStreamingOutMode : uint8;
template<> struct TIsUEnumClass<EWorldPartitionServerStreamingOutMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionServerStreamingOutMode>();
// ********** End Enum EWorldPartitionServerStreamingOutMode ***************************************

// ********** Begin Enum EWorldPartitionDataLayersLogicOperator ************************************
#define FOREACH_ENUM_EWORLDPARTITIONDATALAYERSLOGICOPERATOR(op) \
	op(EWorldPartitionDataLayersLogicOperator::Or) \
	op(EWorldPartitionDataLayersLogicOperator::And) 

enum class EWorldPartitionDataLayersLogicOperator : uint8;
template<> struct TIsUEnumClass<EWorldPartitionDataLayersLogicOperator> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionDataLayersLogicOperator>();
// ********** End Enum EWorldPartitionDataLayersLogicOperator **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
