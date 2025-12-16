// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageEditorSettings.h"

#ifdef USDSTAGEEDITOR_USDStageEditorSettings_generated_h
#error "USDStageEditorSettings.generated.h already included, missing '#pragma once' in USDStageEditorSettings.h"
#endif
#define USDSTAGEEDITOR_USDStageEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdStageEditorSettings **************************************************
struct Z_Construct_UClass_UUsdStageEditorSettings_Statics;
USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdStageEditorSettings_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdStageEditorSettings(); \
	friend struct ::Z_Construct_UClass_UUsdStageEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGEEDITOR_API UClass* ::Z_Construct_UClass_UUsdStageEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdStageEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDStageEditor"), Z_Construct_UClass_UUsdStageEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UUsdStageEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdStageEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdStageEditorSettings(UUsdStageEditorSettings&&) = delete; \
	UUsdStageEditorSettings(const UUsdStageEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdStageEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdStageEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdStageEditorSettings) \
	NO_API virtual ~UUsdStageEditorSettings();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_9_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdStageEditorSettings;

// ********** End Class UUsdStageEditorSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
