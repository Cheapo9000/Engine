// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXEditorSettings.h"

#ifdef DMXEDITOR_DMXEditorSettings_generated_h
#error "DMXEditorSettings.generated.h already included, missing '#pragma once' in DMXEditorSettings.h"
#endif
#define DMXEDITOR_DMXEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDMXMVRFixtureListSettings ****************************************
struct Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics; \
	DMXEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXMVRFixtureListSettings;
// ********** End ScriptStruct FDMXMVRFixtureListSettings ******************************************

// ********** Begin ScriptStruct FDMXMVRFixturePatcherSettings *************************************
struct Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics; \
	DMXEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXMVRFixturePatcherSettings;
// ********** End ScriptStruct FDMXMVRFixturePatcherSettings ***************************************

// ********** Begin ScriptStruct FDMXFixtureTypeFunctionsEditorSettings ****************************
struct Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics; \
	DMXEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXFixtureTypeFunctionsEditorSettings;
// ********** End ScriptStruct FDMXFixtureTypeFunctionsEditorSettings ******************************

// ********** Begin ScriptStruct FDMXOutputConsoleFaderDescriptor **********************************
struct Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics; \
	DMXEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXOutputConsoleFaderDescriptor;
// ********** End ScriptStruct FDMXOutputConsoleFaderDescriptor ************************************

// ********** Begin ScriptStruct FDMXMonitorSourceDescriptor ***************************************
struct Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics; \
	DMXEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXMonitorSourceDescriptor;
// ********** End ScriptStruct FDMXMonitorSourceDescriptor *****************************************

// ********** Begin ScriptStruct FDMXConflictMonitorSettings ***************************************
struct Z_Construct_UScriptStruct_FDMXConflictMonitorSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_154_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXConflictMonitorSettings_Statics; \
	DMXEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXConflictMonitorSettings;
// ********** End ScriptStruct FDMXConflictMonitorSettings *****************************************

// ********** Begin Class UDMXEditorSettings *******************************************************
struct Z_Construct_UClass_UDMXEditorSettings_Statics;
DMXEDITOR_API UClass* Z_Construct_UClass_UDMXEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_177_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEditorSettings(); \
	friend struct ::Z_Construct_UClass_UDMXEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXEDITOR_API UClass* ::Z_Construct_UClass_UDMXEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXEditor"), Z_Construct_UClass_UDMXEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UDMXEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_177_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXEditorSettings(UDMXEditorSettings&&) = delete; \
	UDMXEditorSettings(const UDMXEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXEditorSettings) \
	NO_API virtual ~UDMXEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_174_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_177_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_177_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_177_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXEditorSettings;

// ********** End Class UDMXEditorSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h

// ********** Begin Enum EDMXFixturePatcherNameDisplayMode *****************************************
#define FOREACH_ENUM_EDMXFIXTUREPATCHERNAMEDISPLAYMODE(op) \
	op(EDMXFixturePatcherNameDisplayMode::FixtureIDAndFixturePatchName) \
	op(EDMXFixturePatcherNameDisplayMode::FixtureID) \
	op(EDMXFixturePatcherNameDisplayMode::FixturePatchName) 

enum class EDMXFixturePatcherNameDisplayMode : uint8;
template<> struct TIsUEnumClass<EDMXFixturePatcherNameDisplayMode> { enum { Value = true }; };
template<> DMXEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXFixturePatcherNameDisplayMode>();
// ********** End Enum EDMXFixturePatcherNameDisplayMode *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
