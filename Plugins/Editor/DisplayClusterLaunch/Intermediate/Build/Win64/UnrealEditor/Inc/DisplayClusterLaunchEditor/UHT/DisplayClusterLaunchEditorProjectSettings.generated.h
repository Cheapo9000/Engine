// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterLaunchEditorProjectSettings.h"

#ifdef DISPLAYCLUSTERLAUNCHEDITOR_DisplayClusterLaunchEditorProjectSettings_generated_h
#error "DisplayClusterLaunchEditorProjectSettings.generated.h already included, missing '#pragma once' in DisplayClusterLaunchEditorProjectSettings.h"
#endif
#define DISPLAYCLUSTERLAUNCHEDITOR_DisplayClusterLaunchEditorProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDisplayClusterLaunchLoggingConstruct *****************************
struct Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics;
#define FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics; \
	DISPLAYCLUSTERLAUNCHEDITOR_API static class UScriptStruct* StaticStruct();


struct FDisplayClusterLaunchLoggingConstruct;
// ********** End ScriptStruct FDisplayClusterLaunchLoggingConstruct *******************************

// ********** Begin Class UDisplayClusterLaunchEditorProjectSettings *******************************
struct Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics;
DISPLAYCLUSTERLAUNCHEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_NoRegister();

#define FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterLaunchEditorProjectSettings(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERLAUNCHEDITOR_API UClass* ::Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterLaunchEditorProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayClusterLaunchEditor"), Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterLaunchEditorProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DisplayClusterLaunch");} \



#define FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterLaunchEditorProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterLaunchEditorProjectSettings(UDisplayClusterLaunchEditorProjectSettings&&) = delete; \
	UDisplayClusterLaunchEditorProjectSettings(const UDisplayClusterLaunchEditorProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterLaunchEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterLaunchEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterLaunchEditorProjectSettings) \
	NO_API virtual ~UDisplayClusterLaunchEditorProjectSettings();


#define FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_58_PROLOG
#define FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterLaunchEditorProjectSettings;

// ********** End Class UDisplayClusterLaunchEditorProjectSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h

// ********** Begin Enum EDisplayClusterLaunchLogVerbosity *****************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERLAUNCHLOGVERBOSITY(op) \
	op(Fatal) \
	op(Error) \
	op(Warning) \
	op(Display) \
	op(Log) \
	op(Verbose) \
	op(VeryVerbose) 

enum EDisplayClusterLaunchLogVerbosity : int;
template<> DISPLAYCLUSTERLAUNCHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterLaunchLogVerbosity>();
// ********** End Enum EDisplayClusterLaunchLogVerbosity *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
