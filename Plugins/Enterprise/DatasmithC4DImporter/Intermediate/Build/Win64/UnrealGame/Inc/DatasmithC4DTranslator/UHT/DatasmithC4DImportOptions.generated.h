// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithC4DImportOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHC4DTRANSLATOR_DatasmithC4DImportOptions_generated_h
#error "DatasmithC4DImportOptions.generated.h already included, missing '#pragma once' in DatasmithC4DImportOptions.h"
#endif
#define DATASMITHC4DTRANSLATOR_DatasmithC4DImportOptions_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithC4DImportOptions(); \
	friend struct Z_Construct_UClass_UDatasmithC4DImportOptions_Statics; \
public: \
	DECLARE_CLASS(UDatasmithC4DImportOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithC4DTranslator"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithC4DImportOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithC4DImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithC4DImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithC4DImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithC4DImportOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDatasmithC4DImportOptions(UDatasmithC4DImportOptions&&); \
	UDatasmithC4DImportOptions(const UDatasmithC4DImportOptions&); \
public: \
	NO_API virtual ~UDatasmithC4DImportOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_23_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHC4DTRANSLATOR_API UClass* StaticClass<class UDatasmithC4DImportOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithC4DImporter_Source_DatasmithC4DTranslator_Private_DatasmithC4DImportOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
