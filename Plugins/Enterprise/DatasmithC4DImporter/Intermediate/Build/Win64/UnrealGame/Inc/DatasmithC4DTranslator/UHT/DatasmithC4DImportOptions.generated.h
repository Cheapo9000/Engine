// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithC4DImportOptions.h"

#ifdef DATASMITHC4DTRANSLATOR_DatasmithC4DImportOptions_generated_h
#error "DatasmithC4DImportOptions.generated.h already included, missing '#pragma once' in DatasmithC4DImportOptions.h"
#endif
#define DATASMITHC4DTRANSLATOR_DatasmithC4DImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithC4DImportOptions ***********************************************
struct Z_Construct_UClass_UDatasmithC4DImportOptions_Statics;
DATASMITHC4DTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithC4DImportOptions_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithC4DImportOptions(); \
	friend struct ::Z_Construct_UClass_UDatasmithC4DImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHC4DTRANSLATOR_API UClass* ::Z_Construct_UClass_UDatasmithC4DImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithC4DImportOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithC4DTranslator"), Z_Construct_UClass_UDatasmithC4DImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithC4DImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithC4DImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithC4DImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithC4DImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithC4DImportOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithC4DImportOptions(UDatasmithC4DImportOptions&&) = delete; \
	UDatasmithC4DImportOptions(const UDatasmithC4DImportOptions&) = delete; \
	NO_API virtual ~UDatasmithC4DImportOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_23_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithC4DImportOptions;

// ********** End Class UDatasmithC4DImportOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
