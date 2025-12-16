// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialExporterUSD.h"

#ifdef USDEXPORTER_MaterialExporterUSD_generated_h
#error "MaterialExporterUSD.generated.h already included, missing '#pragma once' in MaterialExporterUSD.h"
#endif
#define USDEXPORTER_MaterialExporterUSD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExporterUsd *****************************************************
struct Z_Construct_UClass_UMaterialExporterUsd_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UMaterialExporterUsd_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExporterUsd(); \
	friend struct ::Z_Construct_UClass_UMaterialExporterUsd_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UMaterialExporterUsd_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExporterUsd, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UMaterialExporterUsd_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExporterUsd)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExporterUsd(UMaterialExporterUsd&&) = delete; \
	UMaterialExporterUsd(const UMaterialExporterUsd&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExporterUsd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExporterUsd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialExporterUsd) \
	NO_API virtual ~UMaterialExporterUsd();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_13_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExporterUsd;

// ********** End Class UMaterialExporterUsd *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
