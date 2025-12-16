// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TweeningToolsUserSettings.h"

#ifdef TWEENINGUTILSEDITOR_TweeningToolsUserSettings_generated_h
#error "TweeningToolsUserSettings.generated.h already included, missing '#pragma once' in TweeningToolsUserSettings.h"
#endif
#define TWEENINGUTILSEDITOR_TweeningToolsUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTweeningToolsUserSettings ***********************************************
struct Z_Construct_UClass_UTweeningToolsUserSettings_Statics;
TWEENINGUTILSEDITOR_API UClass* Z_Construct_UClass_UTweeningToolsUserSettings_NoRegister();

#define FID_Engine_Plugins_Animation_TweeningUtils_Source_TweeningUtilsEditor_Public_TweeningToolsUserSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweeningToolsUserSettings(); \
	friend struct ::Z_Construct_UClass_UTweeningToolsUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TWEENINGUTILSEDITOR_API UClass* ::Z_Construct_UClass_UTweeningToolsUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTweeningToolsUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TweeningUtilsEditor"), Z_Construct_UClass_UTweeningToolsUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UTweeningToolsUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_TweeningUtils_Source_TweeningUtilsEditor_Public_TweeningToolsUserSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TWEENINGUTILSEDITOR_API UTweeningToolsUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTweeningToolsUserSettings(UTweeningToolsUserSettings&&) = delete; \
	UTweeningToolsUserSettings(const UTweeningToolsUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TWEENINGUTILSEDITOR_API, UTweeningToolsUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweeningToolsUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweeningToolsUserSettings) \
	TWEENINGUTILSEDITOR_API virtual ~UTweeningToolsUserSettings();


#define FID_Engine_Plugins_Animation_TweeningUtils_Source_TweeningUtilsEditor_Public_TweeningToolsUserSettings_h_13_PROLOG
#define FID_Engine_Plugins_Animation_TweeningUtils_Source_TweeningUtilsEditor_Public_TweeningToolsUserSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_TweeningUtils_Source_TweeningUtilsEditor_Public_TweeningToolsUserSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_TweeningUtils_Source_TweeningUtilsEditor_Public_TweeningToolsUserSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTweeningToolsUserSettings;

// ********** End Class UTweeningToolsUserSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_TweeningUtils_Source_TweeningUtilsEditor_Public_TweeningToolsUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
