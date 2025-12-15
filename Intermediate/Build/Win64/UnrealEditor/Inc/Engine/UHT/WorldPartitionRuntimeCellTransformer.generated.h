// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeCellTransformer.h"

#ifdef ENGINE_WorldPartitionRuntimeCellTransformer_generated_h
#error "WorldPartitionRuntimeCellTransformer.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCellTransformer.h"
#endif
#define ENGINE_WorldPartitionRuntimeCellTransformer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionRuntimeCellTransformerSettings ****************************
struct Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCellTransformerSettings(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeCellTransformerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCellTransformerSettings)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeCellTransformerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCellTransformerSettings(UWorldPartitionRuntimeCellTransformerSettings&&) = delete; \
	UWorldPartitionRuntimeCellTransformerSettings(const UWorldPartitionRuntimeCellTransformerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeCellTransformerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCellTransformerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCellTransformerSettings) \
	ENGINE_API virtual ~UWorldPartitionRuntimeCellTransformerSettings();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeCellTransformerSettings;

// ********** End Class UWorldPartitionRuntimeCellTransformerSettings ******************************

// ********** Begin Class UWorldPartitionRuntimeCellTransformer ************************************
struct Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCellTransformer(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionRuntimeCellTransformer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCellTransformer)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeCellTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCellTransformer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeCellTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCellTransformer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCellTransformer(UWorldPartitionRuntimeCellTransformer&&) = delete; \
	UWorldPartitionRuntimeCellTransformer(const UWorldPartitionRuntimeCellTransformer&) = delete; \
	ENGINE_API virtual ~UWorldPartitionRuntimeCellTransformer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionRuntimeCellTransformer;

// ********** End Class UWorldPartitionRuntimeCellTransformer **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
