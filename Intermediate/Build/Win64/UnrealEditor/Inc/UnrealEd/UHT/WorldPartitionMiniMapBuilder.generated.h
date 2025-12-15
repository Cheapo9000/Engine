// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionMiniMapBuilder.h"

#ifdef UNREALED_WorldPartitionMiniMapBuilder_generated_h
#error "WorldPartitionMiniMapBuilder.generated.h already included, missing '#pragma once' in WorldPartitionMiniMapBuilder.h"
#endif
#define UNREALED_WorldPartitionMiniMapBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionMiniMapBuilder ********************************************
struct Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionMiniMapBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionMiniMapBuilder(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionMiniMapBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionMiniMapBuilder, UWorldPartitionBuilder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionMiniMapBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionMiniMapBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldPartitionMiniMapBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionMiniMapBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldPartitionMiniMapBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionMiniMapBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionMiniMapBuilder(UWorldPartitionMiniMapBuilder&&) = delete; \
	UWorldPartitionMiniMapBuilder(const UWorldPartitionMiniMapBuilder&) = delete; \
	UNREALED_API virtual ~UWorldPartitionMiniMapBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionMiniMapBuilder;

// ********** End Class UWorldPartitionMiniMapBuilder **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
