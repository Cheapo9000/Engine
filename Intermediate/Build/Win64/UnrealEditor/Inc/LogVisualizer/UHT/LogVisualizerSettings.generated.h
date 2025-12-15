// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LogVisualizerSettings.h"

#ifdef LOGVISUALIZER_LogVisualizerSettings_generated_h
#error "LogVisualizerSettings.generated.h already included, missing '#pragma once' in LogVisualizerSettings.h"
#endif
#define LOGVISUALIZER_LogVisualizerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCategoryFilter ***************************************************
struct Z_Construct_UScriptStruct_FCategoryFilter_Statics;
#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCategoryFilter_Statics; \
	LOGVISUALIZER_API static class UScriptStruct* StaticStruct();


struct FCategoryFilter;
// ********** End ScriptStruct FCategoryFilter *****************************************************

// ********** Begin ScriptStruct FVisualLoggerFiltersData ******************************************
struct Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics;
#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics; \
	LOGVISUALIZER_API static class UScriptStruct* StaticStruct();


struct FVisualLoggerFiltersData;
// ********** End ScriptStruct FVisualLoggerFiltersData ********************************************

// ********** Begin ScriptStruct FVisualLoggerFilters **********************************************
struct Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics;
#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics; \
	LOGVISUALIZER_API static class UScriptStruct* StaticStruct(); \
	typedef FVisualLoggerFiltersData Super;


struct FVisualLoggerFilters;
// ********** End ScriptStruct FVisualLoggerFilters ************************************************

// ********** Begin Class ULogVisualizerSettings ***************************************************
struct Z_Construct_UClass_ULogVisualizerSettings_Statics;
LOGVISUALIZER_API UClass* Z_Construct_UClass_ULogVisualizerSettings_NoRegister();

#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_154_INCLASS \
private: \
	static void StaticRegisterNativesULogVisualizerSettings(); \
	friend struct ::Z_Construct_UClass_ULogVisualizerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOGVISUALIZER_API UClass* ::Z_Construct_UClass_ULogVisualizerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULogVisualizerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogVisualizer"), Z_Construct_UClass_ULogVisualizerSettings_NoRegister) \
	DECLARE_SERIALIZER(ULogVisualizerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOGVISUALIZER_API ULogVisualizerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogVisualizerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOGVISUALIZER_API, ULogVisualizerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogVisualizerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULogVisualizerSettings(ULogVisualizerSettings&&) = delete; \
	ULogVisualizerSettings(const ULogVisualizerSettings&) = delete; \
	LOGVISUALIZER_API virtual ~ULogVisualizerSettings();


#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_151_PROLOG
#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_154_INCLASS \
	FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULogVisualizerSettings;

// ********** End Class ULogVisualizerSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
