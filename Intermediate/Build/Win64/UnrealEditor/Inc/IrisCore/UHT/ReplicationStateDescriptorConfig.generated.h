// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationState/ReplicationStateDescriptorConfig.h"

#ifdef IRISCORE_ReplicationStateDescriptorConfig_generated_h
#error "ReplicationStateDescriptorConfig.generated.h already included, missing '#pragma once' in ReplicationStateDescriptorConfig.h"
#endif
#define IRISCORE_ReplicationStateDescriptorConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FReplicationStateDescriptorClassPushModelConfig *******************
struct Z_Construct_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReplicationStateDescriptorClassPushModelConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FReplicationStateDescriptorClassPushModelConfig;
// ********** End ScriptStruct FReplicationStateDescriptorClassPushModelConfig *********************

// ********** Begin ScriptStruct FSupportsStructNetSerializerConfig ********************************
struct Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FSupportsStructNetSerializerConfig;
// ********** End ScriptStruct FSupportsStructNetSerializerConfig **********************************

// ********** Begin Class UReplicationStateDescriptorConfig ****************************************
struct Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationStateDescriptorConfig(); \
	friend struct ::Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationStateDescriptorConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister) \
	DECLARE_SERIALIZER(UReplicationStateDescriptorConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationStateDescriptorConfig(UReplicationStateDescriptorConfig&&) = delete; \
	UReplicationStateDescriptorConfig(const UReplicationStateDescriptorConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationStateDescriptorConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationStateDescriptorConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationStateDescriptorConfig) \
	NO_API virtual ~UReplicationStateDescriptorConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_33_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationStateDescriptorConfig;

// ********** End Class UReplicationStateDescriptorConfig ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
