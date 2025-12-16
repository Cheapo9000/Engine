// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlSettings.h"

#ifdef REMOTECONTROLCOMMON_RemoteControlSettings_generated_h
#error "RemoteControlSettings.generated.h already included, missing '#pragma once' in RemoteControlSettings.h"
#endif
#define REMOTECONTROLCOMMON_RemoteControlSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCNetworkAddress *************************************************
struct Z_Construct_UScriptStruct_FRCNetworkAddress_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCNetworkAddress_Statics; \
	REMOTECONTROLCOMMON_API static class UScriptStruct* StaticStruct();


struct FRCNetworkAddress;
// ********** End ScriptStruct FRCNetworkAddress ***************************************************

// ********** Begin ScriptStruct FRCNetworkAddressRange ********************************************
struct Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics; \
	REMOTECONTROLCOMMON_API static class UScriptStruct* StaticStruct();


struct FRCNetworkAddressRange;
// ********** End ScriptStruct FRCNetworkAddressRange **********************************************

// ********** Begin ScriptStruct FRCPassphrase *****************************************************
struct Z_Construct_UScriptStruct_FRCPassphrase_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCPassphrase_Statics; \
	REMOTECONTROLCOMMON_API static class UScriptStruct* StaticStruct();


struct FRCPassphrase;
// ********** End ScriptStruct FRCPassphrase *******************************************************

// ********** Begin Class URemoteControlSettings ***************************************************
struct Z_Construct_UClass_URemoteControlSettings_Statics;
REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URemoteControlSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlSettings(); \
	friend struct ::Z_Construct_UClass_URemoteControlSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLCOMMON_API UClass* ::Z_Construct_UClass_URemoteControlSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteControlCommon"), Z_Construct_UClass_URemoteControlSettings_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("RemoteControl");} \



#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlSettings(URemoteControlSettings&&) = delete; \
	URemoteControlSettings(const URemoteControlSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlSettings) \
	NO_API virtual ~URemoteControlSettings();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_179_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlSettings;

// ********** End Class URemoteControlSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
