// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/NetworkMetricsConfig.h"

#ifdef ENGINE_NetworkMetricsConfig_generated_h
#error "NetworkMetricsConfig.generated.h already included, missing '#pragma once' in NetworkMetricsConfig.h"
#endif
#define ENGINE_NetworkMetricsConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetworkMetricConfig **********************************************
struct Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkMetricConfig;
// ********** End ScriptStruct FNetworkMetricConfig ************************************************

// ********** Begin Class UNetworkMetricsConfig ****************************************************
struct Z_Construct_UClass_UNetworkMetricsConfig_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsConfig_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsConfig(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsConfig)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkMetricsConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsConfig(UNetworkMetricsConfig&&) = delete; \
	UNetworkMetricsConfig(const UNetworkMetricsConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkMetricsConfig) \
	NO_API virtual ~UNetworkMetricsConfig();


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_42_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsConfig;

// ********** End Class UNetworkMetricsConfig ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h

// ********** Begin Enum ENetworkMetricEnableMode **************************************************
#define FOREACH_ENUM_ENETWORKMETRICENABLEMODE(op) \
	op(ENetworkMetricEnableMode::EnableForAllReplication) \
	op(ENetworkMetricEnableMode::EnableForIrisOnly) \
	op(ENetworkMetricEnableMode::EnableForNonIrisOnly) \
	op(ENetworkMetricEnableMode::ServerOnly) \
	op(ENetworkMetricEnableMode::ClientOnly) 

enum class ENetworkMetricEnableMode : uint8;
template<> struct TIsUEnumClass<ENetworkMetricEnableMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkMetricEnableMode>();
// ********** End Enum ENetworkMetricEnableMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
