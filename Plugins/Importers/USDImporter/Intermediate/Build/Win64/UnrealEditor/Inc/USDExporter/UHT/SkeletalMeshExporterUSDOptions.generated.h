// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMeshExporterUSDOptions.h"

#ifdef USDEXPORTER_SkeletalMeshExporterUSDOptions_generated_h
#error "SkeletalMeshExporterUSDOptions.generated.h already included, missing '#pragma once' in SkeletalMeshExporterUSDOptions.h"
#endif
#define USDEXPORTER_SkeletalMeshExporterUSDOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshExporterUSDOptions ******************************************
struct Z_Construct_UClass_USkeletalMeshExporterUSDOptions_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_USkeletalMeshExporterUSDOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshExporterUSDOptions(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshExporterUSDOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_USkeletalMeshExporterUSDOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshExporterUSDOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_USkeletalMeshExporterUSDOptions_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshExporterUSDOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API USkeletalMeshExporterUSDOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshExporterUSDOptions(USkeletalMeshExporterUSDOptions&&) = delete; \
	USkeletalMeshExporterUSDOptions(const USkeletalMeshExporterUSDOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, USkeletalMeshExporterUSDOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshExporterUSDOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshExporterUSDOptions) \
	USDEXPORTER_API virtual ~USkeletalMeshExporterUSDOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSDOptions_h_16_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSDOptions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshExporterUSDOptions;

// ********** End Class USkeletalMeshExporterUSDOptions ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_SkeletalMeshExporterUSDOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
