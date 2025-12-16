// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Profile/MediaProfileSettings.h"

#ifdef MEDIAFRAMEWORKUTILITIES_MediaProfileSettings_generated_h
#error "MediaProfileSettings.generated.h already included, missing '#pragma once' in MediaProfileSettings.h"
#endif
#define MEDIAFRAMEWORKUTILITIES_MediaProfileSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaProfileSettings ****************************************************
struct Z_Construct_UClass_UMediaProfileSettings_Statics;
MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileSettings_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaProfileSettings(); \
	friend struct ::Z_Construct_UClass_UMediaProfileSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIES_API UClass* ::Z_Construct_UClass_UMediaProfileSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaProfileSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), Z_Construct_UClass_UMediaProfileSettings_NoRegister) \
	DECLARE_SERIALIZER(UMediaProfileSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaProfileSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaProfileSettings(UMediaProfileSettings&&) = delete; \
	UMediaProfileSettings(const UMediaProfileSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaProfileSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaProfileSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaProfileSettings) \
	NO_API virtual ~UMediaProfileSettings();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_22_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaProfileSettings;

// ********** End Class UMediaProfileSettings ******************************************************

// ********** Begin Class UMediaProfileEditorSettings **********************************************
struct Z_Construct_UClass_UMediaProfileEditorSettings_Statics;
MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileEditorSettings_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaProfileEditorSettings(); \
	friend struct ::Z_Construct_UClass_UMediaProfileEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIES_API UClass* ::Z_Construct_UClass_UMediaProfileEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaProfileEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), Z_Construct_UClass_UMediaProfileEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMediaProfileEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaProfileEditorSettings(UMediaProfileEditorSettings&&) = delete; \
	UMediaProfileEditorSettings(const UMediaProfileEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaProfileEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaProfileEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaProfileEditorSettings) \
	NO_API virtual ~UMediaProfileEditorSettings();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_100_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaProfileEditorSettings;

// ********** End Class UMediaProfileEditorSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
