// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODLayerFactory.h"

#ifdef WORLDPARTITIONEDITOR_HLODLayerFactory_generated_h
#error "HLODLayerFactory.generated.h already included, missing '#pragma once' in HLODLayerFactory.h"
#endif
#define WORLDPARTITIONEDITOR_HLODLayerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHLODLayerFactory ********************************************************
struct Z_Construct_UClass_UHLODLayerFactory_Statics;
WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UHLODLayerFactory_NoRegister();

#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUHLODLayerFactory(); \
	friend struct ::Z_Construct_UClass_UHLODLayerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDPARTITIONEDITOR_API UClass* ::Z_Construct_UClass_UHLODLayerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODLayerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldPartitionEditor"), Z_Construct_UClass_UHLODLayerFactory_NoRegister) \
	DECLARE_SERIALIZER(UHLODLayerFactory)


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDPARTITIONEDITOR_API UHLODLayerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODLayerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDPARTITIONEDITOR_API, UHLODLayerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODLayerFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODLayerFactory(UHLODLayerFactory&&) = delete; \
	UHLODLayerFactory(const UHLODLayerFactory&) = delete; \
	WORLDPARTITIONEDITOR_API virtual ~UHLODLayerFactory();


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODLayerFactory;

// ********** End Class UHLODLayerFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
