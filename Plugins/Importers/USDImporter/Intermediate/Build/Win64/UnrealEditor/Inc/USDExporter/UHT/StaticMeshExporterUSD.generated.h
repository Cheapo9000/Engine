// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshExporterUSD.h"

#ifdef USDEXPORTER_StaticMeshExporterUSD_generated_h
#error "StaticMeshExporterUSD.generated.h already included, missing '#pragma once' in StaticMeshExporterUSD.h"
#endif
#define USDEXPORTER_StaticMeshExporterUSD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshExporterUsd ***************************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsUsdAvailable);


struct Z_Construct_UClass_UStaticMeshExporterUsd_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UStaticMeshExporterUsd_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshExporterUsd(); \
	friend struct ::Z_Construct_UClass_UStaticMeshExporterUsd_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UStaticMeshExporterUsd_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshExporterUsd, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UStaticMeshExporterUsd_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshExporterUsd)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshExporterUsd(UStaticMeshExporterUsd&&) = delete; \
	UStaticMeshExporterUsd(const UStaticMeshExporterUsd&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshExporterUsd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshExporterUsd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStaticMeshExporterUsd) \
	NO_API virtual ~UStaticMeshExporterUsd();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_9_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshExporterUsd;

// ********** End Class UStaticMeshExporterUsd *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
