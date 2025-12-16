// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StormSyncDrivesSettings.h"

#ifdef STORMSYNCDRIVES_StormSyncDrivesSettings_generated_h
#error "StormSyncDrivesSettings.generated.h already included, missing '#pragma once' in StormSyncDrivesSettings.h"
#endif
#define STORMSYNCDRIVES_StormSyncDrivesSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStormSyncMountPointConfig ****************************************
struct Z_Construct_UScriptStruct_FStormSyncMountPointConfig_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncMountPointConfig_Statics; \
	STORMSYNCDRIVES_API static class UScriptStruct* StaticStruct();


struct FStormSyncMountPointConfig;
// ********** End ScriptStruct FStormSyncMountPointConfig ******************************************

// ********** Begin Class UStormSyncDrivesSettings *************************************************
struct Z_Construct_UClass_UStormSyncDrivesSettings_Statics;
STORMSYNCDRIVES_API UClass* Z_Construct_UClass_UStormSyncDrivesSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStormSyncDrivesSettings(); \
	friend struct ::Z_Construct_UClass_UStormSyncDrivesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STORMSYNCDRIVES_API UClass* ::Z_Construct_UClass_UStormSyncDrivesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStormSyncDrivesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StormSyncDrives"), Z_Construct_UClass_UStormSyncDrivesSettings_NoRegister) \
	DECLARE_SERIALIZER(UStormSyncDrivesSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStormSyncDrivesSettings(UStormSyncDrivesSettings&&) = delete; \
	UStormSyncDrivesSettings(const UStormSyncDrivesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STORMSYNCDRIVES_API, UStormSyncDrivesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStormSyncDrivesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStormSyncDrivesSettings) \
	STORMSYNCDRIVES_API virtual ~UStormSyncDrivesSettings();


#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h_61_PROLOG
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStormSyncDrivesSettings;

// ********** End Class UStormSyncDrivesSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncDrives_Public_StormSyncDrivesSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
