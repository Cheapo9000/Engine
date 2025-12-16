// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/RemoteControlDMXLibraryProxy.h"

#ifdef REMOTECONTROLPROTOCOLDMX_RemoteControlDMXLibraryProxy_generated_h
#error "RemoteControlDMXLibraryProxy.generated.h already included, missing '#pragma once' in RemoteControlDMXLibraryProxy.h"
#endif
#define REMOTECONTROLPROTOCOLDMX_RemoteControlDMXLibraryProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXNormalizedAttributeValueMap;

// ********** Begin Class URemoteControlDMXLibraryProxy ********************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnFixturePatchReceived);


struct Z_Construct_UClass_URemoteControlDMXLibraryProxy_Statics;
REMOTECONTROLPROTOCOLDMX_API UClass* Z_Construct_UClass_URemoteControlDMXLibraryProxy_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlDMXLibraryProxy(); \
	friend struct ::Z_Construct_UClass_URemoteControlDMXLibraryProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLPROTOCOLDMX_API UClass* ::Z_Construct_UClass_URemoteControlDMXLibraryProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlDMXLibraryProxy, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RemoteControlProtocolDMX"), Z_Construct_UClass_URemoteControlDMXLibraryProxy_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlDMXLibraryProxy)


#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlDMXLibraryProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlDMXLibraryProxy(URemoteControlDMXLibraryProxy&&) = delete; \
	URemoteControlDMXLibraryProxy(const URemoteControlDMXLibraryProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlDMXLibraryProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlDMXLibraryProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlDMXLibraryProxy) \
	NO_API virtual ~URemoteControlDMXLibraryProxy();


#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlDMXLibraryProxy;

// ********** End Class URemoteControlDMXLibraryProxy **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Internal_Library_RemoteControlDMXLibraryProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
