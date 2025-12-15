// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/HomeScreenSettings.h"

#ifdef MAINFRAME_HomeScreenSettings_generated_h
#error "HomeScreenSettings.generated.h already included, missing '#pragma once' in HomeScreenSettings.h"
#endif
#define MAINFRAME_HomeScreenSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHomeScreenSettings ******************************************************
struct Z_Construct_UClass_UHomeScreenSettings_Statics;
MAINFRAME_API UClass* Z_Construct_UClass_UHomeScreenSettings_NoRegister();

#define FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHomeScreenSettings(); \
	friend struct ::Z_Construct_UClass_UHomeScreenSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MAINFRAME_API UClass* ::Z_Construct_UClass_UHomeScreenSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHomeScreenSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MainFrame"), Z_Construct_UClass_UHomeScreenSettings_NoRegister) \
	DECLARE_SERIALIZER(UHomeScreenSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MAINFRAME_API UHomeScreenSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHomeScreenSettings(UHomeScreenSettings&&) = delete; \
	UHomeScreenSettings(const UHomeScreenSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MAINFRAME_API, UHomeScreenSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHomeScreenSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHomeScreenSettings) \
	MAINFRAME_API virtual ~UHomeScreenSettings();


#define FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHomeScreenSettings;

// ********** End Class UHomeScreenSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MainFrame_Public_Settings_HomeScreenSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
