// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RewindDebuggerVLogSettings.h"

#ifdef REWINDDEBUGGERVLOG_RewindDebuggerVLogSettings_generated_h
#error "RewindDebuggerVLogSettings.generated.h already included, missing '#pragma once' in RewindDebuggerVLogSettings.h"
#endif
#define REWINDDEBUGGERVLOG_RewindDebuggerVLogSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URewindDebuggerVLogSettings **********************************************
struct Z_Construct_UClass_URewindDebuggerVLogSettings_Statics;
REWINDDEBUGGERVLOG_API UClass* Z_Construct_UClass_URewindDebuggerVLogSettings_NoRegister();

#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_RewindDebuggerVLogSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURewindDebuggerVLogSettings(); \
	friend struct ::Z_Construct_UClass_URewindDebuggerVLogSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REWINDDEBUGGERVLOG_API UClass* ::Z_Construct_UClass_URewindDebuggerVLogSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URewindDebuggerVLogSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RewindDebuggerVLog"), Z_Construct_UClass_URewindDebuggerVLogSettings_NoRegister) \
	DECLARE_SERIALIZER(URewindDebuggerVLogSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_RewindDebuggerVLogSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URewindDebuggerVLogSettings(URewindDebuggerVLogSettings&&) = delete; \
	URewindDebuggerVLogSettings(const URewindDebuggerVLogSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewindDebuggerVLogSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindDebuggerVLogSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URewindDebuggerVLogSettings) \
	NO_API virtual ~URewindDebuggerVLogSettings();


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_RewindDebuggerVLogSettings_h_13_PROLOG
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_RewindDebuggerVLogSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_RewindDebuggerVLogSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_RewindDebuggerVLogSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URewindDebuggerVLogSettings;

// ********** End Class URewindDebuggerVLogSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_RewindDebuggerVLogSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
