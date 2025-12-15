// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Core/Analytics/NetAnalyticsAggregatorConfig.h"

#ifdef NETCORE_NetAnalyticsAggregatorConfig_generated_h
#error "NetAnalyticsAggregatorConfig.generated.h already included, missing '#pragma once' in NetAnalyticsAggregatorConfig.h"
#endif
#define NETCORE_NetAnalyticsAggregatorConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetAnalyticsDataConfig *******************************************
struct Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics;
#define FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics; \
	NETCORE_API static class UScriptStruct* StaticStruct();


struct FNetAnalyticsDataConfig;
// ********** End ScriptStruct FNetAnalyticsDataConfig *********************************************

// ********** Begin Class UNetAnalyticsAggregatorConfig ********************************************
struct Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics;
NETCORE_API UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUNetAnalyticsAggregatorConfig(); \
	friend struct ::Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCORE_API UClass* ::Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetAnalyticsAggregatorConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetCore"), Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetAnalyticsAggregatorConfig)


#define FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetAnalyticsAggregatorConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetAnalyticsAggregatorConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetAnalyticsAggregatorConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetAnalyticsAggregatorConfig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetAnalyticsAggregatorConfig(UNetAnalyticsAggregatorConfig&&) = delete; \
	UNetAnalyticsAggregatorConfig(const UNetAnalyticsAggregatorConfig&) = delete; \
	NO_API virtual ~UNetAnalyticsAggregatorConfig();


#define FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_32_PROLOG
#define FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_35_INCLASS \
	FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetAnalyticsAggregatorConfig;

// ********** End Class UNetAnalyticsAggregatorConfig **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
