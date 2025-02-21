// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDMiscSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDMiscSettings_generated_h
#error "ChaosVDMiscSettings.generated.h already included, missing '#pragma once' in ChaosVDMiscSettings.h"
#endif
#define CHAOSVD_ChaosVDMiscSettings_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDRecentFile_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct();


template<> CHAOSVD_API UScriptStruct* StaticStruct<struct FChaosVDRecentFile>();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDMiscSettings(); \
	friend struct Z_Construct_UClass_UChaosVDMiscSettings_Statics; \
public: \
	DECLARE_CLASS(UChaosVDMiscSettings, UChaosVDSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDMiscSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDMiscSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDMiscSettings(UChaosVDMiscSettings&&); \
	UChaosVDMiscSettings(const UChaosVDMiscSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDMiscSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDMiscSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDMiscSettings) \
	NO_API virtual ~UChaosVDMiscSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h_57_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDMiscSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDMiscSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
