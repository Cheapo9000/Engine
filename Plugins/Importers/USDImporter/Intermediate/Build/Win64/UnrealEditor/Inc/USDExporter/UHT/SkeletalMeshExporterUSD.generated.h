// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMeshExporterUSD.h"

#ifdef USDEXPORTER_SkeletalMeshExporterUSD_generated_h
#error "SkeletalMeshExporterUSD.generated.h already included, missing '#pragma once' in SkeletalMeshExporterUSD.h"
#endif
#define USDEXPORTER_SkeletalMeshExporterUSD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshExporterUsd *************************************************
struct Z_Construct_UClass_USkeletalMeshExporterUsd_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_USkeletalMeshExporterUsd_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshExporterUsd(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshExporterUsd_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_USkeletalMeshExporterUsd_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshExporterUsd, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_USkeletalMeshExporterUsd_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshExporterUsd)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSD_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshExporterUsd(USkeletalMeshExporterUsd&&) = delete; \
	USkeletalMeshExporterUsd(const USkeletalMeshExporterUsd&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshExporterUsd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshExporterUsd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkeletalMeshExporterUsd) \
	NO_API virtual ~USkeletalMeshExporterUsd();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSD_h_9_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSD_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshExporterUsd;

// ********** End Class USkeletalMeshExporterUsd ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
