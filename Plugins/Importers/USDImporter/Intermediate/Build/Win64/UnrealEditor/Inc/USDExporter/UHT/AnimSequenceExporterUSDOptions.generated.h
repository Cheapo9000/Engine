// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequenceExporterUSDOptions.h"

#ifdef USDEXPORTER_AnimSequenceExporterUSDOptions_generated_h
#error "AnimSequenceExporterUSDOptions.generated.h already included, missing '#pragma once' in AnimSequenceExporterUSDOptions.h"
#endif
#define USDEXPORTER_AnimSequenceExporterUSDOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequenceExporterUSDOptions ******************************************
struct Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UAnimSequenceExporterUSDOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequenceExporterUSDOptions(); \
	friend struct ::Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UAnimSequenceExporterUSDOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequenceExporterUSDOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UAnimSequenceExporterUSDOptions_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequenceExporterUSDOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API UAnimSequenceExporterUSDOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequenceExporterUSDOptions(UAnimSequenceExporterUSDOptions&&) = delete; \
	UAnimSequenceExporterUSDOptions(const UAnimSequenceExporterUSDOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, UAnimSequenceExporterUSDOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceExporterUSDOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceExporterUSDOptions) \
	USDEXPORTER_API virtual ~UAnimSequenceExporterUSDOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_16_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequenceExporterUSDOptions;

// ********** End Class UAnimSequenceExporterUSDOptions ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
