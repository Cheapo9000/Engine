// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/ULiveLinkHubCaptureDevice.h"

#ifdef CAPTUREMANAGEREDITOR_ULiveLinkHubCaptureDevice_generated_h
#error "ULiveLinkHubCaptureDevice.generated.h already included, missing '#pragma once' in ULiveLinkHubCaptureDevice.h"
#endif
#define CAPTUREMANAGEREDITOR_ULiveLinkHubCaptureDevice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UIngestCapability_Options;
class UIngestCapability_ProcessResult;
class ULiveLinkDeviceSettings;
class ULiveLinkHubCaptureDevice;
class UObject;
struct FLiveLinkHubFetchTakesResult;
struct FLiveLinkHubTakeMetadata;

// ********** Begin ScriptStruct FLiveLinkHubTakeMetadata ******************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubTakeMetadata_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubTakeMetadata_Statics; \
	CAPTUREMANAGEREDITOR_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubTakeMetadata;
// ********** End ScriptStruct FLiveLinkHubTakeMetadata ********************************************

// ********** Begin ScriptStruct FLiveLinkHubFetchTakesResult **************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubFetchTakesResult_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubFetchTakesResult_Statics; \
	CAPTUREMANAGEREDITOR_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubFetchTakesResult;
// ********** End ScriptStruct FLiveLinkHubFetchTakesResult ****************************************

// ********** Begin Class ULiveLinkHubCaptureDeviceFactory *****************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDeviceByClass);


struct Z_Construct_UClass_ULiveLinkHubCaptureDeviceFactory_Statics;
CAPTUREMANAGEREDITOR_API UClass* Z_Construct_UClass_ULiveLinkHubCaptureDeviceFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubCaptureDeviceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubCaptureDeviceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREMANAGEREDITOR_API UClass* ::Z_Construct_UClass_ULiveLinkHubCaptureDeviceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubCaptureDeviceFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureManagerEditor"), Z_Construct_UClass_ULiveLinkHubCaptureDeviceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubCaptureDeviceFactory)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkHubCaptureDeviceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubCaptureDeviceFactory(ULiveLinkHubCaptureDeviceFactory&&) = delete; \
	ULiveLinkHubCaptureDeviceFactory(const ULiveLinkHubCaptureDeviceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubCaptureDeviceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubCaptureDeviceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubCaptureDeviceFactory) \
	NO_API virtual ~ULiveLinkHubCaptureDeviceFactory();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubCaptureDeviceFactory;

// ********** End Class ULiveLinkHubCaptureDeviceFactory *******************************************

// ********** Begin Class ULiveLinkHubCaptureDevice ************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFetchTakes); \
	DECLARE_FUNCTION(execDownloadTake); \
	DECLARE_FUNCTION(execIngestTake); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_ULiveLinkHubCaptureDevice_Statics;
CAPTUREMANAGEREDITOR_API UClass* Z_Construct_UClass_ULiveLinkHubCaptureDevice_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubCaptureDevice(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubCaptureDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREMANAGEREDITOR_API UClass* ::Z_Construct_UClass_ULiveLinkHubCaptureDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubCaptureDevice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureManagerEditor"), Z_Construct_UClass_ULiveLinkHubCaptureDevice_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubCaptureDevice)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubCaptureDevice(ULiveLinkHubCaptureDevice&&) = delete; \
	ULiveLinkHubCaptureDevice(const ULiveLinkHubCaptureDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubCaptureDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubCaptureDevice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkHubCaptureDevice)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_52_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubCaptureDevice;

// ********** End Class ULiveLinkHubCaptureDevice **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_Scripting_ULiveLinkHubCaptureDevice_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
