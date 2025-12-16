// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StormSyncCoreSettings.h"

#ifdef STORMSYNCCORE_StormSyncCoreSettings_generated_h
#error "StormSyncCoreSettings.generated.h already included, missing '#pragma once' in StormSyncCoreSettings.h"
#endif
#define STORMSYNCCORE_StormSyncCoreSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStormSyncCoreSettings ***************************************************
struct Z_Construct_UClass_UStormSyncCoreSettings_Statics;
STORMSYNCCORE_API UClass* Z_Construct_UClass_UStormSyncCoreSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStormSyncCoreSettings(); \
	friend struct ::Z_Construct_UClass_UStormSyncCoreSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STORMSYNCCORE_API UClass* ::Z_Construct_UClass_UStormSyncCoreSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStormSyncCoreSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StormSyncCore"), Z_Construct_UClass_UStormSyncCoreSettings_NoRegister) \
	DECLARE_SERIALIZER(UStormSyncCoreSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStormSyncCoreSettings(UStormSyncCoreSettings&&) = delete; \
	UStormSyncCoreSettings(const UStormSyncCoreSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STORMSYNCCORE_API, UStormSyncCoreSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStormSyncCoreSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStormSyncCoreSettings) \
	STORMSYNCCORE_API virtual ~UStormSyncCoreSettings();


#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreSettings_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStormSyncCoreSettings;

// ********** End Class UStormSyncCoreSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
