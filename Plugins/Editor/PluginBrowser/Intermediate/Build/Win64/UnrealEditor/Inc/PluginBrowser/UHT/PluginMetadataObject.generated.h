// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PluginMetadataObject.h"

#ifdef PLUGINBROWSER_PluginMetadataObject_generated_h
#error "PluginMetadataObject.generated.h already included, missing '#pragma once' in PluginMetadataObject.h"
#endif
#define PLUGINBROWSER_PluginMetadataObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPluginReferenceMetadata ******************************************
struct Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics;
#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics; \
	PLUGINBROWSER_API static class UScriptStruct* StaticStruct();


struct FPluginReferenceMetadata;
// ********** End ScriptStruct FPluginReferenceMetadata ********************************************

// ********** Begin ScriptStruct FPluginDisallowedMetadata *****************************************
struct Z_Construct_UScriptStruct_FPluginDisallowedMetadata_Statics;
#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPluginDisallowedMetadata_Statics; \
	PLUGINBROWSER_API static class UScriptStruct* StaticStruct();


struct FPluginDisallowedMetadata;
// ********** End ScriptStruct FPluginDisallowedMetadata *******************************************

// ********** Begin Class UPluginMetadataObject ****************************************************
#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisallowedPluginsOptions); \
	DECLARE_FUNCTION(execGetAvailablePluginDependencies);


struct Z_Construct_UClass_UPluginMetadataObject_Statics;
PLUGINBROWSER_API UClass* Z_Construct_UClass_UPluginMetadataObject_NoRegister();

#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPluginMetadataObject(); \
	friend struct ::Z_Construct_UClass_UPluginMetadataObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLUGINBROWSER_API UClass* ::Z_Construct_UClass_UPluginMetadataObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPluginMetadataObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PluginBrowser"), Z_Construct_UClass_UPluginMetadataObject_NoRegister) \
	DECLARE_SERIALIZER(UPluginMetadataObject)


#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPluginMetadataObject(UPluginMetadataObject&&) = delete; \
	UPluginMetadataObject(const UPluginMetadataObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPluginMetadataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginMetadataObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginMetadataObject) \
	NO_API virtual ~UPluginMetadataObject();


#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_78_PROLOG
#define FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_82_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPluginMetadataObject;

// ********** End Class UPluginMetadataObject ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
