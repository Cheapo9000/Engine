// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithImportFactory.h"

#ifdef DATASMITHIMPORTER_DatasmithImportFactory_generated_h
#error "DatasmithImportFactory.generated.h already included, missing '#pragma once' in DatasmithImportFactory.h"
#endif
#define DATASMITHIMPORTER_DatasmithImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithImportFactory **************************************************
struct Z_Construct_UClass_UDatasmithImportFactory_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithImportFactory_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithImportFactory(); \
	friend struct ::Z_Construct_UClass_UDatasmithImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithImportFactory, USceneImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithImportFactory)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithImportFactory(UDatasmithImportFactory&&) = delete; \
	UDatasmithImportFactory(const UDatasmithImportFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithImportFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatasmithImportFactory) \
	NO_API virtual ~UDatasmithImportFactory();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_34_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithImportFactory;

// ********** End Class UDatasmithImportFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
