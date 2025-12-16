// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMediaSettings.h"

#ifdef AVALANCHEMEDIA_AvaMediaSettings_generated_h
#error "AvaMediaSettings.generated.h already included, missing '#pragma once' in AvaMediaSettings.h"
#endif
#define AVALANCHEMEDIA_AvaMediaSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaPlaybackServerLoggingEntry ************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackServerLoggingEntry_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackServerLoggingEntry_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaPlaybackServerLoggingEntry;
// ********** End ScriptStruct FAvaPlaybackServerLoggingEntry **************************************

// ********** Begin ScriptStruct FAvaMediaLocalPlaybackServerSettings ******************************
struct Z_Construct_UScriptStruct_FAvaMediaLocalPlaybackServerSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMediaLocalPlaybackServerSettings_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaMediaLocalPlaybackServerSettings;
// ********** End ScriptStruct FAvaMediaLocalPlaybackServerSettings ********************************

// ********** Begin Class UAvaMediaSettings ********************************************************
struct Z_Construct_UClass_UAvaMediaSettings_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaMediaSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMediaSettings(); \
	friend struct ::Z_Construct_UClass_UAvaMediaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaMediaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMediaSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaMediaSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaMediaSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMediaSettings(UAvaMediaSettings&&) = delete; \
	UAvaMediaSettings(const UAvaMediaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMediaSettings) \
	NO_API virtual ~UAvaMediaSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_78_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMediaSettings;

// ********** End Class UAvaMediaSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h

// ********** Begin Enum EAvaMediaLogVerbosity *****************************************************
#define FOREACH_ENUM_EAVAMEDIALOGVERBOSITY(op) \
	op(EAvaMediaLogVerbosity::NoLogging) \
	op(EAvaMediaLogVerbosity::Fatal) \
	op(EAvaMediaLogVerbosity::Error) \
	op(EAvaMediaLogVerbosity::Warning) \
	op(EAvaMediaLogVerbosity::Display) \
	op(EAvaMediaLogVerbosity::Log) \
	op(EAvaMediaLogVerbosity::Verbose) \
	op(EAvaMediaLogVerbosity::VeryVerbose) 

enum class EAvaMediaLogVerbosity : uint8;
template<> struct TIsUEnumClass<EAvaMediaLogVerbosity> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMediaLogVerbosity>();
// ********** End Enum EAvaMediaLogVerbosity *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
