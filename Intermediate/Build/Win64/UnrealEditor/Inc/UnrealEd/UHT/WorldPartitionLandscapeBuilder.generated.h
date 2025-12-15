// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionLandscapeBuilder.h"

#ifdef UNREALED_WorldPartitionLandscapeBuilder_generated_h
#error "WorldPartitionLandscapeBuilder.generated.h already included, missing '#pragma once' in WorldPartitionLandscapeBuilder.h"
#endif
#define UNREALED_WorldPartitionLandscapeBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionLandscapeBuilder ******************************************
struct Z_Construct_UClass_UWorldPartitionLandscapeBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionLandscapeBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeBuilder_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionLandscapeBuilder(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionLandscapeBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionLandscapeBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionLandscapeBuilder, UWorldPartitionBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionLandscapeBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionLandscapeBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeBuilder_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldPartitionLandscapeBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionLandscapeBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldPartitionLandscapeBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionLandscapeBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionLandscapeBuilder(UWorldPartitionLandscapeBuilder&&) = delete; \
	UWorldPartitionLandscapeBuilder(const UWorldPartitionLandscapeBuilder&) = delete; \
	UNREALED_API virtual ~UWorldPartitionLandscapeBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeBuilder_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeBuilder_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeBuilder_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeBuilder_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionLandscapeBuilder;

// ********** End Class UWorldPartitionLandscapeBuilder ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
