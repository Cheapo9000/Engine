// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShallowWaterSettings.h"

#ifdef WATERADVANCED_ShallowWaterSettings_generated_h
#error "ShallowWaterSettings.generated.h already included, missing '#pragma once' in ShallowWaterSettings.h"
#endif
#define WATERADVANCED_ShallowWaterSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UShallowWaterSettings ****************************************************
struct Z_Construct_UClass_UShallowWaterSettings_Statics;
WATERADVANCED_API UClass* Z_Construct_UClass_UShallowWaterSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShallowWaterSettings(); \
	friend struct ::Z_Construct_UClass_UShallowWaterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATERADVANCED_API UClass* ::Z_Construct_UClass_UShallowWaterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UShallowWaterSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterAdvanced"), Z_Construct_UClass_UShallowWaterSettings_NoRegister) \
	DECLARE_SERIALIZER(UShallowWaterSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShallowWaterSettings(UShallowWaterSettings&&) = delete; \
	UShallowWaterSettings(const UShallowWaterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATERADVANCED_API, UShallowWaterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShallowWaterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShallowWaterSettings) \
	WATERADVANCED_API virtual ~UShallowWaterSettings();


#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSettings_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShallowWaterSettings;

// ********** End Class UShallowWaterSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
