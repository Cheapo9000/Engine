// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionFoliageBuilder.h"

#ifdef UNREALED_WorldPartitionFoliageBuilder_generated_h
#error "WorldPartitionFoliageBuilder.generated.h already included, missing '#pragma once' in WorldPartitionFoliageBuilder.h"
#endif
#define UNREALED_WorldPartitionFoliageBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionFoliageBuilder ********************************************
struct Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionFoliageBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionFoliageBuilder(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionFoliageBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionFoliageBuilder, UWorldPartitionBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionFoliageBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionFoliageBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionFoliageBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionFoliageBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionFoliageBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionFoliageBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionFoliageBuilder(UWorldPartitionFoliageBuilder&&) = delete; \
	UWorldPartitionFoliageBuilder(const UWorldPartitionFoliageBuilder&) = delete; \
	NO_API virtual ~UWorldPartitionFoliageBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionFoliageBuilder;

// ********** End Class UWorldPartitionFoliageBuilder **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
