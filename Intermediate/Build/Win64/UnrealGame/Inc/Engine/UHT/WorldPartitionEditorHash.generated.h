// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorHash.h"

#ifdef ENGINE_WorldPartitionEditorHash_generated_h
#error "WorldPartitionEditorHash.generated.h already included, missing '#pragma once' in WorldPartitionEditorHash.h"
#endif
#define ENGINE_WorldPartitionEditorHash_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionEditorHash ************************************************
struct Z_Construct_UClass_UWorldPartitionEditorHash_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorHash(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionEditorHash_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionEditorHash, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionEditorHash) \
	DECLARE_WITHIN(UWorldPartition)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionEditorHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionEditorHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionEditorHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorHash); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorHash(UWorldPartitionEditorHash&&) = delete; \
	UWorldPartitionEditorHash(const UWorldPartitionEditorHash&) = delete; \
	ENGINE_API virtual ~UWorldPartitionEditorHash();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionEditorHash;

// ********** End Class UWorldPartitionEditorHash **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
