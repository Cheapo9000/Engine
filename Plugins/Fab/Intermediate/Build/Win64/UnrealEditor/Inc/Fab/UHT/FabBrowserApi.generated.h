// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FabBrowserApi.h"

#ifdef FAB_FabBrowserApi_generated_h
#error "FabBrowserApi.generated.h already included, missing '#pragma once' in FabBrowserApi.h"
#endif
#define FAB_FabBrowserApi_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFabApiVersion;
struct FFabAssetMetadata;
struct FFabFrontendSettings;

// ********** Begin ScriptStruct FFabApiVersion ****************************************************
struct Z_Construct_UScriptStruct_FFabApiVersion_Statics;
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFabApiVersion_Statics; \
	FAB_API static class UScriptStruct* StaticStruct();


struct FFabApiVersion;
// ********** End ScriptStruct FFabApiVersion ******************************************************

// ********** Begin ScriptStruct FFabFrontendSettings **********************************************
struct Z_Construct_UScriptStruct_FFabFrontendSettings_Statics;
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFabFrontendSettings_Statics; \
	FAB_API static class UScriptStruct* StaticStruct();


struct FFabFrontendSettings;
// ********** End ScriptStruct FFabFrontendSettings ************************************************

// ********** Begin Class UFabBrowserApi ***********************************************************
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execPluginOpened); \
	DECLARE_FUNCTION(execCopyToClipboard); \
	DECLARE_FUNCTION(execOpenUrlInBrowser); \
	DECLARE_FUNCTION(execGetApiVersion); \
	DECLARE_FUNCTION(execSetPreferredQualityTier); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execOpenPluginSettings); \
	DECLARE_FUNCTION(execGetRefreshToken); \
	DECLARE_FUNCTION(execGetAuthToken); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execOnDragInfoFailure); \
	DECLARE_FUNCTION(execOnDragInfoSuccess); \
	DECLARE_FUNCTION(execDragStart); \
	DECLARE_FUNCTION(execAddToProject);


struct Z_Construct_UClass_UFabBrowserApi_Statics;
FAB_API UClass* Z_Construct_UClass_UFabBrowserApi_NoRegister();

#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabBrowserApi(); \
	friend struct ::Z_Construct_UClass_UFabBrowserApi_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FAB_API UClass* ::Z_Construct_UClass_UFabBrowserApi_NoRegister(); \
public: \
	DECLARE_CLASS2(UFabBrowserApi, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fab"), Z_Construct_UClass_UFabBrowserApi_NoRegister) \
	DECLARE_SERIALIZER(UFabBrowserApi)


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFabBrowserApi(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFabBrowserApi(UFabBrowserApi&&) = delete; \
	UFabBrowserApi(const UFabBrowserApi&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFabBrowserApi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabBrowserApi); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFabBrowserApi) \
	NO_API virtual ~UFabBrowserApi();


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_47_PROLOG
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_50_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFabBrowserApi;

// ********** End Class UFabBrowserApi *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabBrowserApi_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
