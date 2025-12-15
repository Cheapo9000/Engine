// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionBuilder.h"

#ifdef UNREALED_WorldPartitionBuilder_generated_h
#error "WorldPartitionBuilder.generated.h already included, missing '#pragma once' in WorldPartitionBuilder.h"
#endif
#define UNREALED_WorldPartitionBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionBuilder ***************************************************
struct Z_Construct_UClass_UWorldPartitionBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionBuilder(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldPartitionBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldPartitionBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionBuilder(UWorldPartitionBuilder&&) = delete; \
	UWorldPartitionBuilder(const UWorldPartitionBuilder&) = delete; \
	UNREALED_API virtual ~UWorldPartitionBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_37_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionBuilder;

// ********** End Class UWorldPartitionBuilder *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
