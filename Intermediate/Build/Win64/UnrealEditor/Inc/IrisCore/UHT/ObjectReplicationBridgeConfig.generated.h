// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h"

#ifdef IRISCORE_ObjectReplicationBridgeConfig_generated_h
#error "ObjectReplicationBridgeConfig.generated.h already included, missing '#pragma once' in ObjectReplicationBridgeConfig.h"
#endif
#define IRISCORE_ObjectReplicationBridgeConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FObjectReplicationBridgePollConfig ********************************
struct Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectReplicationBridgePollConfig;
// ********** End ScriptStruct FObjectReplicationBridgePollConfig **********************************

// ********** Begin ScriptStruct FObjectReplicationBridgeFilterConfig ******************************
struct Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectReplicationBridgeFilterConfig;
// ********** End ScriptStruct FObjectReplicationBridgeFilterConfig ********************************

// ********** Begin ScriptStruct FObjectReplicationBridgePrioritizerConfig *************************
struct Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectReplicationBridgePrioritizerConfig;
// ********** End ScriptStruct FObjectReplicationBridgePrioritizerConfig ***************************

// ********** Begin ScriptStruct FObjectReplicationBridgeDeltaCompressionConfig ********************
struct Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectReplicationBridgeDeltaCompressionConfig;
// ********** End ScriptStruct FObjectReplicationBridgeDeltaCompressionConfig **********************

// ********** Begin ScriptStruct FObjectReplicatedBridgeCriticalClassConfig ************************
struct Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectReplicatedBridgeCriticalClassConfig;
// ********** End ScriptStruct FObjectReplicatedBridgeCriticalClassConfig **************************

// ********** Begin ScriptStruct FObjectReplicationBridgeAsyncLoadingClassConfig *******************
struct Z_Construct_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_110_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectReplicationBridgeAsyncLoadingClassConfig;
// ********** End ScriptStruct FObjectReplicationBridgeAsyncLoadingClassConfig *********************

// ********** Begin ScriptStruct FObjectReplicationBridgeTypeStatsConfig ***************************
struct Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectReplicationBridgeTypeStatsConfig;
// ********** End ScriptStruct FObjectReplicationBridgeTypeStatsConfig *****************************

// ********** Begin Class UObjectReplicationBridgeConfig *******************************************
struct Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectReplicationBridgeConfig(); \
	friend struct ::Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectReplicationBridgeConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister) \
	DECLARE_SERIALIZER(UObjectReplicationBridgeConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_142_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectReplicationBridgeConfig(UObjectReplicationBridgeConfig&&) = delete; \
	UObjectReplicationBridgeConfig(const UObjectReplicationBridgeConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectReplicationBridgeConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectReplicationBridgeConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectReplicationBridgeConfig) \
	NO_API virtual ~UObjectReplicationBridgeConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_139_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_142_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectReplicationBridgeConfig;

// ********** End Class UObjectReplicationBridgeConfig *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
