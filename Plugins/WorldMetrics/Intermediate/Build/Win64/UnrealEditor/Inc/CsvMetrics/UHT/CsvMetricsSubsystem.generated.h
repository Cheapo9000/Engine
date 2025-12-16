// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CsvMetricsSubsystem.h"

#ifdef CSVMETRICS_CsvMetricsSubsystem_generated_h
#error "CsvMetricsSubsystem.generated.h already included, missing '#pragma once' in CsvMetricsSubsystem.h"
#endif
#define CSVMETRICS_CsvMetricsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCsvMetricsSubsystem *****************************************************
struct Z_Construct_UClass_UCsvMetricsSubsystem_Statics;
CSVMETRICS_API UClass* Z_Construct_UClass_UCsvMetricsSubsystem_NoRegister();

#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCsvMetricsSubsystem(); \
	friend struct ::Z_Construct_UClass_UCsvMetricsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CSVMETRICS_API UClass* ::Z_Construct_UClass_UCsvMetricsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCsvMetricsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CsvMetrics"), Z_Construct_UClass_UCsvMetricsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCsvMetricsSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CSVMETRICS_API UCsvMetricsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCsvMetricsSubsystem(UCsvMetricsSubsystem&&) = delete; \
	UCsvMetricsSubsystem(const UCsvMetricsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CSVMETRICS_API, UCsvMetricsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCsvMetricsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCsvMetricsSubsystem) \
	CSVMETRICS_API virtual ~UCsvMetricsSubsystem();


#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCsvMetricsSubsystem;

// ********** End Class UCsvMetricsSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
