// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/WorldPartitionConvertCommandlet.h"

#ifdef UNREALED_WorldPartitionConvertCommandlet_generated_h
#error "WorldPartitionConvertCommandlet.generated.h already included, missing '#pragma once' in WorldPartitionConvertCommandlet.h"
#endif
#define UNREALED_WorldPartitionConvertCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHLODLayerActorMapping ********************************************
struct Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FHLODLayerActorMapping;
// ********** End ScriptStruct FHLODLayerActorMapping **********************************************

// ********** Begin Class UWorldPartitionConvertCommandlet *****************************************
struct Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionConvertCommandlet(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionConvertCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionConvertCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldPartitionConvertCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionConvertCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldPartitionConvertCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionConvertCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionConvertCommandlet(UWorldPartitionConvertCommandlet&&) = delete; \
	UWorldPartitionConvertCommandlet(const UWorldPartitionConvertCommandlet&) = delete; \
	UNREALED_API virtual ~UWorldPartitionConvertCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_34_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_37_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionConvertCommandlet;

// ********** End Class UWorldPartitionConvertCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
