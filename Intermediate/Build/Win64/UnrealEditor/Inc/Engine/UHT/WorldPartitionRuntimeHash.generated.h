// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeHash.h"

#ifdef ENGINE_WorldPartitionRuntimeHash_generated_h
#error "WorldPartitionRuntimeHash.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeHash.h"
#endif
#define ENGINE_WorldPartitionRuntimeHash_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldPartitionRuntimeCellStreamingData ***************************
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionRuntimeCellStreamingData;
// ********** End ScriptStruct FWorldPartitionRuntimeCellStreamingData *****************************

// ********** Begin Class URuntimeHashExternalStreamingObjectBase **********************************
struct Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeHashExternalStreamingObjectBase(); \
	friend struct ::Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeHashExternalStreamingObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister) \
	DECLARE_SERIALIZER(URuntimeHashExternalStreamingObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeHashExternalStreamingObjectBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimeHashExternalStreamingObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeHashExternalStreamingObjectBase(URuntimeHashExternalStreamingObjectBase&&) = delete; \
	URuntimeHashExternalStreamingObjectBase(const URuntimeHashExternalStreamingObjectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeHashExternalStreamingObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeHashExternalStreamingObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeHashExternalStreamingObjectBase) \
	ENGINE_API virtual ~URuntimeHashExternalStreamingObjectBase();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_59_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeHashExternalStreamingObjectBase;

// ********** End Class URuntimeHashExternalStreamingObjectBase ************************************

// ********** Begin Class UWorldPartitionRuntimeHash ***********************************************
struct Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeHash(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeHash, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeHash) \
	DECLARE_WITHIN(UWorldPartition)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeHash); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeHash(UWorldPartitionRuntimeHash&&) = delete; \
	UWorldPartitionRuntimeHash(const UWorldPartitionRuntimeHash&) = delete; \
	ENGINE_API virtual ~UWorldPartitionRuntimeHash();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_190_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_193_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeHash;

// ********** End Class UWorldPartitionRuntimeHash *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h

// ********** Begin Enum EWorldPartitionStreamingPerformance ***************************************
#define FOREACH_ENUM_EWORLDPARTITIONSTREAMINGPERFORMANCE(op) \
	op(EWorldPartitionStreamingPerformance::Good) \
	op(EWorldPartitionStreamingPerformance::Slow) \
	op(EWorldPartitionStreamingPerformance::Critical) \
	op(EWorldPartitionStreamingPerformance::Immediate) 

enum class EWorldPartitionStreamingPerformance : uint8;
template<> struct TIsUEnumClass<EWorldPartitionStreamingPerformance> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionStreamingPerformance>();
// ********** End Enum EWorldPartitionStreamingPerformance *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
