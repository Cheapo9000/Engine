// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageImportFactory.h"

#ifdef USDSTAGEIMPORTER_USDStageImportFactory_generated_h
#error "USDStageImportFactory.generated.h already included, missing '#pragma once' in USDStageImportFactory.h"
#endif
#define USDSTAGEIMPORTER_USDStageImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdStageImportFactory ***************************************************
struct Z_Construct_UClass_UUsdStageImportFactory_Statics;
USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageImportFactory_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageImportFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUsdStageImportFactory(); \
	friend struct ::Z_Construct_UClass_UUsdStageImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGEIMPORTER_API UClass* ::Z_Construct_UClass_UUsdStageImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdStageImportFactory, USceneImportFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/USDStageImporter"), Z_Construct_UClass_UUsdStageImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UUsdStageImportFactory)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageImportFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdStageImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdStageImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdStageImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdStageImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdStageImportFactory(UUsdStageImportFactory&&) = delete; \
	UUsdStageImportFactory(const UUsdStageImportFactory&) = delete; \
	NO_API virtual ~UUsdStageImportFactory();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageImportFactory_h_12_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageImportFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageImportFactory_h_15_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageImportFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdStageImportFactory;

// ********** End Class UUsdStageImportFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
