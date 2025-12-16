// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/CaptureManagerSettings.h"

#ifdef CAPTUREMANAGERSETTINGS_CaptureManagerSettings_generated_h
#error "CaptureManagerSettings.generated.h already included, missing '#pragma once' in CaptureManagerSettings.h"
#endif
#define CAPTUREMANAGERSETTINGS_CaptureManagerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCaptureManagerSettings **************************************************
struct Z_Construct_UClass_UCaptureManagerSettings_Statics;
CAPTUREMANAGERSETTINGS_API UClass* Z_Construct_UClass_UCaptureManagerSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerSettings_Public_Settings_CaptureManagerSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureManagerSettings(); \
	friend struct ::Z_Construct_UClass_UCaptureManagerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREMANAGERSETTINGS_API UClass* ::Z_Construct_UClass_UCaptureManagerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCaptureManagerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureManagerSettings"), Z_Construct_UClass_UCaptureManagerSettings_NoRegister) \
	DECLARE_SERIALIZER(UCaptureManagerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerSettings_Public_Settings_CaptureManagerSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCaptureManagerSettings(UCaptureManagerSettings&&) = delete; \
	UCaptureManagerSettings(const UCaptureManagerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureManagerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureManagerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureManagerSettings) \
	NO_API virtual ~UCaptureManagerSettings();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerSettings_Public_Settings_CaptureManagerSettings_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerSettings_Public_Settings_CaptureManagerSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerSettings_Public_Settings_CaptureManagerSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerSettings_Public_Settings_CaptureManagerSettings_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCaptureManagerSettings;

// ********** End Class UCaptureManagerSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerSettings_Public_Settings_CaptureManagerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
