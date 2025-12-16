// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EaseCurveToolSettings.h"

#ifdef EASECURVETOOL_EaseCurveToolSettings_generated_h
#error "EaseCurveToolSettings.generated.h already included, missing '#pragma once' in EaseCurveToolSettings.h"
#endif
#define EASECURVETOOL_EaseCurveToolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEaseCurveToolSettings ***************************************************
struct Z_Construct_UClass_UEaseCurveToolSettings_Statics;
EASECURVETOOL_API UClass* Z_Construct_UClass_UEaseCurveToolSettings_NoRegister();

#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveToolSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEaseCurveToolSettings(); \
	friend struct ::Z_Construct_UClass_UEaseCurveToolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASECURVETOOL_API UClass* ::Z_Construct_UClass_UEaseCurveToolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEaseCurveToolSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EaseCurveTool"), Z_Construct_UClass_UEaseCurveToolSettings_NoRegister) \
	DECLARE_SERIALIZER(UEaseCurveToolSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveToolSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEaseCurveToolSettings(UEaseCurveToolSettings&&) = delete; \
	UEaseCurveToolSettings(const UEaseCurveToolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEaseCurveToolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEaseCurveToolSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEaseCurveToolSettings) \
	NO_API virtual ~UEaseCurveToolSettings();


#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveToolSettings_h_12_PROLOG
#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveToolSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveToolSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveToolSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEaseCurveToolSettings;

// ********** End Class UEaseCurveToolSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveToolSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
