// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectAssetEditorSettings.h"

#ifdef SMARTOBJECTSEDITORMODULE_SmartObjectAssetEditorSettings_generated_h
#error "SmartObjectAssetEditorSettings.generated.h already included, missing '#pragma once' in SmartObjectAssetEditorSettings.h"
#endif
#define SMARTOBJECTSEDITORMODULE_SmartObjectAssetEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmartObjectAssetEditorSettings ******************************************
struct Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics;
SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectAssetEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectAssetEditorSettings(); \
	friend struct ::Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSEDITORMODULE_API UClass* ::Z_Construct_UClass_USmartObjectAssetEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectAssetEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsEditorModule"), Z_Construct_UClass_USmartObjectAssetEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectAssetEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectAssetEditorSettings(USmartObjectAssetEditorSettings&&) = delete; \
	USmartObjectAssetEditorSettings(const USmartObjectAssetEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectAssetEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectAssetEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USmartObjectAssetEditorSettings) \
	NO_API virtual ~USmartObjectAssetEditorSettings();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectAssetEditorSettings;

// ********** End Class USmartObjectAssetEditorSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
