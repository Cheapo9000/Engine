// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMRQEditorSettings.h"

#ifdef AVALANCHEMRQEDITOR_AvaMRQEditorSettings_generated_h
#error "AvaMRQEditorSettings.generated.h already included, missing '#pragma once' in AvaMRQEditorSettings.h"
#endif
#define AVALANCHEMRQEDITOR_AvaMRQEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaMRQEditorSettings ****************************************************
struct Z_Construct_UClass_UAvaMRQEditorSettings_Statics;
AVALANCHEMRQEDITOR_API UClass* Z_Construct_UClass_UAvaMRQEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMRQEditor_Private_AvaMRQEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMRQEditorSettings(); \
	friend struct ::Z_Construct_UClass_UAvaMRQEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMRQEDITOR_API UClass* ::Z_Construct_UClass_UAvaMRQEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMRQEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMRQEditor"), Z_Construct_UClass_UAvaMRQEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaMRQEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMRQEditor_Private_AvaMRQEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMRQEditorSettings(UAvaMRQEditorSettings&&) = delete; \
	UAvaMRQEditorSettings(const UAvaMRQEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMRQEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMRQEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMRQEditorSettings) \
	NO_API virtual ~UAvaMRQEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMRQEditor_Private_AvaMRQEditorSettings_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMRQEditor_Private_AvaMRQEditorSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMRQEditor_Private_AvaMRQEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMRQEditor_Private_AvaMRQEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMRQEditorSettings;

// ********** End Class UAvaMRQEditorSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMRQEditor_Private_AvaMRQEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
