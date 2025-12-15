// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeCell.h"

#ifdef ENGINE_WorldPartitionRuntimeCell_generated_h
#error "WorldPartitionRuntimeCell.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCell.h"
#endif
#define ENGINE_WorldPartitionRuntimeCell_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldPartitionRuntimeCellPropertyOverride ************************
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionRuntimeCellPropertyOverride;
// ********** End ScriptStruct FWorldPartitionRuntimeCellPropertyOverride **************************

// ********** Begin ScriptStruct FWorldPartitionRuntimeCellObjectMapping ***************************
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionRuntimeCellObjectMapping;
// ********** End ScriptStruct FWorldPartitionRuntimeCellObjectMapping *****************************

// ********** Begin ScriptStruct FWorldPartitionRuntimeCellDebugInfo *******************************
struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_211_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionRuntimeCellDebugInfo;
// ********** End ScriptStruct FWorldPartitionRuntimeCellDebugInfo *********************************

// ********** Begin Class UWorldPartitionRuntimeCell ***********************************************
struct Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_237_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCell(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeCell, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCell) \
	virtual UObject* _getUObject() const override { return const_cast<UWorldPartitionRuntimeCell*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_237_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeCell(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCell); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCell(UWorldPartitionRuntimeCell&&) = delete; \
	UWorldPartitionRuntimeCell(const UWorldPartitionRuntimeCell&) = delete; \
	ENGINE_API virtual ~UWorldPartitionRuntimeCell();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_234_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_237_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_237_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_237_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeCell;

// ********** End Class UWorldPartitionRuntimeCell *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h

// ********** Begin Enum EWorldPartitionRuntimeCellState *******************************************
#define FOREACH_ENUM_EWORLDPARTITIONRUNTIMECELLSTATE(op) \
	op(EWorldPartitionRuntimeCellState::Unloaded) \
	op(EWorldPartitionRuntimeCellState::Loaded) \
	op(EWorldPartitionRuntimeCellState::Activated) 

enum class EWorldPartitionRuntimeCellState : uint8;
template<> struct TIsUEnumClass<EWorldPartitionRuntimeCellState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldPartitionRuntimeCellState>();
// ********** End Enum EWorldPartitionRuntimeCellState *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
