// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimedDataMonitorEditorSettings.h"

#ifdef TIMEDDATAMONITOREDITOR_TimedDataMonitorEditorSettings_generated_h
#error "TimedDataMonitorEditorSettings.generated.h already included, missing '#pragma once' in TimedDataMonitorEditorSettings.h"
#endif
#define TIMEDDATAMONITOREDITOR_TimedDataMonitorEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTimedDataMonitorEditorSettings ******************************************
struct Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics;
TIMEDDATAMONITOREDITOR_API UClass* Z_Construct_UClass_UTimedDataMonitorEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimedDataMonitorEditorSettings(); \
	friend struct ::Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEDDATAMONITOREDITOR_API UClass* ::Z_Construct_UClass_UTimedDataMonitorEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimedDataMonitorEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimedDataMonitorEditor"), Z_Construct_UClass_UTimedDataMonitorEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UTimedDataMonitorEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEDDATAMONITOREDITOR_API UTimedDataMonitorEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimedDataMonitorEditorSettings(UTimedDataMonitorEditorSettings&&) = delete; \
	UTimedDataMonitorEditorSettings(const UTimedDataMonitorEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEDDATAMONITOREDITOR_API, UTimedDataMonitorEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimedDataMonitorEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimedDataMonitorEditorSettings) \
	TIMEDDATAMONITOREDITOR_API virtual ~UTimedDataMonitorEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimedDataMonitorEditorSettings;

// ********** End Class UTimedDataMonitorEditorSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h

// ********** Begin Enum ETimedDataMonitorEditorCalibrationType ************************************
#define FOREACH_ENUM_ETIMEDDATAMONITOREDITORCALIBRATIONTYPE(op) \
	op(ETimedDataMonitorEditorCalibrationType::CalibrateWithTimecode) \
	op(ETimedDataMonitorEditorCalibrationType::TimeCorrection) \
	op(ETimedDataMonitorEditorCalibrationType::Max) 

enum class ETimedDataMonitorEditorCalibrationType;
template<> struct TIsUEnumClass<ETimedDataMonitorEditorCalibrationType> { enum { Value = true }; };
template<> TIMEDDATAMONITOREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimedDataMonitorEditorCalibrationType>();
// ********** End Enum ETimedDataMonitorEditorCalibrationType **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
