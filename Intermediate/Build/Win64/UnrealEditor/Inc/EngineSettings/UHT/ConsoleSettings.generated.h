// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleSettings.h"

#ifdef ENGINESETTINGS_ConsoleSettings_generated_h
#error "ConsoleSettings.generated.h already included, missing '#pragma once' in ConsoleSettings.h"
#endif
#define ENGINESETTINGS_ConsoleSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAutoCompleteCommand **********************************************
struct Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics;
#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics; \
	ENGINESETTINGS_API static class UScriptStruct* StaticStruct();


struct FAutoCompleteCommand;
// ********** End ScriptStruct FAutoCompleteCommand ************************************************

// ********** Begin Class UConsoleSettings *********************************************************
struct Z_Construct_UClass_UConsoleSettings_Statics;
ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings_NoRegister();

#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleSettings(); \
	friend struct ::Z_Construct_UClass_UConsoleSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINESETTINGS_API UClass* ::Z_Construct_UClass_UConsoleSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UConsoleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), Z_Construct_UClass_UConsoleSettings_NoRegister) \
	DECLARE_SERIALIZER(UConsoleSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINESETTINGS_API UConsoleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINESETTINGS_API, UConsoleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConsoleSettings(UConsoleSettings&&) = delete; \
	UConsoleSettings(const UConsoleSettings&) = delete; \
	ENGINESETTINGS_API virtual ~UConsoleSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_59_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_63_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConsoleSettings;

// ********** End Class UConsoleSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
