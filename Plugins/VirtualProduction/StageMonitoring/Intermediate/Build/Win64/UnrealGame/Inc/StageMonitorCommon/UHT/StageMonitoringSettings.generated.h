// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageMonitoringSettings.h"

#ifdef STAGEMONITORCOMMON_StageMonitoringSettings_generated_h
#error "StageMonitoringSettings.generated.h already included, missing '#pragma once' in StageMonitoringSettings.h"
#endif
#define STAGEMONITORCOMMON_StageMonitoringSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStageMessageTypeWrapper ******************************************
struct Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics;
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageMessageTypeWrapper;
// ********** End ScriptStruct FStageMessageTypeWrapper ********************************************

// ********** Begin ScriptStruct FStageDataExportSettings ******************************************
struct Z_Construct_UScriptStruct_FStageDataExportSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageDataExportSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageDataExportSettings;
// ********** End ScriptStruct FStageDataExportSettings ********************************************

// ********** Begin ScriptStruct FStageFramePerformanceSettings ************************************
struct Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageFramePerformanceSettings;
// ********** End ScriptStruct FStageFramePerformanceSettings **************************************

// ********** Begin ScriptStruct FStageHitchDetectionSettings **************************************
struct Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageHitchDetectionSettings;
// ********** End ScriptStruct FStageHitchDetectionSettings ****************************************

// ********** Begin ScriptStruct FStageDataProviderSettings ****************************************
struct Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageDataProviderSettings;
// ********** End ScriptStruct FStageDataProviderSettings ******************************************

// ********** Begin ScriptStruct FStageMonitorSettings *********************************************
struct Z_Construct_UScriptStruct_FStageMonitorSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStageMonitorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStageMonitorSettings;
// ********** End ScriptStruct FStageMonitorSettings ***********************************************

// ********** Begin Class UStageMonitoringSettings *************************************************
struct Z_Construct_UClass_UStageMonitoringSettings_Statics;
STAGEMONITORCOMMON_API UClass* Z_Construct_UClass_UStageMonitoringSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStageMonitoringSettings(); \
	friend struct ::Z_Construct_UClass_UStageMonitoringSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STAGEMONITORCOMMON_API UClass* ::Z_Construct_UClass_UStageMonitoringSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStageMonitoringSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StageMonitorCommon"), Z_Construct_UClass_UStageMonitoringSettings_NoRegister) \
	DECLARE_SERIALIZER(UStageMonitoringSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStageMonitoringSettings(UStageMonitoringSettings&&) = delete; \
	UStageMonitoringSettings(const UStageMonitoringSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageMonitoringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageMonitoringSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStageMonitoringSettings) \
	NO_API virtual ~UStageMonitoringSettings();


#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_184_PROLOG
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStageMonitoringSettings;

// ********** End Class UStageMonitoringSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
