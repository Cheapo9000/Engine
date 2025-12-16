// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RewindDebuggerSettings.h"

#ifdef REWINDDEBUGGER_RewindDebuggerSettings_generated_h
#error "RewindDebuggerSettings.generated.h already included, missing '#pragma once' in RewindDebuggerSettings.h"
#endif
#define REWINDDEBUGGER_RewindDebuggerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URewindDebuggerSettings **************************************************
struct Z_Construct_UClass_URewindDebuggerSettings_Statics;
REWINDDEBUGGER_API UClass* Z_Construct_UClass_URewindDebuggerSettings_NoRegister();

#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURewindDebuggerSettings(); \
	friend struct ::Z_Construct_UClass_URewindDebuggerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REWINDDEBUGGER_API UClass* ::Z_Construct_UClass_URewindDebuggerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URewindDebuggerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RewindDebugger"), Z_Construct_UClass_URewindDebuggerSettings_NoRegister) \
	DECLARE_SERIALIZER(URewindDebuggerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URewindDebuggerSettings(URewindDebuggerSettings&&) = delete; \
	URewindDebuggerSettings(const URewindDebuggerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewindDebuggerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindDebuggerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URewindDebuggerSettings) \
	NO_API virtual ~URewindDebuggerSettings();


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_22_PROLOG
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URewindDebuggerSettings;

// ********** End Class URewindDebuggerSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h

// ********** Begin Enum ERewindDebuggerCameraMode *************************************************
#define FOREACH_ENUM_EREWINDDEBUGGERCAMERAMODE(op) \
	op(ERewindDebuggerCameraMode::Replay) \
	op(ERewindDebuggerCameraMode::FollowTargetActor) \
	op(ERewindDebuggerCameraMode::Disabled) 

enum class ERewindDebuggerCameraMode : uint8;
template<> struct TIsUEnumClass<ERewindDebuggerCameraMode> { enum { Value = true }; };
template<> REWINDDEBUGGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERewindDebuggerCameraMode>();
// ********** End Enum ERewindDebuggerCameraMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
