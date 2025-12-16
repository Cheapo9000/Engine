// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterEditorSettings.h"

#ifdef WATEREDITOR_WaterEditorSettings_generated_h
#error "WaterEditorSettings.generated.h already included, missing '#pragma once' in WaterEditorSettings.h"
#endif
#define WATEREDITOR_WaterEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWaterBrushActorDefaults ******************************************
struct Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct();


struct FWaterBrushActorDefaults;
// ********** End ScriptStruct FWaterBrushActorDefaults ********************************************

// ********** Begin ScriptStruct FWaterZoneActorDefaults *******************************************
struct Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct();


struct FWaterZoneActorDefaults;
// ********** End ScriptStruct FWaterZoneActorDefaults *********************************************

// ********** Begin ScriptStruct FWaterBodyDefaults ************************************************
struct Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct();


struct FWaterBodyDefaults;
// ********** End ScriptStruct FWaterBodyDefaults **************************************************

// ********** Begin ScriptStruct FWaterBodyRiverDefaults *******************************************
struct Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


struct FWaterBodyRiverDefaults;
// ********** End ScriptStruct FWaterBodyRiverDefaults *********************************************

// ********** Begin ScriptStruct FWaterBodyLakeDefaults ********************************************
struct Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


struct FWaterBodyLakeDefaults;
// ********** End ScriptStruct FWaterBodyLakeDefaults **********************************************

// ********** Begin ScriptStruct FWaterBodyOceanDefaults *******************************************
struct Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


struct FWaterBodyOceanDefaults;
// ********** End ScriptStruct FWaterBodyOceanDefaults *********************************************

// ********** Begin ScriptStruct FWaterBodyCustomDefaults ******************************************
struct Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


struct FWaterBodyCustomDefaults;
// ********** End ScriptStruct FWaterBodyCustomDefaults ********************************************

// ********** Begin ScriptStruct FWaterBodyIslandDefaults ******************************************
struct Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct();


struct FWaterBodyIslandDefaults;
// ********** End ScriptStruct FWaterBodyIslandDefaults ********************************************

// ********** Begin Class UWaterEditorSettings *****************************************************
struct Z_Construct_UClass_UWaterEditorSettings_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterEditorSettings(); \
	friend struct ::Z_Construct_UClass_UWaterEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UWaterEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_191_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterEditorSettings(UWaterEditorSettings&&) = delete; \
	UWaterEditorSettings(const UWaterEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterEditorSettings) \
	WATEREDITOR_API virtual ~UWaterEditorSettings();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_188_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_191_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterEditorSettings;

// ********** End Class UWaterEditorSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
