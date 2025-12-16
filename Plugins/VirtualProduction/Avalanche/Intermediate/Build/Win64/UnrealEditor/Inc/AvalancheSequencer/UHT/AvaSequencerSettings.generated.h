// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/AvaSequencerSettings.h"

#ifdef AVALANCHESEQUENCER_AvaSequencerSettings_generated_h
#error "AvaSequencerSettings.generated.h already included, missing '#pragma once' in AvaSequencerSettings.h"
#endif
#define AVALANCHESEQUENCER_AvaSequencerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaSequencerSettings ****************************************************
struct Z_Construct_UClass_UAvaSequencerSettings_Statics;
AVALANCHESEQUENCER_API UClass* Z_Construct_UClass_UAvaSequencerSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Public_Settings_AvaSequencerSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequencerSettings(); \
	friend struct ::Z_Construct_UClass_UAvaSequencerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESEQUENCER_API UClass* ::Z_Construct_UClass_UAvaSequencerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSequencerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheSequencer"), Z_Construct_UClass_UAvaSequencerSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaSequencerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Public_Settings_AvaSequencerSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSequencerSettings(UAvaSequencerSettings&&) = delete; \
	UAvaSequencerSettings(const UAvaSequencerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESEQUENCER_API, UAvaSequencerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequencerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSequencerSettings) \
	AVALANCHESEQUENCER_API virtual ~UAvaSequencerSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Public_Settings_AvaSequencerSettings_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Public_Settings_AvaSequencerSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Public_Settings_AvaSequencerSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Public_Settings_AvaSequencerSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSequencerSettings;

// ********** End Class UAvaSequencerSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Public_Settings_AvaSequencerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
