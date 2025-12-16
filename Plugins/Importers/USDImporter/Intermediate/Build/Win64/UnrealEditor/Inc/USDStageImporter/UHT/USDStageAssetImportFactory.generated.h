// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageAssetImportFactory.h"

#ifdef USDSTAGEIMPORTER_USDStageAssetImportFactory_generated_h
#error "USDStageAssetImportFactory.generated.h already included, missing '#pragma once' in USDStageAssetImportFactory.h"
#endif
#define USDSTAGEIMPORTER_USDStageAssetImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdStageAssetImportFactory **********************************************
struct Z_Construct_UClass_UUsdStageAssetImportFactory_Statics;
USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageAssetImportFactory_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUsdStageAssetImportFactory(); \
	friend struct ::Z_Construct_UClass_UUsdStageAssetImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGEIMPORTER_API UClass* ::Z_Construct_UClass_UUsdStageAssetImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdStageAssetImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDStageImporter"), Z_Construct_UClass_UUsdStageAssetImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UUsdStageAssetImportFactory)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdStageAssetImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdStageAssetImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdStageAssetImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdStageAssetImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdStageAssetImportFactory(UUsdStageAssetImportFactory&&) = delete; \
	UUsdStageAssetImportFactory(const UUsdStageAssetImportFactory&) = delete; \
	NO_API virtual ~UUsdStageAssetImportFactory();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_13_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_18_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdStageAssetImportFactory;

// ********** End Class UUsdStageAssetImportFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
