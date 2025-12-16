// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheExporterUSDOptions.h"

#ifdef USDEXPORTER_GeometryCacheExporterUSDOptions_generated_h
#error "GeometryCacheExporterUSDOptions.generated.h already included, missing '#pragma once' in GeometryCacheExporterUSDOptions.h"
#endif
#define USDEXPORTER_GeometryCacheExporterUSDOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCacheExporterUSDOptions *****************************************
struct Z_Construct_UClass_UGeometryCacheExporterUSDOptions_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UGeometryCacheExporterUSDOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_GeometryCacheExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheExporterUSDOptions(); \
	friend struct ::Z_Construct_UClass_UGeometryCacheExporterUSDOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UGeometryCacheExporterUSDOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCacheExporterUSDOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UGeometryCacheExporterUSDOptions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCacheExporterUSDOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_GeometryCacheExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API UGeometryCacheExporterUSDOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCacheExporterUSDOptions(UGeometryCacheExporterUSDOptions&&) = delete; \
	UGeometryCacheExporterUSDOptions(const UGeometryCacheExporterUSDOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, UGeometryCacheExporterUSDOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheExporterUSDOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheExporterUSDOptions) \
	USDEXPORTER_API virtual ~UGeometryCacheExporterUSDOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_GeometryCacheExporterUSDOptions_h_16_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_GeometryCacheExporterUSDOptions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_GeometryCacheExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_GeometryCacheExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCacheExporterUSDOptions;

// ********** End Class UGeometryCacheExporterUSDOptions *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_GeometryCacheExporterUSDOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
