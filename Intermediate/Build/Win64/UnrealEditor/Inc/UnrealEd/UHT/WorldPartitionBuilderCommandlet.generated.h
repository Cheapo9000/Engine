// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/WorldPartitionBuilderCommandlet.h"

#ifdef UNREALED_WorldPartitionBuilderCommandlet_generated_h
#error "WorldPartitionBuilderCommandlet.generated.h already included, missing '#pragma once' in WorldPartitionBuilderCommandlet.h"
#endif
#define UNREALED_WorldPartitionBuilderCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionBuilderCommandlet *****************************************
struct Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilderCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionBuilderCommandlet(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionBuilderCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionBuilderCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionBuilderCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionBuilderCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionBuilderCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionBuilderCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionBuilderCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionBuilderCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionBuilderCommandlet(UWorldPartitionBuilderCommandlet&&) = delete; \
	UWorldPartitionBuilderCommandlet(const UWorldPartitionBuilderCommandlet&) = delete; \
	NO_API virtual ~UWorldPartitionBuilderCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionBuilderCommandlet;

// ********** End Class UWorldPartitionBuilderCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
