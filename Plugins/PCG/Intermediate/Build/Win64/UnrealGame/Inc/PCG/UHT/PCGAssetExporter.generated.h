// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGAssetExporter.h"

#ifdef PCG_PCGAssetExporter_generated_h
#error "PCGAssetExporter.generated.h already included, missing '#pragma once' in PCGAssetExporter.h"
#endif
#define PCG_PCGAssetExporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGDataAsset;

// ********** Begin ScriptStruct FPCGAssetExporterParameters ***************************************
struct Z_Construct_UScriptStruct_FPCGAssetExporterParameters_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGAssetExporterParameters_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGAssetExporterParameters;
// ********** End ScriptStruct FPCGAssetExporterParameters *****************************************

// ********** Begin Class UPCGAssetExporter ********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	PCG_API virtual bool BP_ExportToAsset_Implementation(UPCGDataAsset* Asset); \
	PCG_API virtual TSubclassOf<UPCGDataAsset> BP_GetAssetType_Implementation() const; \
	DECLARE_FUNCTION(execBP_ExportToAsset); \
	DECLARE_FUNCTION(execBP_GetAssetType);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGAssetExporter_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAssetExporter_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAssetExporter(); \
	friend struct ::Z_Construct_UClass_UPCGAssetExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAssetExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAssetExporter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAssetExporter_NoRegister) \
	DECLARE_SERIALIZER(UPCGAssetExporter)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGAssetExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAssetExporter(UPCGAssetExporter&&) = delete; \
	UPCGAssetExporter(const UPCGAssetExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAssetExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAssetExporter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAssetExporter) \
	PCG_API virtual ~UPCGAssetExporter();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_37_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAssetExporter;

// ********** End Class UPCGAssetExporter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
