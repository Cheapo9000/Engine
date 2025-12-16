// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialExporterUSDOptions.h"

#ifdef USDEXPORTER_MaterialExporterUSDOptions_generated_h
#error "MaterialExporterUSDOptions.generated.h already included, missing '#pragma once' in MaterialExporterUSDOptions.h"
#endif
#define USDEXPORTER_MaterialExporterUSDOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExporterUSDOptions **********************************************
struct Z_Construct_UClass_UMaterialExporterUSDOptions_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UMaterialExporterUSDOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExporterUSDOptions(); \
	friend struct ::Z_Construct_UClass_UMaterialExporterUSDOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UMaterialExporterUSDOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExporterUSDOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UMaterialExporterUSDOptions_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExporterUSDOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API UMaterialExporterUSDOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExporterUSDOptions(UMaterialExporterUSDOptions&&) = delete; \
	UMaterialExporterUSDOptions(const UMaterialExporterUSDOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, UMaterialExporterUSDOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExporterUSDOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExporterUSDOptions) \
	USDEXPORTER_API virtual ~UMaterialExporterUSDOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_17_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExporterUSDOptions;

// ********** End Class UMaterialExporterUSDOptions ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
