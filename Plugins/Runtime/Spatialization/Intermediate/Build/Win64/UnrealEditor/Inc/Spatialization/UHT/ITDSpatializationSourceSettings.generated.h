// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ITDSpatializationSourceSettings.h"

#ifdef SPATIALIZATION_ITDSpatializationSourceSettings_generated_h
#error "ITDSpatializationSourceSettings.generated.h already included, missing '#pragma once' in ITDSpatializationSourceSettings.h"
#endif
#define SPATIALIZATION_ITDSpatializationSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UITDSpatializationSourceSettings *****************************************
struct Z_Construct_UClass_UITDSpatializationSourceSettings_Statics;
SPATIALIZATION_API UClass* Z_Construct_UClass_UITDSpatializationSourceSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUITDSpatializationSourceSettings(); \
	friend struct ::Z_Construct_UClass_UITDSpatializationSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPATIALIZATION_API UClass* ::Z_Construct_UClass_UITDSpatializationSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UITDSpatializationSourceSettings, USpatializationPluginSourceSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Spatialization"), Z_Construct_UClass_UITDSpatializationSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(UITDSpatializationSourceSettings)


#define FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPATIALIZATION_API UITDSpatializationSourceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UITDSpatializationSourceSettings(UITDSpatializationSourceSettings&&) = delete; \
	UITDSpatializationSourceSettings(const UITDSpatializationSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPATIALIZATION_API, UITDSpatializationSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UITDSpatializationSourceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UITDSpatializationSourceSettings) \
	SPATIALIZATION_API virtual ~UITDSpatializationSourceSettings();


#define FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UITDSpatializationSourceSettings;

// ********** End Class UITDSpatializationSourceSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
