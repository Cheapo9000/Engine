// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EOSSettings.h"

#ifdef ONLINESUBSYSTEMEOS_EOSSettings_generated_h
#error "EOSSettings.generated.h already included, missing '#pragma once' in EOSSettings.h"
#endif
#define ONLINESUBSYSTEMEOS_EOSSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_EOSArtifactSettings ******************************************
struct Z_Construct_UClass_UDEPRECATED_EOSArtifactSettings_Statics;
ONLINESUBSYSTEMEOS_API UClass* Z_Construct_UClass_UDEPRECATED_EOSArtifactSettings_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EOSArtifactSettings(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_EOSArtifactSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMEOS_API UClass* ::Z_Construct_UClass_UDEPRECATED_EOSArtifactSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_EOSArtifactSettings, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEOS"), Z_Construct_UClass_UDEPRECATED_EOSArtifactSettings_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_EOSArtifactSettings)


#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_EOSArtifactSettings(UDEPRECATED_EOSArtifactSettings&&) = delete; \
	UDEPRECATED_EOSArtifactSettings(const UDEPRECATED_EOSArtifactSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_EOSArtifactSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EOSArtifactSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_EOSArtifactSettings) \
	NO_API virtual ~UDEPRECATED_EOSArtifactSettings();


#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_25_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_EOSArtifactSettings;

// ********** End Class UDEPRECATED_EOSArtifactSettings ********************************************

// ********** Begin ScriptStruct FArtifactSettings *************************************************
struct Z_Construct_UScriptStruct_FArtifactSettings_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArtifactSettings_Statics; \
	ONLINESUBSYSTEMEOS_API static class UScriptStruct* StaticStruct();


struct FArtifactSettings;
// ********** End ScriptStruct FArtifactSettings ***************************************************

// ********** Begin Class UEOSSettings *************************************************************
struct Z_Construct_UClass_UEOSSettings_Statics;
ONLINESUBSYSTEMEOS_API UClass* Z_Construct_UClass_UEOSSettings_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSettings(); \
	friend struct ::Z_Construct_UClass_UEOSSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMEOS_API UClass* ::Z_Construct_UClass_UEOSSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEOSSettings, URuntimeOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEOS"), Z_Construct_UClass_UEOSSettings_NoRegister) \
	DECLARE_SERIALIZER(UEOSSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMEOS_API UEOSSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEOSSettings(UEOSSettings&&) = delete; \
	UEOSSettings(const UEOSSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMEOS_API, UEOSSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSettings) \
	ONLINESUBSYSTEMEOS_API virtual ~UEOSSettings();


#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_102_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEOSSettings;

// ********** End Class UEOSSettings ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemEOS_Source_OnlineSubsystemEOS_Public_EOSSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
