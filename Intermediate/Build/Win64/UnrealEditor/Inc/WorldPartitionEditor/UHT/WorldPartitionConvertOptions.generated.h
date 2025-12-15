// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionConvertOptions.h"

#ifdef WORLDPARTITIONEDITOR_WorldPartitionConvertOptions_generated_h
#error "WorldPartitionConvertOptions.generated.h already included, missing '#pragma once' in WorldPartitionConvertOptions.h"
#endif
#define WORLDPARTITIONEDITOR_WorldPartitionConvertOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionConvertOptions ********************************************
struct Z_Construct_UClass_UWorldPartitionConvertOptions_Statics;
WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UWorldPartitionConvertOptions_NoRegister();

#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionConvertOptions(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionConvertOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDPARTITIONEDITOR_API UClass* ::Z_Construct_UClass_UWorldPartitionConvertOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionConvertOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldPartitionEditor"), Z_Construct_UClass_UWorldPartitionConvertOptions_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionConvertOptions)


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionConvertOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionConvertOptions(UWorldPartitionConvertOptions&&) = delete; \
	UWorldPartitionConvertOptions(const UWorldPartitionConvertOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionConvertOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionConvertOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionConvertOptions) \
	NO_API virtual ~UWorldPartitionConvertOptions();


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_9_PROLOG
#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionConvertOptions;

// ********** End Class UWorldPartitionConvertOptions **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
