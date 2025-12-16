// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaFrameworkVideoInputSettings.h"

#ifdef MEDIAFRAMEWORKUTILITIESEDITOR_MediaFrameworkVideoInputSettings_generated_h
#error "MediaFrameworkVideoInputSettings.generated.h already included, missing '#pragma once' in MediaFrameworkVideoInputSettings.h"
#endif
#define MEDIAFRAMEWORKUTILITIESEDITOR_MediaFrameworkVideoInputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMediaFrameworkVideoInputSourceSettings ***************************
struct Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics;
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics; \
	MEDIAFRAMEWORKUTILITIESEDITOR_API static class UScriptStruct* StaticStruct();


struct FMediaFrameworkVideoInputSourceSettings;
// ********** End ScriptStruct FMediaFrameworkVideoInputSourceSettings *****************************

// ********** Begin Class UMediaFrameworkVideoInputSettings ****************************************
struct Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics;
MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkVideoInputSettings_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaFrameworkVideoInputSettings(); \
	friend struct ::Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_UMediaFrameworkVideoInputSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaFrameworkVideoInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilitiesEditor"), Z_Construct_UClass_UMediaFrameworkVideoInputSettings_NoRegister) \
	DECLARE_SERIALIZER(UMediaFrameworkVideoInputSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAFRAMEWORKUTILITIESEDITOR_API UMediaFrameworkVideoInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaFrameworkVideoInputSettings(UMediaFrameworkVideoInputSettings&&) = delete; \
	UMediaFrameworkVideoInputSettings(const UMediaFrameworkVideoInputSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAFRAMEWORKUTILITIESEDITOR_API, UMediaFrameworkVideoInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaFrameworkVideoInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaFrameworkVideoInputSettings) \
	MEDIAFRAMEWORKUTILITIESEDITOR_API virtual ~UMediaFrameworkVideoInputSettings();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_27_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaFrameworkVideoInputSettings;

// ********** End Class UMediaFrameworkVideoInputSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
