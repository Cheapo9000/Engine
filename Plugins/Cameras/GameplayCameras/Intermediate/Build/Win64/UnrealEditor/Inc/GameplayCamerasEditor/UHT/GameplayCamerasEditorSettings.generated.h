// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCamerasEditorSettings.h"

#ifdef GAMEPLAYCAMERASEDITOR_GameplayCamerasEditorSettings_generated_h
#error "GameplayCamerasEditorSettings.generated.h already included, missing '#pragma once' in GameplayCamerasEditorSettings.h"
#endif
#define GAMEPLAYCAMERASEDITOR_GameplayCamerasEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayCamerasEditorSettings *******************************************
struct Z_Construct_UClass_UGameplayCamerasEditorSettings_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UGameplayCamerasEditorSettings_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_GameplayCamerasEditorSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCamerasEditorSettings(); \
	friend struct ::Z_Construct_UClass_UGameplayCamerasEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UGameplayCamerasEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCamerasEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UGameplayCamerasEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCamerasEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_GameplayCamerasEditorSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCamerasEditorSettings(UGameplayCamerasEditorSettings&&) = delete; \
	UGameplayCamerasEditorSettings(const UGameplayCamerasEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERASEDITOR_API, UGameplayCamerasEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCamerasEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCamerasEditorSettings) \
	GAMEPLAYCAMERASEDITOR_API virtual ~UGameplayCamerasEditorSettings();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_GameplayCamerasEditorSettings_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_GameplayCamerasEditorSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_GameplayCamerasEditorSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_GameplayCamerasEditorSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCamerasEditorSettings;

// ********** End Class UGameplayCamerasEditorSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_GameplayCamerasEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
