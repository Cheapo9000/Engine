// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetRegistryExportCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETREGISTRYEXPORT_AssetRegistryExportCommandlet_generated_h
#error "AssetRegistryExportCommandlet.generated.h already included, missing '#pragma once' in AssetRegistryExportCommandlet.h"
#endif
#define ASSETREGISTRYEXPORT_AssetRegistryExportCommandlet_generated_h

#define FID_Engine_Plugins_Editor_AssetRegistryExport_Source_Private_AssetRegistryExportCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAssetRegistryExportCommandlet(); \
	friend struct Z_Construct_UClass_UAssetRegistryExportCommandlet_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryExportCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistryExport"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryExportCommandlet)


#define FID_Engine_Plugins_Editor_AssetRegistryExport_Source_Private_AssetRegistryExportCommandlet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryExportCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryExportCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryExportCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryExportCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetRegistryExportCommandlet(UAssetRegistryExportCommandlet&&); \
	UAssetRegistryExportCommandlet(const UAssetRegistryExportCommandlet&); \
public: \
	NO_API virtual ~UAssetRegistryExportCommandlet();


#define FID_Engine_Plugins_Editor_AssetRegistryExport_Source_Private_AssetRegistryExportCommandlet_h_9_PROLOG
#define FID_Engine_Plugins_Editor_AssetRegistryExport_Source_Private_AssetRegistryExportCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetRegistryExport_Source_Private_AssetRegistryExportCommandlet_h_12_INCLASS \
	FID_Engine_Plugins_Editor_AssetRegistryExport_Source_Private_AssetRegistryExportCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREGISTRYEXPORT_API UClass* StaticClass<class UAssetRegistryExportCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetRegistryExport_Source_Private_AssetRegistryExportCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
