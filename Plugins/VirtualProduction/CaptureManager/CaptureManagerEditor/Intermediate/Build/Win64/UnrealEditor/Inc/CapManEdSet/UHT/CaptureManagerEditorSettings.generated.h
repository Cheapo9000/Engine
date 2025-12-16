// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/CaptureManagerEditorSettings.h"

#ifdef CAPTUREMANAGEREDITORSETTINGS_CaptureManagerEditorSettings_generated_h
#error "CaptureManagerEditorSettings.generated.h already included, missing '#pragma once' in CaptureManagerEditorSettings.h"
#endif
#define CAPTUREMANAGEREDITORSETTINGS_CaptureManagerEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCaptureManagerEditorSettings ********************************************
struct Z_Construct_UClass_UCaptureManagerEditorSettings_Statics;
CAPTUREMANAGEREDITORSETTINGS_API UClass* Z_Construct_UClass_UCaptureManagerEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerEditor_Source_CaptureManagerEditorSettings_Public_Settings_CaptureManagerEditorSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureManagerEditorSettings(); \
	friend struct ::Z_Construct_UClass_UCaptureManagerEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREMANAGEREDITORSETTINGS_API UClass* ::Z_Construct_UClass_UCaptureManagerEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCaptureManagerEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureManagerEditorSettings"), Z_Construct_UClass_UCaptureManagerEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UCaptureManagerEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerEditor_Source_CaptureManagerEditorSettings_Public_Settings_CaptureManagerEditorSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAPTUREMANAGEREDITORSETTINGS_API UCaptureManagerEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCaptureManagerEditorSettings(UCaptureManagerEditorSettings&&) = delete; \
	UCaptureManagerEditorSettings(const UCaptureManagerEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAPTUREMANAGEREDITORSETTINGS_API, UCaptureManagerEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureManagerEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureManagerEditorSettings) \
	CAPTUREMANAGEREDITORSETTINGS_API virtual ~UCaptureManagerEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerEditor_Source_CaptureManagerEditorSettings_Public_Settings_CaptureManagerEditorSettings_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerEditor_Source_CaptureManagerEditorSettings_Public_Settings_CaptureManagerEditorSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerEditor_Source_CaptureManagerEditorSettings_Public_Settings_CaptureManagerEditorSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerEditor_Source_CaptureManagerEditorSettings_Public_Settings_CaptureManagerEditorSettings_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCaptureManagerEditorSettings;

// ********** End Class UCaptureManagerEditorSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerEditor_Source_CaptureManagerEditorSettings_Public_Settings_CaptureManagerEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
