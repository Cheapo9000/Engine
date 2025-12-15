// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionStaticLightingBuilder.h"

#ifdef UNREALED_WorldPartitionStaticLightingBuilder_generated_h
#error "WorldPartitionStaticLightingBuilder.generated.h already included, missing '#pragma once' in WorldPartitionStaticLightingBuilder.h"
#endif
#define UNREALED_WorldPartitionStaticLightingBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionStaticLightingBuilder *************************************
struct Z_Construct_UClass_UWorldPartitionStaticLightingBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionStaticLightingBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionStaticLightingBuilder_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionStaticLightingBuilder(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionStaticLightingBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionStaticLightingBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionStaticLightingBuilder, UWorldPartitionBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionStaticLightingBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionStaticLightingBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionStaticLightingBuilder_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionStaticLightingBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionStaticLightingBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionStaticLightingBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionStaticLightingBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionStaticLightingBuilder(UWorldPartitionStaticLightingBuilder&&) = delete; \
	UWorldPartitionStaticLightingBuilder(const UWorldPartitionStaticLightingBuilder&) = delete; \
	NO_API virtual ~UWorldPartitionStaticLightingBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionStaticLightingBuilder_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionStaticLightingBuilder_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionStaticLightingBuilder_h_28_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionStaticLightingBuilder_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionStaticLightingBuilder;

// ********** End Class UWorldPartitionStaticLightingBuilder ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionStaticLightingBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
