// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionNavigationDataBuilder.h"

#ifdef UNREALED_WorldPartitionNavigationDataBuilder_generated_h
#error "WorldPartitionNavigationDataBuilder.generated.h already included, missing '#pragma once' in WorldPartitionNavigationDataBuilder.h"
#endif
#define UNREALED_WorldPartitionNavigationDataBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionNavigationDataBuilder *************************************
struct Z_Construct_UClass_UWorldPartitionNavigationDataBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionNavigationDataBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionNavigationDataBuilder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionNavigationDataBuilder(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionNavigationDataBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionNavigationDataBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionNavigationDataBuilder, UWorldPartitionBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionNavigationDataBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionNavigationDataBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionNavigationDataBuilder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionNavigationDataBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionNavigationDataBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionNavigationDataBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionNavigationDataBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionNavigationDataBuilder(UWorldPartitionNavigationDataBuilder&&) = delete; \
	UWorldPartitionNavigationDataBuilder(const UWorldPartitionNavigationDataBuilder&) = delete; \
	NO_API virtual ~UWorldPartitionNavigationDataBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionNavigationDataBuilder_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionNavigationDataBuilder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionNavigationDataBuilder_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionNavigationDataBuilder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionNavigationDataBuilder;

// ********** End Class UWorldPartitionNavigationDataBuilder ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionNavigationDataBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
