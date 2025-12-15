// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceControlSettings.h"

#ifdef SOURCECONTROLWINDOWS_SourceControlSettings_generated_h
#error "SourceControlSettings.generated.h already included, missing '#pragma once' in SourceControlSettings.h"
#endif
#define SOURCECONTROLWINDOWS_SourceControlSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USourceControlSettings ***************************************************
struct Z_Construct_UClass_USourceControlSettings_Statics;
SOURCECONTROLWINDOWS_API UClass* Z_Construct_UClass_USourceControlSettings_NoRegister();

#define FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceControlSettings(); \
	friend struct ::Z_Construct_UClass_USourceControlSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCECONTROLWINDOWS_API UClass* ::Z_Construct_UClass_USourceControlSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceControlSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceControlWindows"), Z_Construct_UClass_USourceControlSettings_NoRegister) \
	DECLARE_SERIALIZER(USourceControlSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceControlSettings(USourceControlSettings&&) = delete; \
	USourceControlSettings(const USourceControlSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceControlSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USourceControlSettings) \
	NO_API virtual ~USourceControlSettings();


#define FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_9_PROLOG
#define FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceControlSettings;

// ********** End Class USourceControlSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
