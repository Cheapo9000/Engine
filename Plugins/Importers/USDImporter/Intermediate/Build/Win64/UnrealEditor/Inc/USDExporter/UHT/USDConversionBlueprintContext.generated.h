// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDConversionBlueprintContext.h"

#ifdef USDEXPORTER_USDConversionBlueprintContext_generated_h
#error "USDConversionBlueprintContext.generated.h already included, missing '#pragma once' in USDConversionBlueprintContext.h"
#endif
#define USDEXPORTER_USDConversionBlueprintContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInstancedFoliageActor;
class ALandscapeProxy;
class UAudioComponent;
class UCineCameraComponent;
class UDirectionalLightComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UInstancedStaticMeshComponent;
class ULevel;
class ULightComponentBase;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UPointLightComponent;
class URectLightComponent;
class USceneComponent;
class USkyLightComponent;
class USpotLightComponent;
class UUsdAssetUserData;
class UUsdDrawModeComponent;
struct FDirectoryPath;
struct FFilePath;
struct FPropertyEntry;
struct FUsdCombinedPrimMetadata;
struct FUsdUnrealAssetInfo;

// ********** Begin Class UUsdConversionBlueprintContext *******************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPrimMetadata); \
	DECLARE_FUNCTION(execSetPrimMetadataFromUserData); \
	DECLARE_FUNCTION(execSetPrimMetadata); \
	DECLARE_FUNCTION(execGetPrimAssetInfo); \
	DECLARE_FUNCTION(execSetPrimAssetInfo); \
	DECLARE_FUNCTION(execGetUsdStageNumFrames); \
	DECLARE_FUNCTION(execRemoveUnrealSurfaceOutput); \
	DECLARE_FUNCTION(execReplaceUnrealMaterialsWithBaked); \
	DECLARE_FUNCTION(execConvertMaterialOverrides); \
	DECLARE_FUNCTION(execConvertLandscapeProxyActorMaterial); \
	DECLARE_FUNCTION(execConvertLandscapeProxyActorMesh); \
	DECLARE_FUNCTION(execConvertInstancedFoliageActor); \
	DECLARE_FUNCTION(execConvertCineCameraComponent); \
	DECLARE_FUNCTION(execConvertMeshComponent); \
	DECLARE_FUNCTION(execConvertHismComponent); \
	DECLARE_FUNCTION(execConvertIsmComponent); \
	DECLARE_FUNCTION(execConvertSceneComponent); \
	DECLARE_FUNCTION(execConvertAudioComponent); \
	DECLARE_FUNCTION(execConvertDrawModeComponent); \
	DECLARE_FUNCTION(execConvertSpotLightComponent); \
	DECLARE_FUNCTION(execConvertSkyLightComponent); \
	DECLARE_FUNCTION(execConvertPointLightComponent); \
	DECLARE_FUNCTION(execConvertRectLightComponent); \
	DECLARE_FUNCTION(execConvertDirectionalLightComponent); \
	DECLARE_FUNCTION(execConvertLightComponent); \
	DECLARE_FUNCTION(execCleanup); \
	DECLARE_FUNCTION(execGetEditTarget); \
	DECLARE_FUNCTION(execSetEditTarget); \
	DECLARE_FUNCTION(execGetStageRootLayer); \
	DECLARE_FUNCTION(execSetStageRootLayer);


struct Z_Construct_UClass_UUsdConversionBlueprintContext_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UUsdConversionBlueprintContext_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdConversionBlueprintContext(); \
	friend struct ::Z_Construct_UClass_UUsdConversionBlueprintContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UUsdConversionBlueprintContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdConversionBlueprintContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UUsdConversionBlueprintContext_NoRegister) \
	DECLARE_SERIALIZER(UUsdConversionBlueprintContext)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API UUsdConversionBlueprintContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdConversionBlueprintContext(UUsdConversionBlueprintContext&&) = delete; \
	UUsdConversionBlueprintContext(const UUsdConversionBlueprintContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, UUsdConversionBlueprintContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdConversionBlueprintContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdConversionBlueprintContext)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_51_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdConversionBlueprintContext;

// ********** End Class UUsdConversionBlueprintContext *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
