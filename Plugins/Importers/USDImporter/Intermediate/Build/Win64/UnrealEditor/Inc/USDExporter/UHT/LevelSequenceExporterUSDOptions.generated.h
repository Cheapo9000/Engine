// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceExporterUSDOptions.h"

#ifdef USDEXPORTER_LevelSequenceExporterUSDOptions_generated_h
#error "LevelSequenceExporterUSDOptions.generated.h already included, missing '#pragma once' in LevelSequenceExporterUSDOptions.h"
#endif
#define USDEXPORTER_LevelSequenceExporterUSDOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelSequenceExporterUsdOptions *****************************************
struct Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_ULevelSequenceExporterUsdOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceExporterUsdOptions(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_ULevelSequenceExporterUsdOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceExporterUsdOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_ULevelSequenceExporterUsdOptions_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceExporterUsdOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API ULevelSequenceExporterUsdOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceExporterUsdOptions(ULevelSequenceExporterUsdOptions&&) = delete; \
	ULevelSequenceExporterUsdOptions(const ULevelSequenceExporterUsdOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, ULevelSequenceExporterUsdOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceExporterUsdOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceExporterUsdOptions) \
	USDEXPORTER_API virtual ~ULevelSequenceExporterUsdOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_18_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceExporterUsdOptions;

// ********** End Class ULevelSequenceExporterUsdOptions *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
