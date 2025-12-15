// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDebuggerSettings.h"

#ifdef MASSENTITYDEBUGGER_MassDebuggerSettings_generated_h
#error "MassDebuggerSettings.generated.h already included, missing '#pragma once' in MassDebuggerSettings.h"
#endif
#define MASSENTITYDEBUGGER_MassDebuggerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassDebuggerSettings ****************************************************
struct Z_Construct_UClass_UMassDebuggerSettings_Statics;
MASSENTITYDEBUGGER_API UClass* Z_Construct_UClass_UMassDebuggerSettings_NoRegister();

#define FID_Engine_Source_Editor_MassEntityDebugger_Public_MassDebuggerSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassDebuggerSettings(); \
	friend struct ::Z_Construct_UClass_UMassDebuggerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYDEBUGGER_API UClass* ::Z_Construct_UClass_UMassDebuggerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassDebuggerSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityDebugger"), Z_Construct_UClass_UMassDebuggerSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassDebuggerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MassEntityDebugger_Public_MassDebuggerSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSENTITYDEBUGGER_API UMassDebuggerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassDebuggerSettings(UMassDebuggerSettings&&) = delete; \
	UMassDebuggerSettings(const UMassDebuggerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITYDEBUGGER_API, UMassDebuggerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDebuggerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassDebuggerSettings) \
	MASSENTITYDEBUGGER_API virtual ~UMassDebuggerSettings();


#define FID_Engine_Source_Editor_MassEntityDebugger_Public_MassDebuggerSettings_h_11_PROLOG
#define FID_Engine_Source_Editor_MassEntityDebugger_Public_MassDebuggerSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MassEntityDebugger_Public_MassDebuggerSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MassEntityDebugger_Public_MassDebuggerSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassDebuggerSettings;

// ********** End Class UMassDebuggerSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MassEntityDebugger_Public_MassDebuggerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
