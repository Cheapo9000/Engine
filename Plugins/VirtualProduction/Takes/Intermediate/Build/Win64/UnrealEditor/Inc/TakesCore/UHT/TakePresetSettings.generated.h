// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakePresetSettings.h"

#ifdef TAKESCORE_TakePresetSettings_generated_h
#error "TakePresetSettings.generated.h already included, missing '#pragma once' in TakePresetSettings.h"
#endif
#define TAKESCORE_TakePresetSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTakeRecorderTargetRecordClassProperty ****************************
struct Z_Construct_UScriptStruct_FTakeRecorderTargetRecordClassProperty_Statics;
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTakeRecorderTargetRecordClassProperty_Statics; \
	TAKESCORE_API static class UScriptStruct* StaticStruct();


struct FTakeRecorderTargetRecordClassProperty;
// ********** End ScriptStruct FTakeRecorderTargetRecordClassProperty ******************************

// ********** Begin Class UTakePresetSettings ******************************************************
struct Z_Construct_UClass_UTakePresetSettings_Statics;
TAKESCORE_API UClass* Z_Construct_UClass_UTakePresetSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakePresetSettings(); \
	friend struct ::Z_Construct_UClass_UTakePresetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKESCORE_API UClass* ::Z_Construct_UClass_UTakePresetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakePresetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakesCore"), Z_Construct_UClass_UTakePresetSettings_NoRegister) \
	DECLARE_SERIALIZER(UTakePresetSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakePresetSettings(UTakePresetSettings&&) = delete; \
	UTakePresetSettings(const UTakePresetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKESCORE_API, UTakePresetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakePresetSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTakePresetSettings) \
	TAKESCORE_API virtual ~UTakePresetSettings();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h_33_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakePresetSettings;

// ********** End Class UTakePresetSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePresetSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
