// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PluginMetadataObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLUGINBROWSER_PluginMetadataObject_generated_h
#error "PluginMetadataObject.generated.h already included, missing '#pragma once' in PluginMetadataObject.h"
#endif
#define PLUGINBROWSER_PluginMetadataObject_generated_h

#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics; \
	PLUGINBROWSER_API static class UScriptStruct* StaticStruct();


template<> PLUGINBROWSER_API UScriptStruct* StaticStruct<struct FPluginReferenceMetadata>();

#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPluginDisallowedMetadata_Statics; \
	PLUGINBROWSER_API static class UScriptStruct* StaticStruct();


template<> PLUGINBROWSER_API UScriptStruct* StaticStruct<struct FPluginDisallowedMetadata>();

#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisallowedPluginsOptions); \
	DECLARE_FUNCTION(execGetAvailablePluginDependencies);


#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPluginMetadataObject(); \
	friend struct Z_Construct_UClass_UPluginMetadataObject_Statics; \
public: \
	DECLARE_CLASS(UPluginMetadataObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PluginBrowser"), NO_API) \
	DECLARE_SERIALIZER(UPluginMetadataObject)


#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPluginMetadataObject(UPluginMetadataObject&&); \
	UPluginMetadataObject(const UPluginMetadataObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPluginMetadataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginMetadataObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginMetadataObject) \
	NO_API virtual ~UPluginMetadataObject();


#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_74_PROLOG
#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLUGINBROWSER_API UClass* StaticClass<class UPluginMetadataObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
