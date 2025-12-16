// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/CEClonerEffectorSettings.h"

#ifdef CLONEREFFECTOR_CEClonerEffectorSettings_generated_h
#error "CEClonerEffectorSettings.generated.h already included, missing '#pragma once' in CEClonerEffectorSettings.h"
#endif
#define CLONEREFFECTOR_CEClonerEffectorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEClonerEffectorSettings ************************************************
struct Z_Construct_UClass_UCEClonerEffectorSettings_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerEffectorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Private_Settings_CEClonerEffectorSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerEffectorSettings(); \
	friend struct ::Z_Construct_UClass_UCEClonerEffectorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerEffectorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerEffectorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerEffectorSettings_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerEffectorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Private_Settings_CEClonerEffectorSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerEffectorSettings(UCEClonerEffectorSettings&&) = delete; \
	UCEClonerEffectorSettings(const UCEClonerEffectorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCEClonerEffectorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerEffectorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerEffectorSettings) \
	NO_API virtual ~UCEClonerEffectorSettings();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Private_Settings_CEClonerEffectorSettings_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Private_Settings_CEClonerEffectorSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Private_Settings_CEClonerEffectorSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Private_Settings_CEClonerEffectorSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerEffectorSettings;

// ********** End Class UCEClonerEffectorSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Private_Settings_CEClonerEffectorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
