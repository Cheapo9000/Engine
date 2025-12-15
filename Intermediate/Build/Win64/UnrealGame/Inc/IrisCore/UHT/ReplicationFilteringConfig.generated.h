// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h"

#ifdef IRISCORE_ReplicationFilteringConfig_generated_h
#error "ReplicationFilteringConfig.generated.h already included, missing '#pragma once' in ReplicationFilteringConfig.h"
#endif
#define IRISCORE_ReplicationFilteringConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FObjectScopeHysteresisProfile *************************************
struct Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FObjectScopeHysteresisProfile;
// ********** End ScriptStruct FObjectScopeHysteresisProfile ***************************************

// ********** Begin Class UReplicationFilteringConfig **********************************************
struct Z_Construct_UClass_UReplicationFilteringConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UReplicationFilteringConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationFilteringConfig(); \
	friend struct ::Z_Construct_UClass_UReplicationFilteringConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UReplicationFilteringConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationFilteringConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UReplicationFilteringConfig_NoRegister) \
	DECLARE_SERIALIZER(UReplicationFilteringConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationFilteringConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationFilteringConfig(UReplicationFilteringConfig&&) = delete; \
	UReplicationFilteringConfig(const UReplicationFilteringConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationFilteringConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationFilteringConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationFilteringConfig) \
	NO_API virtual ~UReplicationFilteringConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_46_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationFilteringConfig;

// ********** End Class UReplicationFilteringConfig ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
