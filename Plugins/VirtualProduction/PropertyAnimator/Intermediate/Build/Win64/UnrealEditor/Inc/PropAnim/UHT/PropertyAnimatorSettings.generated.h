// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/PropertyAnimatorSettings.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorSettings_generated_h
#error "PropertyAnimatorSettings.generated.h already included, missing '#pragma once' in PropertyAnimatorSettings.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorSettings ************************************************
struct Z_Construct_UClass_UPropertyAnimatorSettings_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Settings_PropertyAnimatorSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorSettings(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Settings_PropertyAnimatorSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorSettings(UPropertyAnimatorSettings&&) = delete; \
	UPropertyAnimatorSettings(const UPropertyAnimatorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyAnimatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorSettings) \
	NO_API virtual ~UPropertyAnimatorSettings();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Settings_PropertyAnimatorSettings_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Settings_PropertyAnimatorSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Settings_PropertyAnimatorSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Settings_PropertyAnimatorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorSettings;

// ********** End Class UPropertyAnimatorSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Private_Settings_PropertyAnimatorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
