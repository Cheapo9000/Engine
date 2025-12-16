// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PythonScriptPluginSettings.h"

#ifdef PYTHONSCRIPTPLUGIN_PythonScriptPluginSettings_generated_h
#error "PythonScriptPluginSettings.generated.h already included, missing '#pragma once' in PythonScriptPluginSettings.h"
#endif
#define PYTHONSCRIPTPLUGIN_PythonScriptPluginSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPythonScriptPluginSettings **********************************************
struct Z_Construct_UClass_UPythonScriptPluginSettings_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptPluginSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonScriptPluginSettings(); \
	friend struct ::Z_Construct_UClass_UPythonScriptPluginSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonScriptPluginSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonScriptPluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonScriptPluginSettings_NoRegister) \
	DECLARE_SERIALIZER(UPythonScriptPluginSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonScriptPluginSettings(UPythonScriptPluginSettings&&) = delete; \
	UPythonScriptPluginSettings(const UPythonScriptPluginSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonScriptPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScriptPluginSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPythonScriptPluginSettings) \
	NO_API virtual ~UPythonScriptPluginSettings();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonScriptPluginSettings;

// ********** End Class UPythonScriptPluginSettings ************************************************

// ********** Begin Class UPythonScriptPluginUserSettings ******************************************
struct Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptPluginUserSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonScriptPluginUserSettings(); \
	friend struct ::Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonScriptPluginUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonScriptPluginUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonScriptPluginUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UPythonScriptPluginUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_155_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonScriptPluginUserSettings(UPythonScriptPluginUserSettings&&) = delete; \
	UPythonScriptPluginUserSettings(const UPythonScriptPluginUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonScriptPluginUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScriptPluginUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPythonScriptPluginUserSettings) \
	NO_API virtual ~UPythonScriptPluginUserSettings();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_152_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonScriptPluginUserSettings;

// ********** End Class UPythonScriptPluginUserSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h

// ********** Begin Enum ETypeHintingMode **********************************************************
#define FOREACH_ENUM_ETYPEHINTINGMODE(op) \
	op(ETypeHintingMode::Off) \
	op(ETypeHintingMode::AutoCompletion) \
	op(ETypeHintingMode::TypeChecker) 

enum class ETypeHintingMode : uint8;
template<> struct TIsUEnumClass<ETypeHintingMode> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypeHintingMode>();
// ********** End Enum ETypeHintingMode ************************************************************

// ********** Begin Enum EPythonEnabledOverrideState ***********************************************
#define FOREACH_ENUM_EPYTHONENABLEDOVERRIDESTATE(op) \
	op(EPythonEnabledOverrideState::None) \
	op(EPythonEnabledOverrideState::Enable) \
	op(EPythonEnabledOverrideState::Disable) 

enum class EPythonEnabledOverrideState : uint8;
template<> struct TIsUEnumClass<EPythonEnabledOverrideState> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<EPythonEnabledOverrideState>();
// ********** End Enum EPythonEnabledOverrideState *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
