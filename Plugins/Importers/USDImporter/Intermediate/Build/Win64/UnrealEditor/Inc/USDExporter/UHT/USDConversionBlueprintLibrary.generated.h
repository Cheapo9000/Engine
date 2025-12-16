// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDConversionBlueprintLibrary.h"

#ifdef USDEXPORTER_USDConversionBlueprintLibrary_generated_h
#error "USDConversionBlueprintLibrary.generated.h already included, missing '#pragma once' in USDConversionBlueprintLibrary.h"
#endif
#define USDEXPORTER_USDConversionBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AInstancedFoliageActor;
class UFoliageType;
class ULevel;
class ULevelExporterUSDOptions;
class UObject;
class USceneComponent;
class UUsdAssetUserData;
class UWorld;
enum class EReferencerTypeHandling : uint8;
enum class EUsdDuplicateType : uint8;
struct FAnalyticsEventAttr;
struct FMatrix2D;
struct FMatrix3D;
struct FUsdMetadataValue;

// ********** Begin Class UUsdConversionBlueprintLibrary *******************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnstringifyAsInt4Array); \
	DECLARE_FUNCTION(execUnstringifyAsHalf4Array); \
	DECLARE_FUNCTION(execUnstringifyAsFloat4Array); \
	DECLARE_FUNCTION(execUnstringifyAsDouble4Array); \
	DECLARE_FUNCTION(execUnstringifyAsInt3Array); \
	DECLARE_FUNCTION(execUnstringifyAsHalf3Array); \
	DECLARE_FUNCTION(execUnstringifyAsFloat3Array); \
	DECLARE_FUNCTION(execUnstringifyAsDouble3Array); \
	DECLARE_FUNCTION(execUnstringifyAsInt2Array); \
	DECLARE_FUNCTION(execUnstringifyAsHalf2Array); \
	DECLARE_FUNCTION(execUnstringifyAsFloat2Array); \
	DECLARE_FUNCTION(execUnstringifyAsDouble2Array); \
	DECLARE_FUNCTION(execUnstringifyAsQuathArray); \
	DECLARE_FUNCTION(execUnstringifyAsQuatfArray); \
	DECLARE_FUNCTION(execUnstringifyAsQuatdArray); \
	DECLARE_FUNCTION(execUnstringifyAsMatrix4dArray); \
	DECLARE_FUNCTION(execUnstringifyAsMatrix3dArray); \
	DECLARE_FUNCTION(execUnstringifyAsMatrix2dArray); \
	DECLARE_FUNCTION(execUnstringifyAsListOpTokens); \
	DECLARE_FUNCTION(execUnstringifyAsAssetPathArray); \
	DECLARE_FUNCTION(execUnstringifyAsTokenArray); \
	DECLARE_FUNCTION(execUnstringifyAsStringArray); \
	DECLARE_FUNCTION(execUnstringifyAsTimeCodeArray); \
	DECLARE_FUNCTION(execUnstringifyAsDoubleArray); \
	DECLARE_FUNCTION(execUnstringifyAsFloatArray); \
	DECLARE_FUNCTION(execUnstringifyAsHalfArray); \
	DECLARE_FUNCTION(execUnstringifyAsUInt64Array); \
	DECLARE_FUNCTION(execUnstringifyAsInt64Array); \
	DECLARE_FUNCTION(execUnstringifyAsUIntArray); \
	DECLARE_FUNCTION(execUnstringifyAsIntArray); \
	DECLARE_FUNCTION(execUnstringifyAsUCharArray); \
	DECLARE_FUNCTION(execUnstringifyAsBoolArray); \
	DECLARE_FUNCTION(execUnstringifyAsInt4); \
	DECLARE_FUNCTION(execUnstringifyAsHalf4); \
	DECLARE_FUNCTION(execUnstringifyAsFloat4); \
	DECLARE_FUNCTION(execUnstringifyAsDouble4); \
	DECLARE_FUNCTION(execUnstringifyAsInt3); \
	DECLARE_FUNCTION(execUnstringifyAsHalf3); \
	DECLARE_FUNCTION(execUnstringifyAsFloat3); \
	DECLARE_FUNCTION(execUnstringifyAsDouble3); \
	DECLARE_FUNCTION(execUnstringifyAsInt2); \
	DECLARE_FUNCTION(execUnstringifyAsHalf2); \
	DECLARE_FUNCTION(execUnstringifyAsFloat2); \
	DECLARE_FUNCTION(execUnstringifyAsDouble2); \
	DECLARE_FUNCTION(execUnstringifyAsQuath); \
	DECLARE_FUNCTION(execUnstringifyAsQuatf); \
	DECLARE_FUNCTION(execUnstringifyAsQuatd); \
	DECLARE_FUNCTION(execUnstringifyAsMatrix4d); \
	DECLARE_FUNCTION(execUnstringifyAsMatrix3d); \
	DECLARE_FUNCTION(execUnstringifyAsMatrix2d); \
	DECLARE_FUNCTION(execUnstringifyAsAssetPath); \
	DECLARE_FUNCTION(execUnstringifyAsToken); \
	DECLARE_FUNCTION(execUnstringifyAsString); \
	DECLARE_FUNCTION(execUnstringifyAsTimeCode); \
	DECLARE_FUNCTION(execUnstringifyAsDouble); \
	DECLARE_FUNCTION(execUnstringifyAsFloat); \
	DECLARE_FUNCTION(execUnstringifyAsHalf); \
	DECLARE_FUNCTION(execUnstringifyAsUInt64); \
	DECLARE_FUNCTION(execUnstringifyAsInt64); \
	DECLARE_FUNCTION(execUnstringifyAsUInt); \
	DECLARE_FUNCTION(execUnstringifyAsInt); \
	DECLARE_FUNCTION(execUnstringifyAsUChar); \
	DECLARE_FUNCTION(execUnstringifyAsBool); \
	DECLARE_FUNCTION(execStringifyAsInt4Array); \
	DECLARE_FUNCTION(execStringifyAsHalf4Array); \
	DECLARE_FUNCTION(execStringifyAsFloat4Array); \
	DECLARE_FUNCTION(execStringifyAsDouble4Array); \
	DECLARE_FUNCTION(execStringifyAsInt3Array); \
	DECLARE_FUNCTION(execStringifyAsHalf3Array); \
	DECLARE_FUNCTION(execStringifyAsFloat3Array); \
	DECLARE_FUNCTION(execStringifyAsDouble3Array); \
	DECLARE_FUNCTION(execStringifyAsInt2Array); \
	DECLARE_FUNCTION(execStringifyAsHalf2Array); \
	DECLARE_FUNCTION(execStringifyAsFloat2Array); \
	DECLARE_FUNCTION(execStringifyAsDouble2Array); \
	DECLARE_FUNCTION(execStringifyAsQuathArray); \
	DECLARE_FUNCTION(execStringifyAsQuatfArray); \
	DECLARE_FUNCTION(execStringifyAsQuatdArray); \
	DECLARE_FUNCTION(execStringifyAsMatrix4dArray); \
	DECLARE_FUNCTION(execStringifyAsMatrix3dArray); \
	DECLARE_FUNCTION(execStringifyAsMatrix2dArray); \
	DECLARE_FUNCTION(execStringifyAsListOpTokens); \
	DECLARE_FUNCTION(execStringifyAsAssetPathArray); \
	DECLARE_FUNCTION(execStringifyAsTokenArray); \
	DECLARE_FUNCTION(execStringifyAsStringArray); \
	DECLARE_FUNCTION(execStringifyAsTimeCodeArray); \
	DECLARE_FUNCTION(execStringifyAsDoubleArray); \
	DECLARE_FUNCTION(execStringifyAsFloatArray); \
	DECLARE_FUNCTION(execStringifyAsHalfArray); \
	DECLARE_FUNCTION(execStringifyAsUInt64Array); \
	DECLARE_FUNCTION(execStringifyAsInt64Array); \
	DECLARE_FUNCTION(execStringifyAsUIntArray); \
	DECLARE_FUNCTION(execStringifyAsIntArray); \
	DECLARE_FUNCTION(execStringifyAsUCharArray); \
	DECLARE_FUNCTION(execStringifyAsBoolArray); \
	DECLARE_FUNCTION(execStringifyAsInt4); \
	DECLARE_FUNCTION(execStringifyAsHalf4); \
	DECLARE_FUNCTION(execStringifyAsFloat4); \
	DECLARE_FUNCTION(execStringifyAsDouble4); \
	DECLARE_FUNCTION(execStringifyAsInt3); \
	DECLARE_FUNCTION(execStringifyAsHalf3); \
	DECLARE_FUNCTION(execStringifyAsFloat3); \
	DECLARE_FUNCTION(execStringifyAsDouble3); \
	DECLARE_FUNCTION(execStringifyAsInt2); \
	DECLARE_FUNCTION(execStringifyAsHalf2); \
	DECLARE_FUNCTION(execStringifyAsFloat2); \
	DECLARE_FUNCTION(execStringifyAsDouble2); \
	DECLARE_FUNCTION(execStringifyAsQuath); \
	DECLARE_FUNCTION(execStringifyAsQuatf); \
	DECLARE_FUNCTION(execStringifyAsQuatd); \
	DECLARE_FUNCTION(execStringifyAsMatrix4d); \
	DECLARE_FUNCTION(execStringifyAsMatrix3d); \
	DECLARE_FUNCTION(execStringifyAsMatrix2d); \
	DECLARE_FUNCTION(execStringifyAsAssetPath); \
	DECLARE_FUNCTION(execStringifyAsToken); \
	DECLARE_FUNCTION(execStringifyAsString); \
	DECLARE_FUNCTION(execStringifyAsTimeCode); \
	DECLARE_FUNCTION(execStringifyAsDouble); \
	DECLARE_FUNCTION(execStringifyAsFloat); \
	DECLARE_FUNCTION(execStringifyAsHalf); \
	DECLARE_FUNCTION(execStringifyAsUInt64); \
	DECLARE_FUNCTION(execStringifyAsInt64); \
	DECLARE_FUNCTION(execStringifyAsUInt); \
	DECLARE_FUNCTION(execStringifyAsInt); \
	DECLARE_FUNCTION(execStringifyAsUChar); \
	DECLARE_FUNCTION(execStringifyAsBool); \
	DECLARE_FUNCTION(execGetMetadataField); \
	DECLARE_FUNCTION(execHasMetadataField); \
	DECLARE_FUNCTION(execClearMetadataField); \
	DECLARE_FUNCTION(execSetMetadataField); \
	DECLARE_FUNCTION(execSetUsdAssetUserData); \
	DECLARE_FUNCTION(execGetUsdAssetUserData); \
	DECLARE_FUNCTION(execDuplicatePrims); \
	DECLARE_FUNCTION(execClearPrimClipboard); \
	DECLARE_FUNCTION(execCanPastePrims); \
	DECLARE_FUNCTION(execPastePrims); \
	DECLARE_FUNCTION(execCopyPrims); \
	DECLARE_FUNCTION(execCutPrims); \
	DECLARE_FUNCTION(execRemoveAllPrimSpecs); \
	DECLARE_FUNCTION(execGetUniqueFilePathForExport); \
	DECLARE_FUNCTION(execEndUniquePathScope); \
	DECLARE_FUNCTION(execBeginUniquePathScope); \
	DECLARE_FUNCTION(execResumeAnalyticsEvents); \
	DECLARE_FUNCTION(execBlockAnalyticsEvents); \
	DECLARE_FUNCTION(execSendAnalytics); \
	DECLARE_FUNCTION(execGetAnalyticsAttributes); \
	DECLARE_FUNCTION(execGetInstanceTransforms); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetUsedFoliageTypes); \
	DECLARE_FUNCTION(execGetInstancedFoliageActorForLevel); \
	DECLARE_FUNCTION(execGetSchemaNameForComponent); \
	DECLARE_FUNCTION(execGetPrimPathForObject); \
	DECLARE_FUNCTION(execAddPayload); \
	DECLARE_FUNCTION(execAddReference); \
	DECLARE_FUNCTION(execInsertSubLayer); \
	DECLARE_FUNCTION(execMakePathRelativeToLayer); \
	DECLARE_FUNCTION(execCanExportToLayer); \
	DECLARE_FUNCTION(execGenerateObjectVersionString); \
	DECLARE_FUNCTION(execGetActorsToConvert); \
	DECLARE_FUNCTION(execStreamOutLevels); \
	DECLARE_FUNCTION(execGetVisibleInEditorLevelNames); \
	DECLARE_FUNCTION(execGetLoadedLevelNames); \
	DECLARE_FUNCTION(execReapplySequencerAnimations); \
	DECLARE_FUNCTION(execRevertSequencerAnimations); \
	DECLARE_FUNCTION(execStreamInRequiredLevels); \
	DECLARE_FUNCTION(execGetNumLevelsToExport);


struct Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UUsdConversionBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdConversionBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UUsdConversionBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdConversionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UUsdConversionBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUsdConversionBlueprintLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDEXPORTER_API UUsdConversionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdConversionBlueprintLibrary(UUsdConversionBlueprintLibrary&&) = delete; \
	UUsdConversionBlueprintLibrary(const UUsdConversionBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDEXPORTER_API, UUsdConversionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdConversionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdConversionBlueprintLibrary) \
	USDEXPORTER_API virtual ~UUsdConversionBlueprintLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_25_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdConversionBlueprintLibrary;

// ********** End Class UUsdConversionBlueprintLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
