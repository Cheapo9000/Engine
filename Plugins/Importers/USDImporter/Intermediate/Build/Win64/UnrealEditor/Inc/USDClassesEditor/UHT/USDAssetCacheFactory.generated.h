// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDAssetCacheFactory.h"

#ifdef USDCLASSESEDITOR_USDAssetCacheFactory_generated_h
#error "USDAssetCacheFactory.generated.h already included, missing '#pragma once' in USDAssetCacheFactory.h"
#endif
#define USDCLASSESEDITOR_USDAssetCacheFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdAssetCacheFactory ****************************************************
struct Z_Construct_UClass_UUsdAssetCacheFactory_Statics;
USDCLASSESEDITOR_API UClass* Z_Construct_UClass_UUsdAssetCacheFactory_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUsdAssetCacheFactory(); \
	friend struct ::Z_Construct_UClass_UUsdAssetCacheFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDCLASSESEDITOR_API UClass* ::Z_Construct_UClass_UUsdAssetCacheFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdAssetCacheFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDClassesEditor"), Z_Construct_UClass_UUsdAssetCacheFactory_NoRegister) \
	DECLARE_SERIALIZER(UUsdAssetCacheFactory)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdAssetCacheFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdAssetCacheFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdAssetCacheFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdAssetCacheFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdAssetCacheFactory(UUsdAssetCacheFactory&&) = delete; \
	UUsdAssetCacheFactory(const UUsdAssetCacheFactory&) = delete; \
	NO_API virtual ~UUsdAssetCacheFactory();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_11_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_14_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdAssetCacheFactory;

// ********** End Class UUsdAssetCacheFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
