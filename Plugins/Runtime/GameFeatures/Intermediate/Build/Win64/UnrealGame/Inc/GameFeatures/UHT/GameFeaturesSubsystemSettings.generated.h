// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeaturesSubsystemSettings.h"

#ifdef GAMEFEATURES_GameFeaturesSubsystemSettings_generated_h
#error "GameFeaturesSubsystemSettings.generated.h already included, missing '#pragma once' in GameFeaturesSubsystemSettings.h"
#endif
#define GAMEFEATURES_GameFeaturesSubsystemSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameFeaturesSubsystemSettings *******************************************
struct Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesSubsystemSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeaturesSubsystemSettings(); \
	friend struct ::Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeaturesSubsystemSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeaturesSubsystemSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeaturesSubsystemSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameFeaturesSubsystemSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeaturesSubsystemSettings(UGameFeaturesSubsystemSettings&&) = delete; \
	UGameFeaturesSubsystemSettings(const UGameFeaturesSubsystemSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeaturesSubsystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeaturesSubsystemSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameFeaturesSubsystemSettings) \
	GAMEFEATURES_API virtual ~UGameFeaturesSubsystemSettings();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeaturesSubsystemSettings;

// ********** End Class UGameFeaturesSubsystemSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
