// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/RPCDoSDetectionConfig.h"

#ifdef ENGINE_RPCDoSDetectionConfig_generated_h
#error "RPCDoSDetectionConfig.generated.h already included, missing '#pragma once' in RPCDoSDetectionConfig.h"
#endif
#define ENGINE_RPCDoSDetectionConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRPCAnalyticsThreshold ********************************************
struct Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics;
#define FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRPCAnalyticsThreshold;
// ********** End ScriptStruct FRPCAnalyticsThreshold **********************************************

// ********** Begin Class URPCDoSDetectionConfig ***************************************************
struct Z_Construct_UClass_URPCDoSDetectionConfig_Statics;
ENGINE_API UClass* Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_40_INCLASS \
private: \
	static void StaticRegisterNativesURPCDoSDetectionConfig(); \
	friend struct ::Z_Construct_UClass_URPCDoSDetectionConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(URPCDoSDetectionConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister) \
	DECLARE_SERIALIZER(URPCDoSDetectionConfig)


#define FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPCDoSDetectionConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPCDoSDetectionConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPCDoSDetectionConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPCDoSDetectionConfig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPCDoSDetectionConfig(URPCDoSDetectionConfig&&) = delete; \
	URPCDoSDetectionConfig(const URPCDoSDetectionConfig&) = delete; \
	NO_API virtual ~URPCDoSDetectionConfig();


#define FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPCDoSDetectionConfig;

// ********** End Class URPCDoSDetectionConfig *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
