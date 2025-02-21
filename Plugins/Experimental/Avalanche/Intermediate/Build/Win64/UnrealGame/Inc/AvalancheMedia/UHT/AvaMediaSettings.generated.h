// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMediaSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaMediaSettings_generated_h
#error "AvaMediaSettings.generated.h already included, missing '#pragma once' in AvaMediaSettings.h"
#endif
#define AVALANCHEMEDIA_AvaMediaSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaPlaybackServerLoggingEntry_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaPlaybackServerLoggingEntry>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaMediaLocalPlaybackServerSettings_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaMediaLocalPlaybackServerSettings>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMediaSettings(); \
	friend struct Z_Construct_UClass_UAvaMediaSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaMediaSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaMediaSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaMediaSettings(UAvaMediaSettings&&); \
	UAvaMediaSettings(const UAvaMediaSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMediaSettings) \
	NO_API virtual ~UAvaMediaSettings();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_78_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaMediaSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_AvaMediaSettings_h


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
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaMediaLogVerbosity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
