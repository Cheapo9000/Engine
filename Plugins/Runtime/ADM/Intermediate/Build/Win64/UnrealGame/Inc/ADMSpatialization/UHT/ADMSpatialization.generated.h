// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ADMSpatialization.h"

#ifdef ADMSPATIALIZATION_ADMSpatialization_generated_h
#error "ADMSpatialization.generated.h already included, missing '#pragma once' in ADMSpatialization.h"
#endif
#define ADMSPATIALIZATION_ADMSpatialization_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UADMSpatializationSourceSettings *****************************************
struct Z_Construct_UClass_UADMSpatializationSourceSettings_Statics;
ADMSPATIALIZATION_API UClass* Z_Construct_UClass_UADMSpatializationSourceSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUADMSpatializationSourceSettings(); \
	friend struct ::Z_Construct_UClass_UADMSpatializationSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADMSPATIALIZATION_API UClass* ::Z_Construct_UClass_UADMSpatializationSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UADMSpatializationSourceSettings, USpatializationPluginSourceSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ADMSpatialization"), Z_Construct_UClass_UADMSpatializationSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(UADMSpatializationSourceSettings)


#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UADMSpatializationSourceSettings(UADMSpatializationSourceSettings&&) = delete; \
	UADMSpatializationSourceSettings(const UADMSpatializationSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UADMSpatializationSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UADMSpatializationSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UADMSpatializationSourceSettings) \
	NO_API virtual ~UADMSpatializationSourceSettings();


#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UADMSpatializationSourceSettings;

// ********** End Class UADMSpatializationSourceSettings *******************************************

// ********** Begin Class UADMEngineSubsystem ******************************************************
#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSendIPAddress);


struct Z_Construct_UClass_UADMEngineSubsystem_Statics;
ADMSPATIALIZATION_API UClass* Z_Construct_UClass_UADMEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUADMEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UADMEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADMSPATIALIZATION_API UClass* ::Z_Construct_UClass_UADMEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UADMEngineSubsystem, UAudioEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ADMSpatialization"), Z_Construct_UClass_UADMEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UADMEngineSubsystem)


#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UADMEngineSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UADMEngineSubsystem(UADMEngineSubsystem&&) = delete; \
	UADMEngineSubsystem(const UADMEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UADMEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UADMEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UADMEngineSubsystem) \
	NO_API virtual ~UADMEngineSubsystem();


#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UADMEngineSubsystem;

// ********** End Class UADMEngineSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatialization_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
