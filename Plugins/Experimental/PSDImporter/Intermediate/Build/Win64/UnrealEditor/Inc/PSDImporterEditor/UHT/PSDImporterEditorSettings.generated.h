// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSDImporterEditorSettings.h"

#ifdef PSDIMPORTEREDITOR_PSDImporterEditorSettings_generated_h
#error "PSDImporterEditorSettings.generated.h already included, missing '#pragma once' in PSDImporterEditorSettings.h"
#endif
#define PSDIMPORTEREDITOR_PSDImporterEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPSDImporterEditorSettings ***********************************************
struct Z_Construct_UClass_UPSDImporterEditorSettings_Statics;
PSDIMPORTEREDITOR_API UClass* Z_Construct_UClass_UPSDImporterEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_PSDImporterEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPSDImporterEditorSettings(); \
	friend struct ::Z_Construct_UClass_UPSDImporterEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTEREDITOR_API UClass* ::Z_Construct_UClass_UPSDImporterEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPSDImporterEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PSDImporterEditor"), Z_Construct_UClass_UPSDImporterEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPSDImporterEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_PSDImporterEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPSDImporterEditorSettings(UPSDImporterEditorSettings&&) = delete; \
	UPSDImporterEditorSettings(const UPSDImporterEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPSDImporterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPSDImporterEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPSDImporterEditorSettings)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_PSDImporterEditorSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_PSDImporterEditorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_PSDImporterEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_PSDImporterEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPSDImporterEditorSettings;

// ********** End Class UPSDImporterEditorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_PSDImporterEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
