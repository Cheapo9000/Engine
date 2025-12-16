// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithFBXImportOptions.h"

#ifdef DATASMITHFBXTRANSLATOR_DatasmithFBXImportOptions_generated_h
#error "DatasmithFBXImportOptions.generated.h already included, missing '#pragma once' in DatasmithFBXImportOptions.h"
#endif
#define DATASMITHFBXTRANSLATOR_DatasmithFBXImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithFBXImportOptions ***********************************************
struct Z_Construct_UClass_UDatasmithFBXImportOptions_Statics;
DATASMITHFBXTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithFBXImportOptions_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithFBXImportOptions(); \
	friend struct ::Z_Construct_UClass_UDatasmithFBXImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHFBXTRANSLATOR_API UClass* ::Z_Construct_UClass_UDatasmithFBXImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithFBXImportOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithFBXTranslator"), Z_Construct_UClass_UDatasmithFBXImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithFBXImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithFBXImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithFBXImportOptions(UDatasmithFBXImportOptions&&) = delete; \
	UDatasmithFBXImportOptions(const UDatasmithFBXImportOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithFBXImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithFBXImportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithFBXImportOptions) \
	NO_API virtual ~UDatasmithFBXImportOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_14_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithFBXImportOptions;

// ********** End Class UDatasmithFBXImportOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
