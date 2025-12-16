// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ADMSpatializationSettings.h"

#ifdef ADMSPATIALIZATION_ADMSpatializationSettings_generated_h
#error "ADMSpatializationSettings.generated.h already included, missing '#pragma once' in ADMSpatializationSettings.h"
#endif
#define ADMSPATIALIZATION_ADMSpatializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UADMSpatializationSettings ***********************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execADMConnect);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UADMSpatializationSettings_Statics;
ADMSPATIALIZATION_API UClass* Z_Construct_UClass_UADMSpatializationSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUADMSpatializationSettings(); \
	friend struct ::Z_Construct_UClass_UADMSpatializationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADMSPATIALIZATION_API UClass* ::Z_Construct_UClass_UADMSpatializationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UADMSpatializationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ADMSpatialization"), Z_Construct_UClass_UADMSpatializationSettings_NoRegister) \
	DECLARE_SERIALIZER(UADMSpatializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("ADM");} \



#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UADMSpatializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UADMSpatializationSettings(UADMSpatializationSettings&&) = delete; \
	UADMSpatializationSettings(const UADMSpatializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UADMSpatializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UADMSpatializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UADMSpatializationSettings) \
	NO_API virtual ~UADMSpatializationSettings();


#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UADMSpatializationSettings;

// ********** End Class UADMSpatializationSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ADM_Source_ADMSpatialization_Private_ADMSpatializationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
