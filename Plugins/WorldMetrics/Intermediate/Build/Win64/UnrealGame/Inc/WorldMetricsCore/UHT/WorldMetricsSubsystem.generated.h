// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMetricsSubsystem.h"

#ifdef WORLDMETRICSCORE_WorldMetricsSubsystem_generated_h
#error "WorldMetricsSubsystem.generated.h already included, missing '#pragma once' in WorldMetricsSubsystem.h"
#endif
#define WORLDMETRICSCORE_WorldMetricsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldMetricsSubsystem ***************************************************
struct Z_Construct_UClass_UWorldMetricsSubsystem_Statics;
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister();

#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMetricsSubsystem(); \
	friend struct ::Z_Construct_UClass_UWorldMetricsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDMETRICSCORE_API UClass* ::Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldMetricsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldMetricsCore"), Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWorldMetricsSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDMETRICSCORE_API UWorldMetricsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldMetricsSubsystem(UWorldMetricsSubsystem&&) = delete; \
	UWorldMetricsSubsystem(const UWorldMetricsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDMETRICSCORE_API, UWorldMetricsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMetricsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldMetricsSubsystem) \
	WORLDMETRICSCORE_API virtual ~UWorldMetricsSubsystem();


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_28_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldMetricsSubsystem;

// ********** End Class UWorldMetricsSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
