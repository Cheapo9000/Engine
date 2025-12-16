// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PSDDocumentImportFactory.h"

#ifdef PSDIMPORTEREDITOR_PSDDocumentImportFactory_generated_h
#error "PSDDocumentImportFactory.generated.h already included, missing '#pragma once' in PSDDocumentImportFactory.h"
#endif
#define PSDIMPORTEREDITOR_PSDDocumentImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPSDDocumentImportFactory ************************************************
struct Z_Construct_UClass_UPSDDocumentImportFactory_Statics;
PSDIMPORTEREDITOR_API UClass* Z_Construct_UClass_UPSDDocumentImportFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_PSDDocumentImportFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPSDDocumentImportFactory(); \
	friend struct ::Z_Construct_UClass_UPSDDocumentImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTEREDITOR_API UClass* ::Z_Construct_UClass_UPSDDocumentImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPSDDocumentImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PSDImporterEditor"), Z_Construct_UClass_UPSDDocumentImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UPSDDocumentImportFactory)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_PSDDocumentImportFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPSDDocumentImportFactory(UPSDDocumentImportFactory&&) = delete; \
	UPSDDocumentImportFactory(const UPSDDocumentImportFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPSDDocumentImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPSDDocumentImportFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPSDDocumentImportFactory) \
	NO_API virtual ~UPSDDocumentImportFactory();


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_PSDDocumentImportFactory_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_PSDDocumentImportFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_PSDDocumentImportFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_PSDDocumentImportFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPSDDocumentImportFactory;

// ********** End Class UPSDDocumentImportFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_PSDDocumentImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
