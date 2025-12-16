// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIFLocalSettings.h"

#ifdef UIFRAMEWORK_UIFLocalSettings_generated_h
#error "UIFLocalSettings.generated.h already included, missing '#pragma once' in UIFLocalSettings.h"
#endif
#define UIFRAMEWORK_UIFLocalSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUIFrameworkLocalSettings ************************************************
struct Z_Construct_UClass_UUIFrameworkLocalSettings_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkLocalSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkLocalSettings(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkLocalSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkLocalSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkLocalSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkLocalSettings_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkLocalSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkLocalSettings(UUIFrameworkLocalSettings&&) = delete; \
	UUIFrameworkLocalSettings(const UUIFrameworkLocalSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkLocalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkLocalSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkLocalSettings) \
	UIFRAMEWORK_API virtual ~UUIFrameworkLocalSettings();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkLocalSettings;

// ********** End Class UUIFrameworkLocalSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
