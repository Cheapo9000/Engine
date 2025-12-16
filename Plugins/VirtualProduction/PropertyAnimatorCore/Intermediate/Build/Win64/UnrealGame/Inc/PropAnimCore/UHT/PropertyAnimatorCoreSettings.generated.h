// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/PropertyAnimatorCoreSettings.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreSettings_generated_h
#error "PropertyAnimatorCoreSettings.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreSettings.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreSettings ********************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeSourceNames);


struct Z_Construct_UClass_UPropertyAnimatorCoreSettings_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreSettings(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreSettings_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreSettings(UPropertyAnimatorCoreSettings&&) = delete; \
	UPropertyAnimatorCoreSettings(const UPropertyAnimatorCoreSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyAnimatorCoreSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreSettings) \
	NO_API virtual ~UPropertyAnimatorCoreSettings();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreSettings;

// ********** End Class UPropertyAnimatorCoreSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Private_Settings_PropertyAnimatorCoreSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
