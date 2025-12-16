// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StormSyncTransportSettings.h"

#ifdef STORMSYNCTRANSPORTCORE_StormSyncTransportSettings_generated_h
#error "StormSyncTransportSettings.generated.h already included, missing '#pragma once' in StormSyncTransportSettings.h"
#endif
#define STORMSYNCTRANSPORTCORE_StormSyncTransportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStormSyncTransportSettings **********************************************
struct Z_Construct_UClass_UStormSyncTransportSettings_Statics;
STORMSYNCTRANSPORTCORE_API UClass* Z_Construct_UClass_UStormSyncTransportSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStormSyncTransportSettings(); \
	friend struct ::Z_Construct_UClass_UStormSyncTransportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STORMSYNCTRANSPORTCORE_API UClass* ::Z_Construct_UClass_UStormSyncTransportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStormSyncTransportSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StormSyncTransportCore"), Z_Construct_UClass_UStormSyncTransportSettings_NoRegister) \
	DECLARE_SERIALIZER(UStormSyncTransportSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStormSyncTransportSettings(UStormSyncTransportSettings&&) = delete; \
	UStormSyncTransportSettings(const UStormSyncTransportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStormSyncTransportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStormSyncTransportSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStormSyncTransportSettings) \
	NO_API virtual ~UStormSyncTransportSettings();


#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportSettings_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStormSyncTransportSettings;

// ********** End Class UStormSyncTransportSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncTransportCore_Public_StormSyncTransportSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
