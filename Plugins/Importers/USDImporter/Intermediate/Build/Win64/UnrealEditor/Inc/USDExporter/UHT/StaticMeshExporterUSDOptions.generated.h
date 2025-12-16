// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshExporterUSDOptions.h"

#ifdef USDEXPORTER_StaticMeshExporterUSDOptions_generated_h
#error "StaticMeshExporterUSDOptions.generated.h already included, missing '#pragma once' in StaticMeshExporterUSDOptions.h"
#endif
#define USDEXPORTER_StaticMeshExporterUSDOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshExporterUSDOptions ********************************************
struct Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UStaticMeshExporterUSDOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshExporterUSDOptions(); \
	friend struct ::Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UStaticMeshExporterUSDOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshExporterUSDOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UStaticMeshExporterUSDOptions_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshExporterUSDOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API UStaticMeshExporterUSDOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshExporterUSDOptions(UStaticMeshExporterUSDOptions&&) = delete; \
	UStaticMeshExporterUSDOptions(const UStaticMeshExporterUSDOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, UStaticMeshExporterUSDOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshExporterUSDOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshExporterUSDOptions) \
	USDEXPORTER_API virtual ~UStaticMeshExporterUSDOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_16_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshExporterUSDOptions;

// ********** End Class UStaticMeshExporterUSDOptions **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
