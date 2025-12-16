// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelExporterUSDOptions.h"

#ifdef USDEXPORTER_LevelExporterUSDOptions_generated_h
#error "LevelExporterUSDOptions.generated.h already included, missing '#pragma once' in LevelExporterUSDOptions.h"
#endif
#define USDEXPORTER_LevelExporterUSDOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLevelExporterUSDOptionsInner *************************************
struct Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics;
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics; \
	USDEXPORTER_API static class UScriptStruct* StaticStruct();


struct FLevelExporterUSDOptionsInner;
// ********** End ScriptStruct FLevelExporterUSDOptionsInner ***************************************

// ********** Begin Class ULevelExporterUSDOptions *************************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUsdExtensions);


struct Z_Construct_UClass_ULevelExporterUSDOptions_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_ULevelExporterUSDOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelExporterUSDOptions(); \
	friend struct ::Z_Construct_UClass_ULevelExporterUSDOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_ULevelExporterUSDOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelExporterUSDOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_ULevelExporterUSDOptions_NoRegister) \
	DECLARE_SERIALIZER(ULevelExporterUSDOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API ULevelExporterUSDOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelExporterUSDOptions(ULevelExporterUSDOptions&&) = delete; \
	ULevelExporterUSDOptions(const ULevelExporterUSDOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, ULevelExporterUSDOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelExporterUSDOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelExporterUSDOptions) \
	USDEXPORTER_API virtual ~ULevelExporterUSDOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_95_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelExporterUSDOptions;

// ********** End Class ULevelExporterUSDOptions ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
