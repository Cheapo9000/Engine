// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositeCoreSettings.h"

#ifdef COMPOSITECORE_CompositeCoreSettings_generated_h
#error "CompositeCoreSettings.generated.h already included, missing '#pragma once' in CompositeCoreSettings.h"
#endif
#define COMPOSITECORE_CompositeCoreSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeCorePluginSettings *********************************************
struct Z_Construct_UClass_UCompositeCorePluginSettings_Statics;
COMPOSITECORE_API UClass* Z_Construct_UClass_UCompositeCorePluginSettings_NoRegister();

#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeCorePluginSettings(); \
	friend struct ::Z_Construct_UClass_UCompositeCorePluginSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITECORE_API UClass* ::Z_Construct_UClass_UCompositeCorePluginSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeCorePluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompositeCore"), Z_Construct_UClass_UCompositeCorePluginSettings_NoRegister) \
	DECLARE_SERIALIZER(UCompositeCorePluginSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeCorePluginSettings(UCompositeCorePluginSettings&&) = delete; \
	UCompositeCorePluginSettings(const UCompositeCorePluginSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITECORE_API, UCompositeCorePluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCorePluginSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositeCorePluginSettings) \
	COMPOSITECORE_API virtual ~UCompositeCorePluginSettings();


#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h_26_PROLOG
#define FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeCorePluginSettings;

// ********** End Class UCompositeCorePluginSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
