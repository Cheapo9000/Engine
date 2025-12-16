// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/Builders/HLODBuilderCustomHLODActor.h"

#ifdef WORLDPARTITIONHLODUTILITIES_HLODBuilderCustomHLODActor_generated_h
#error "HLODBuilderCustomHLODActor.generated.h already included, missing '#pragma once' in HLODBuilderCustomHLODActor.h"
#endif
#define WORLDPARTITIONHLODUTILITIES_HLODBuilderCustomHLODActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHLODBuilderCustomHLODActorSettings **************************************
struct Z_Construct_UClass_UHLODBuilderCustomHLODActorSettings_Statics;
WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderCustomHLODActorSettings_NoRegister();

#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHLODBuilderCustomHLODActorSettings(); \
	friend struct ::Z_Construct_UClass_UHLODBuilderCustomHLODActorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDPARTITIONHLODUTILITIES_API UClass* ::Z_Construct_UClass_UHLODBuilderCustomHLODActorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODBuilderCustomHLODActorSettings, UHLODBuilderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldPartitionHLODUtilities"), Z_Construct_UClass_UHLODBuilderCustomHLODActorSettings_NoRegister) \
	DECLARE_SERIALIZER(UHLODBuilderCustomHLODActorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODBuilderCustomHLODActorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODBuilderCustomHLODActorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODBuilderCustomHLODActorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODBuilderCustomHLODActorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODBuilderCustomHLODActorSettings(UHLODBuilderCustomHLODActorSettings&&) = delete; \
	UHLODBuilderCustomHLODActorSettings(const UHLODBuilderCustomHLODActorSettings&) = delete; \
	NO_API virtual ~UHLODBuilderCustomHLODActorSettings();


#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_9_PROLOG
#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_12_INCLASS \
	FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODBuilderCustomHLODActorSettings;

// ********** End Class UHLODBuilderCustomHLODActorSettings ****************************************

// ********** Begin Class UHLODBuilderCustomHLODActor **********************************************
struct Z_Construct_UClass_UHLODBuilderCustomHLODActor_Statics;
WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderCustomHLODActor_NoRegister();

#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUHLODBuilderCustomHLODActor(); \
	friend struct ::Z_Construct_UClass_UHLODBuilderCustomHLODActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDPARTITIONHLODUTILITIES_API UClass* ::Z_Construct_UClass_UHLODBuilderCustomHLODActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UHLODBuilderCustomHLODActor, UHLODBuilder, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldPartitionHLODUtilities"), Z_Construct_UClass_UHLODBuilderCustomHLODActor_NoRegister) \
	DECLARE_SERIALIZER(UHLODBuilderCustomHLODActor)


#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODBuilderCustomHLODActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODBuilderCustomHLODActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODBuilderCustomHLODActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODBuilderCustomHLODActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHLODBuilderCustomHLODActor(UHLODBuilderCustomHLODActor&&) = delete; \
	UHLODBuilderCustomHLODActor(const UHLODBuilderCustomHLODActor&) = delete; \
	NO_API virtual ~UHLODBuilderCustomHLODActor();


#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_17_PROLOG
#define FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_20_INCLASS \
	FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHLODBuilderCustomHLODActor;

// ********** End Class UHLODBuilderCustomHLODActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_WorldPartition_HLOD_Builders_HLODBuilderCustomHLODActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
