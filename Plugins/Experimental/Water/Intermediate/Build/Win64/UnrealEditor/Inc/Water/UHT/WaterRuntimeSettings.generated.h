// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterRuntimeSettings.h"

#ifdef WATER_WaterRuntimeSettings_generated_h
#error "WaterRuntimeSettings.generated.h already included, missing '#pragma once' in WaterRuntimeSettings.h"
#endif
#define WATER_WaterRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterRuntimeSettings ****************************************************
struct Z_Construct_UClass_UWaterRuntimeSettings_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterRuntimeSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UWaterRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UWaterRuntimeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterRuntimeSettings(UWaterRuntimeSettings&&) = delete; \
	UWaterRuntimeSettings(const UWaterRuntimeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterRuntimeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterRuntimeSettings) \
	WATER_API virtual ~UWaterRuntimeSettings();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterRuntimeSettings;

// ********** End Class UWaterRuntimeSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
