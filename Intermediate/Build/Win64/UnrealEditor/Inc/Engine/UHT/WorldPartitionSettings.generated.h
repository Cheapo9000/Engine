// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionSettings.h"

#ifdef ENGINE_WorldPartitionSettings_generated_h
#error "WorldPartitionSettings.generated.h already included, missing '#pragma once' in WorldPartitionSettings.h"
#endif
#define ENGINE_WorldPartitionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHLODLayerTypeUnsupportedActorClasses *****************************
struct Z_Construct_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHLODLayerTypeUnsupportedActorClasses;
// ********** End ScriptStruct FHLODLayerTypeUnsupportedActorClasses *******************************

// ********** Begin Class UWorldPartitionSettings **************************************************
struct Z_Construct_UClass_UWorldPartitionSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionSettings(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionSettings(UWorldPartitionSettings&&) = delete; \
	UWorldPartitionSettings(const UWorldPartitionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionSettings) \
	ENGINE_API virtual ~UWorldPartitionSettings();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionSettings;

// ********** End Class UWorldPartitionSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
