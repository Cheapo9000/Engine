// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightMixerEditorSettings.h"

#ifdef LIGHTMIXER_LightMixerEditorSettings_generated_h
#error "LightMixerEditorSettings.generated.h already included, missing '#pragma once' in LightMixerEditorSettings.h"
#endif
#define LIGHTMIXER_LightMixerEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightMixerEditorSettings ************************************************
struct Z_Construct_UClass_ULightMixerEditorSettings_Statics;
LIGHTMIXER_API UClass* Z_Construct_UClass_ULightMixerEditorSettings_NoRegister();

#define FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightMixerEditorSettings(); \
	friend struct ::Z_Construct_UClass_ULightMixerEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTMIXER_API UClass* ::Z_Construct_UClass_ULightMixerEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightMixerEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightMixer"), Z_Construct_UClass_ULightMixerEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(ULightMixerEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("ObjectMixer");} \



#define FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightMixerEditorSettings(ULightMixerEditorSettings&&) = delete; \
	ULightMixerEditorSettings(const ULightMixerEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTMIXER_API, ULightMixerEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightMixerEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightMixerEditorSettings) \
	LIGHTMIXER_API virtual ~ULightMixerEditorSettings();


#define FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_7_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightMixerEditorSettings;

// ********** End Class ULightMixerEditorSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
