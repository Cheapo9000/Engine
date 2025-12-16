// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OSCManager.h"

#ifdef OSC_OSCManager_generated_h
#error "OSCManager.generated.h already included, missing '#pragma once' in OSCManager.h"
#endif
#define OSC_OSCManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOSCClient;
class UOSCServer;
struct FOSCAddress;
struct FOSCBundle;
struct FOSCMessage;

// ********** Begin Class UOSCManager **************************************************************
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOSCAddressMethod); \
	DECLARE_FUNCTION(execClearOSCAddressContainers); \
	DECLARE_FUNCTION(execGetOSCAddressMethod); \
	DECLARE_FUNCTION(execGetOSCAddressFullPath); \
	DECLARE_FUNCTION(execGetOSCAddressContainerPath); \
	DECLARE_FUNCTION(execGetOSCAddressContainers); \
	DECLARE_FUNCTION(execGetOSCAddressContainer); \
	DECLARE_FUNCTION(execSetOSCMessageAddress); \
	DECLARE_FUNCTION(execGetOSCMessageAddress); \
	DECLARE_FUNCTION(execOSCAddressRemoveContainers); \
	DECLARE_FUNCTION(execOSCAddressPopContainers); \
	DECLARE_FUNCTION(execOSCAddressPopContainer); \
	DECLARE_FUNCTION(execOSCAddressPushContainers); \
	DECLARE_FUNCTION(execOSCAddressPushContainer); \
	DECLARE_FUNCTION(execObjectPathFromOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressFromObjectPathString); \
	DECLARE_FUNCTION(execOSCAddressFromObjectPath); \
	DECLARE_FUNCTION(execFindObjectAtOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressPathMatchesPattern); \
	DECLARE_FUNCTION(execConvertStringToOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressIsValidPattern); \
	DECLARE_FUNCTION(execOSCAddressIsValidPath); \
	DECLARE_FUNCTION(execGetBlob); \
	DECLARE_FUNCTION(execGetAllBools); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetAllStrings); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetAllInt64s); \
	DECLARE_FUNCTION(execGetInt64); \
	DECLARE_FUNCTION(execGetAllInt32s); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execGetAllFloats); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetAllAddresses); \
	DECLARE_FUNCTION(execGetAddress); \
	DECLARE_FUNCTION(execAddBool); \
	DECLARE_FUNCTION(execAddBlob); \
	DECLARE_FUNCTION(execAddString); \
	DECLARE_FUNCTION(execAddAddress); \
	DECLARE_FUNCTION(execAddInt64); \
	DECLARE_FUNCTION(execAddInt32); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execClearBundle); \
	DECLARE_FUNCTION(execClearMessage); \
	DECLARE_FUNCTION(execGetMessagesFromBundle); \
	DECLARE_FUNCTION(execGetMessageFromBundle); \
	DECLARE_FUNCTION(execGetBundlesFromBundle); \
	DECLARE_FUNCTION(execAddBundleToBundle); \
	DECLARE_FUNCTION(execAddMessageToBundle); \
	DECLARE_FUNCTION(execCreateOSCClient); \
	DECLARE_FUNCTION(execCreateOSCServer);


struct Z_Construct_UClass_UOSCManager_Statics;
OSC_API UClass* Z_Construct_UClass_UOSCManager_NoRegister();

#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOSCManager(); \
	friend struct ::Z_Construct_UClass_UOSCManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OSC_API UClass* ::Z_Construct_UClass_UOSCManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UOSCManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), Z_Construct_UClass_UOSCManager_NoRegister) \
	DECLARE_SERIALIZER(UOSCManager)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOSCManager(UOSCManager&&) = delete; \
	UOSCManager(const UOSCManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCManager) \
	NO_API virtual ~UOSCManager();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOSCManager;

// ********** End Class UOSCManager ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
