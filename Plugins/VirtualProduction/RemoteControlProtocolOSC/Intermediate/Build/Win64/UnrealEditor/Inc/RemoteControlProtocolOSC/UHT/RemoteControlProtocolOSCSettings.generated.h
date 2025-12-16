// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlProtocolOSCSettings.h"

#ifdef REMOTECONTROLPROTOCOLOSC_RemoteControlProtocolOSCSettings_generated_h
#error "RemoteControlProtocolOSCSettings.generated.h already included, missing '#pragma once' in RemoteControlProtocolOSCSettings.h"
#endif
#define REMOTECONTROLPROTOCOLOSC_RemoteControlProtocolOSCSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRemoteControlOSCServerSettings ***********************************
struct Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics; \
	REMOTECONTROLPROTOCOLOSC_API static class UScriptStruct* StaticStruct();


struct FRemoteControlOSCServerSettings;
// ********** End ScriptStruct FRemoteControlOSCServerSettings *************************************

// ********** Begin Class URemoteControlProtocolOSCSettings ****************************************
struct Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics;
REMOTECONTROLPROTOCOLOSC_API UClass* Z_Construct_UClass_URemoteControlProtocolOSCSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlProtocolOSCSettings(); \
	friend struct ::Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLPROTOCOLOSC_API UClass* ::Z_Construct_UClass_URemoteControlProtocolOSCSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlProtocolOSCSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteControlProtocolOSC"), Z_Construct_UClass_URemoteControlProtocolOSCSettings_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlProtocolOSCSettings)


#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlProtocolOSCSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlProtocolOSCSettings(URemoteControlProtocolOSCSettings&&) = delete; \
	URemoteControlProtocolOSCSettings(const URemoteControlProtocolOSCSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlProtocolOSCSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlProtocolOSCSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlProtocolOSCSettings) \
	NO_API virtual ~URemoteControlProtocolOSCSettings();


#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlProtocolOSCSettings;

// ********** End Class URemoteControlProtocolOSCSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
