// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/AvaSequencerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESEQUENCER_AvaSequencerSettings_generated_h
#error "AvaSequencerSettings.generated.h already included, missing '#pragma once' in AvaSequencerSettings.h"
#endif
#define AVALANCHESEQUENCER_AvaSequencerSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Private_Settings_AvaSequencerSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequencerSettings(); \
	friend struct Z_Construct_UClass_UAvaSequencerSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaSequencerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheSequencer"), NO_API) \
	DECLARE_SERIALIZER(UAvaSequencerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Private_Settings_AvaSequencerSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSequencerSettings(UAvaSequencerSettings&&); \
	UAvaSequencerSettings(const UAvaSequencerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaSequencerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequencerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSequencerSettings) \
	NO_API virtual ~UAvaSequencerSettings();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Private_Settings_AvaSequencerSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Private_Settings_AvaSequencerSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Private_Settings_AvaSequencerSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Private_Settings_AvaSequencerSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESEQUENCER_API UClass* StaticClass<class UAvaSequencerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Private_Settings_AvaSequencerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
