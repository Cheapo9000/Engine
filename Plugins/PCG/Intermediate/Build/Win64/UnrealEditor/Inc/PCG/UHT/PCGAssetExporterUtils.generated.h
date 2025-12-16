// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGAssetExporterUtils.h"

#ifdef PCG_PCGAssetExporterUtils_generated_h
#error "PCGAssetExporterUtils.generated.h already included, missing '#pragma once' in PCGAssetExporterUtils.h"
#endif
#define PCG_PCGAssetExporterUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPackage;
class UPCGAssetExporter;
struct FAssetData;
struct FPCGAssetExporterParameters;

// ********** Begin Class UPCGAssetExporterUtils ***************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAssets); \
	DECLARE_FUNCTION(execCreateAsset);


struct Z_Construct_UClass_UPCGAssetExporterUtils_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAssetExporterUtils_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAssetExporterUtils(); \
	friend struct ::Z_Construct_UClass_UPCGAssetExporterUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAssetExporterUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAssetExporterUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAssetExporterUtils_NoRegister) \
	DECLARE_SERIALIZER(UPCGAssetExporterUtils)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGAssetExporterUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAssetExporterUtils(UPCGAssetExporterUtils&&) = delete; \
	UPCGAssetExporterUtils(const UPCGAssetExporterUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAssetExporterUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAssetExporterUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAssetExporterUtils) \
	PCG_API virtual ~UPCGAssetExporterUtils();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_18_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAssetExporterUtils;

// ********** End Class UPCGAssetExporterUtils *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGAssetExporterUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
