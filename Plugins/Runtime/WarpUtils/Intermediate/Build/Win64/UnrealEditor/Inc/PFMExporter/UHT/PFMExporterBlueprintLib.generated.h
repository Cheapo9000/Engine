// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PFMExporterBlueprintLib.h"

#ifdef PFMEXPORTER_PFMExporterBlueprintLib_generated_h
#error "PFMExporterBlueprintLib.generated.h already included, missing '#pragma once' in PFMExporterBlueprintLib.h"
#endif
#define PFMEXPORTER_PFMExporterBlueprintLib_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IPFMExporterBlueprintAPI;

// ********** Begin Class UPFMExporterBlueprintLib *************************************************
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAPI);


struct Z_Construct_UClass_UPFMExporterBlueprintLib_Statics;
PFMEXPORTER_API UClass* Z_Construct_UClass_UPFMExporterBlueprintLib_NoRegister();

#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPFMExporterBlueprintLib(); \
	friend struct ::Z_Construct_UClass_UPFMExporterBlueprintLib_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFMEXPORTER_API UClass* ::Z_Construct_UClass_UPFMExporterBlueprintLib_NoRegister(); \
public: \
	DECLARE_CLASS2(UPFMExporterBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PFMExporter"), Z_Construct_UClass_UPFMExporterBlueprintLib_NoRegister) \
	DECLARE_SERIALIZER(UPFMExporterBlueprintLib)


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFMExporterBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFMExporterBlueprintLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMExporterBlueprintLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMExporterBlueprintLib); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPFMExporterBlueprintLib(UPFMExporterBlueprintLib&&) = delete; \
	UPFMExporterBlueprintLib(const UPFMExporterBlueprintLib&) = delete; \
	NO_API virtual ~UPFMExporterBlueprintLib();


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPFMExporterBlueprintLib;

// ********** End Class UPFMExporterBlueprintLib ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
