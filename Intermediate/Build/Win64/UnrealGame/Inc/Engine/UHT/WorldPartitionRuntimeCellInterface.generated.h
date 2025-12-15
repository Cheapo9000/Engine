// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeCellInterface.h"

#ifdef ENGINE_WorldPartitionRuntimeCellInterface_generated_h
#error "WorldPartitionRuntimeCellInterface.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCellInterface.h"
#endif
#define ENGINE_WorldPartitionRuntimeCellInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWorldPartitionCell **************************************************
struct Z_Construct_UClass_UWorldPartitionCell_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCell_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionCell(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionCell); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionCell(UWorldPartitionCell&&) = delete; \
	UWorldPartitionCell(const UWorldPartitionCell&) = delete; \
	virtual ~UWorldPartitionCell() = default;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionCell(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionCell_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionCell_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionCell, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionCell_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionCell)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IWorldPartitionCell() {} \
public: \
	typedef UWorldPartitionCell UClassType; \
	typedef IWorldPartitionCell ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionCell;

// ********** End Interface UWorldPartitionCell ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
