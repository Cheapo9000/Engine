// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGLoadAlembic.h"

#ifdef PCGEXTERNALDATAINTEROPEDITOR_PCGLoadAlembic_generated_h
#error "PCGLoadAlembic.generated.h already included, missing '#pragma once' in PCGLoadAlembic.h"
#endif
#define PCGEXTERNALDATAINTEROPEDITOR_PCGLoadAlembic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EPCGLoadAlembicStandardSetup : uint8;
struct FPCGAssetExporterParameters;
struct FPCGDataCollection;
struct FPCGLoadAlembicBPData;

// ********** Begin ScriptStruct FPCGLoadAlembicBPData *********************************************
struct Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics;
#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGLoadAlembicBPData;
// ********** End ScriptStruct FPCGLoadAlembicBPData ***********************************************

// ********** Begin Class UPCGAlembicToPCGAssetExporter ********************************************
struct Z_Construct_UClass_UPCGAlembicToPCGAssetExporter_Statics;
PCGEXTERNALDATAINTEROPEDITOR_API UClass* Z_Construct_UClass_UPCGAlembicToPCGAssetExporter_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAlembicToPCGAssetExporter(); \
	friend struct ::Z_Construct_UClass_UPCGAlembicToPCGAssetExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTERNALDATAINTEROPEDITOR_API UClass* ::Z_Construct_UClass_UPCGAlembicToPCGAssetExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAlembicToPCGAssetExporter, UPCGAssetExporter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExternalDataInteropEditor"), Z_Construct_UClass_UPCGAlembicToPCGAssetExporter_NoRegister) \
	DECLARE_SERIALIZER(UPCGAlembicToPCGAssetExporter)


#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGAlembicToPCGAssetExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAlembicToPCGAssetExporter(UPCGAlembicToPCGAssetExporter&&) = delete; \
	UPCGAlembicToPCGAssetExporter(const UPCGAlembicToPCGAssetExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGAlembicToPCGAssetExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAlembicToPCGAssetExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAlembicToPCGAssetExporter) \
	NO_API virtual ~UPCGAlembicToPCGAssetExporter();


#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_32_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAlembicToPCGAssetExporter;

// ********** End Class UPCGAlembicToPCGAssetExporter **********************************************

// ********** Begin Class UPCGLoadAlembicFunctionLibrary *******************************************
#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupFromStandard); \
	DECLARE_FUNCTION(execLoadAlembicFileToPCG); \
	DECLARE_FUNCTION(execExportAlembicFileToPCG);


struct Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics;
PCGEXTERNALDATAINTEROPEDITOR_API UClass* Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLoadAlembicFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTERNALDATAINTEROPEDITOR_API UClass* ::Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLoadAlembicFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExternalDataInteropEditor"), Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPCGLoadAlembicFunctionLibrary)


#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGLoadAlembicFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLoadAlembicFunctionLibrary(UPCGLoadAlembicFunctionLibrary&&) = delete; \
	UPCGLoadAlembicFunctionLibrary(const UPCGLoadAlembicFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGLoadAlembicFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLoadAlembicFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLoadAlembicFunctionLibrary) \
	NO_API virtual ~UPCGLoadAlembicFunctionLibrary();


#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_50_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLoadAlembicFunctionLibrary;

// ********** End Class UPCGLoadAlembicFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
