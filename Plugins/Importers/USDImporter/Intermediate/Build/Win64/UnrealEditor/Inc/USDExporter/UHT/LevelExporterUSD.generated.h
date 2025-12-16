// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelExporterUSD.h"

#ifdef USDEXPORTER_LevelExporterUSD_generated_h
#error "LevelExporterUSD.generated.h already included, missing '#pragma once' in LevelExporterUSD.h"
#endif
#define USDEXPORTER_LevelExporterUSD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelExporterUSD ********************************************************
struct Z_Construct_UClass_ULevelExporterUSD_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_ULevelExporterUSD_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelExporterUSD(); \
	friend struct ::Z_Construct_UClass_ULevelExporterUSD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_ULevelExporterUSD_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelExporterUSD, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_ULevelExporterUSD_NoRegister) \
	DECLARE_SERIALIZER(ULevelExporterUSD)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelExporterUSD(ULevelExporterUSD&&) = delete; \
	ULevelExporterUSD(const ULevelExporterUSD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelExporterUSD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelExporterUSD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelExporterUSD) \
	NO_API virtual ~ULevelExporterUSD();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_9_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelExporterUSD;

// ********** End Class ULevelExporterUSD **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
