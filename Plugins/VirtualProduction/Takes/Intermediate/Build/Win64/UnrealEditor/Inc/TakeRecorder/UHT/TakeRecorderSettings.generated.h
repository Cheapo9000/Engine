// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderSettings.h"

#ifdef TAKERECORDER_TakeRecorderSettings_generated_h
#error "TakeRecorderSettings.generated.h already included, missing '#pragma once' in TakeRecorderSettings.h"
#endif
#define TAKERECORDER_TakeRecorderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeRecorderUserSettings ************************************************
struct Z_Construct_UClass_UTakeRecorderUserSettings_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderUserSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderUserSettings(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorderUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorderUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderUserSettings(UTakeRecorderUserSettings&&) = delete; \
	UTakeRecorderUserSettings(const UTakeRecorderUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDER_API, UTakeRecorderUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTakeRecorderUserSettings) \
	TAKERECORDER_API virtual ~UTakeRecorderUserSettings();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderUserSettings;

// ********** End Class UTakeRecorderUserSettings **************************************************

// ********** Begin Class UTakeRecorderProjectSettings *********************************************
struct Z_Construct_UClass_UTakeRecorderProjectSettings_Statics;
TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderProjectSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderProjectSettings(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKERECORDER_API UClass* ::Z_Construct_UClass_UTakeRecorderProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakeRecorder"), Z_Construct_UClass_UTakeRecorderProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderProjectSettings(UTakeRecorderProjectSettings&&) = delete; \
	UTakeRecorderProjectSettings(const UTakeRecorderProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKERECORDER_API, UTakeRecorderProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTakeRecorderProjectSettings) \
	TAKERECORDER_API virtual ~UTakeRecorderProjectSettings();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_57_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_61_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderProjectSettings;

// ********** End Class UTakeRecorderProjectSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
