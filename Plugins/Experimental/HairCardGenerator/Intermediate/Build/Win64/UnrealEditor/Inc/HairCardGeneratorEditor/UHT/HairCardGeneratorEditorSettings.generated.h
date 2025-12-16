// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HairCardGeneratorEditorSettings.h"

#ifdef HAIRCARDGENERATOREDITOR_HairCardGeneratorEditorSettings_generated_h
#error "HairCardGeneratorEditorSettings.generated.h already included, missing '#pragma once' in HairCardGeneratorEditorSettings.h"
#endif
#define HAIRCARDGENERATOREDITOR_HairCardGeneratorEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHairCardGeneratorEditorSettings *****************************************
struct Z_Construct_UClass_UHairCardGeneratorEditorSettings_Statics;
HAIRCARDGENERATOREDITOR_API UClass* Z_Construct_UClass_UHairCardGeneratorEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHairCardGeneratorEditorSettings(); \
	friend struct ::Z_Construct_UClass_UHairCardGeneratorEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRCARDGENERATOREDITOR_API UClass* ::Z_Construct_UClass_UHairCardGeneratorEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHairCardGeneratorEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairCardGeneratorEditor"), Z_Construct_UClass_UHairCardGeneratorEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UHairCardGeneratorEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHairCardGeneratorEditorSettings(UHairCardGeneratorEditorSettings&&) = delete; \
	UHairCardGeneratorEditorSettings(const UHairCardGeneratorEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHairCardGeneratorEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHairCardGeneratorEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHairCardGeneratorEditorSettings) \
	NO_API virtual ~UHairCardGeneratorEditorSettings();


#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorEditorSettings_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorEditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHairCardGeneratorEditorSettings;

// ********** End Class UHairCardGeneratorEditorSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGeneratorEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
