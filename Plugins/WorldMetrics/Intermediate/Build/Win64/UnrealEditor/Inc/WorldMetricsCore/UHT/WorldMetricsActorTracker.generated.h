// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMetricsActorTracker.h"

#ifdef WORLDMETRICSCORE_WorldMetricsActorTracker_generated_h
#error "WorldMetricsActorTracker.generated.h already included, missing '#pragma once' in WorldMetricsActorTracker.h"
#endif
#define WORLDMETRICSCORE_WorldMetricsActorTracker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldMetricsActorTracker ************************************************
struct Z_Construct_UClass_UWorldMetricsActorTracker_Statics;
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister();

#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMetricsActorTracker(); \
	friend struct ::Z_Construct_UClass_UWorldMetricsActorTracker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDMETRICSCORE_API UClass* ::Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldMetricsActorTracker, UWorldMetricsExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldMetricsCore"), Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister) \
	DECLARE_SERIALIZER(UWorldMetricsActorTracker)


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDMETRICSCORE_API UWorldMetricsActorTracker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldMetricsActorTracker(UWorldMetricsActorTracker&&) = delete; \
	UWorldMetricsActorTracker(const UWorldMetricsActorTracker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDMETRICSCORE_API, UWorldMetricsActorTracker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMetricsActorTracker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMetricsActorTracker) \
	WORLDMETRICSCORE_API virtual ~UWorldMetricsActorTracker();


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_22_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldMetricsActorTracker;

// ********** End Class UWorldMetricsActorTracker **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
