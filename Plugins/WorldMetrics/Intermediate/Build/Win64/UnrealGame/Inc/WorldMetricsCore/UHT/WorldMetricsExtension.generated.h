// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMetricsExtension.h"

#ifdef WORLDMETRICSCORE_WorldMetricsExtension_generated_h
#error "WorldMetricsExtension.generated.h already included, missing '#pragma once' in WorldMetricsExtension.h"
#endif
#define WORLDMETRICSCORE_WorldMetricsExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldMetricsExtension ***************************************************
struct Z_Construct_UClass_UWorldMetricsExtension_Statics;
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsExtension_NoRegister();

#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMetricsExtension(); \
	friend struct ::Z_Construct_UClass_UWorldMetricsExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDMETRICSCORE_API UClass* ::Z_Construct_UClass_UWorldMetricsExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldMetricsExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WorldMetricsCore"), Z_Construct_UClass_UWorldMetricsExtension_NoRegister) \
	DECLARE_SERIALIZER(UWorldMetricsExtension) \
	DECLARE_WITHIN(UWorldMetricsSubsystem)


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDMETRICSCORE_API UWorldMetricsExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldMetricsExtension(UWorldMetricsExtension&&) = delete; \
	UWorldMetricsExtension(const UWorldMetricsExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDMETRICSCORE_API, UWorldMetricsExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMetricsExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMetricsExtension) \
	WORLDMETRICSCORE_API virtual ~UWorldMetricsExtension();


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_19_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldMetricsExtension;

// ********** End Class UWorldMetricsExtension *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
