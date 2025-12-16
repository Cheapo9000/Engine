// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithImporterEditorSettings.h"

#ifdef DATASMITHIMPORTER_DatasmithImporterEditorSettings_generated_h
#error "DatasmithImporterEditorSettings.generated.h already included, missing '#pragma once' in DatasmithImporterEditorSettings.h"
#endif
#define DATASMITHIMPORTER_DatasmithImporterEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithImporterEditorSettings *****************************************
struct Z_Construct_UClass_UDatasmithImporterEditorSettings_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithImporterEditorSettings_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImporterEditorSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithImporterEditorSettings(); \
	friend struct ::Z_Construct_UClass_UDatasmithImporterEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithImporterEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithImporterEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithImporterEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithImporterEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImporterEditorSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithImporterEditorSettings(UDatasmithImporterEditorSettings&&) = delete; \
	UDatasmithImporterEditorSettings(const UDatasmithImporterEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHIMPORTER_API, UDatasmithImporterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithImporterEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatasmithImporterEditorSettings) \
	DATASMITHIMPORTER_API virtual ~UDatasmithImporterEditorSettings();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImporterEditorSettings_h_7_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImporterEditorSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImporterEditorSettings_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImporterEditorSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithImporterEditorSettings;

// ********** End Class UDatasmithImporterEditorSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImporterEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
