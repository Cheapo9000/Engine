// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderDocPluginSettings.h"

#ifdef RENDERDOCPLUGIN_RenderDocPluginSettings_generated_h
#error "RenderDocPluginSettings.generated.h already included, missing '#pragma once' in RenderDocPluginSettings.h"
#endif
#define RENDERDOCPLUGIN_RenderDocPluginSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URenderDocPluginSettings *************************************************
struct Z_Construct_UClass_URenderDocPluginSettings_Statics;
RENDERDOCPLUGIN_API UClass* Z_Construct_UClass_URenderDocPluginSettings_NoRegister();

#define FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderDocPluginSettings(); \
	friend struct ::Z_Construct_UClass_URenderDocPluginSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERDOCPLUGIN_API UClass* ::Z_Construct_UClass_URenderDocPluginSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderDocPluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderDocPlugin"), Z_Construct_UClass_URenderDocPluginSettings_NoRegister) \
	DECLARE_SERIALIZER(URenderDocPluginSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RENDERDOCPLUGIN_API URenderDocPluginSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderDocPluginSettings(URenderDocPluginSettings&&) = delete; \
	URenderDocPluginSettings(const URenderDocPluginSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RENDERDOCPLUGIN_API, URenderDocPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderDocPluginSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderDocPluginSettings) \
	RENDERDOCPLUGIN_API virtual ~URenderDocPluginSettings();


#define FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_10_PROLOG
#define FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderDocPluginSettings;

// ********** End Class URenderDocPluginSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
