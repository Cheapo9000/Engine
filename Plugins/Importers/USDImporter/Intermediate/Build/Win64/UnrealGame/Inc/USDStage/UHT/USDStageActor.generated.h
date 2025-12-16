// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageActor.h"

#ifdef USDSTAGE_USDStageActor_generated_h
#error "USDStageActor.generated.h already included, missing '#pragma once' in USDStageActor.h"
#endif
#define USDSTAGE_USDStageActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UObject;
class USceneComponent;
class UUsdAssetCache2;
class UUsdAssetCache3;
enum class EGeometryCacheImport : uint8;
enum class EUsdCollisionType : uint8;
enum class EUsdInitialLoadSet : uint8;
enum class EUsdInterpolationType : uint8;
enum class EUsdRootMotionHandling : uint8;
enum class EUsdStageState : uint8;

// ********** Begin Class AUsdStageActor ***********************************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsolatedRootLayer); \
	DECLARE_FUNCTION(execSetIsolatedRootLayer); \
	DECLARE_FUNCTION(execNewStage); \
	DECLARE_FUNCTION(execGetSourcePrimPath); \
	DECLARE_FUNCTION(execGetGeneratedAssets); \
	DECLARE_FUNCTION(execGetGeneratedComponent); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execSetInvertFilters); \
	DECLARE_FUNCTION(execSetBlockedPrefixFilters); \
	DECLARE_FUNCTION(execSetCollectOnComponents); \
	DECLARE_FUNCTION(execSetCollectFromEntireSubtrees); \
	DECLARE_FUNCTION(execSetCollectMetadata); \
	DECLARE_FUNCTION(execSetSubdivisionLevel); \
	DECLARE_FUNCTION(execSetFallbackCollisionType); \
	DECLARE_FUNCTION(execSetRootMotionHandling); \
	DECLARE_FUNCTION(execSetMaterialPurpose); \
	DECLARE_FUNCTION(execSetRenderContext); \
	DECLARE_FUNCTION(execSetNaniteTriangleThreshold); \
	DECLARE_FUNCTION(execSetPurposesToLoad); \
	DECLARE_FUNCTION(execSetCollapseTopLevelPointInstancers); \
	DECLARE_FUNCTION(execSetReuseIdenticalAssets); \
	DECLARE_FUNCTION(execSetShareAssetsForIdenticalPrims); \
	DECLARE_FUNCTION(execSetMergeIdenticalMaterialSlots); \
	DECLARE_FUNCTION(execSetKindsToCollapse); \
	DECLARE_FUNCTION(execSetUsePrimKindsForCollapsing); \
	DECLARE_FUNCTION(execSetGeometryCacheImport); \
	DECLARE_FUNCTION(execSetInterpolationType); \
	DECLARE_FUNCTION(execSetInitialLoadSet); \
	DECLARE_FUNCTION(execSetUsdAssetCache); \
	DECLARE_FUNCTION(execSetAssetCache); \
	DECLARE_FUNCTION(execSetStageState); \
	DECLARE_FUNCTION(execSetRootLayer);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AUsdStageActor, USDSTAGE_API)


struct Z_Construct_UClass_AUsdStageActor_Statics;
USDSTAGE_API UClass* Z_Construct_UClass_AUsdStageActor_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUsdStageActor(); \
	friend struct ::Z_Construct_UClass_AUsdStageActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGE_API UClass* ::Z_Construct_UClass_AUsdStageActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AUsdStageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDStage"), Z_Construct_UClass_AUsdStageActor_NoRegister) \
	DECLARE_SERIALIZER(AUsdStageActor) \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("USDImporter");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUsdStageActor(AUsdStageActor&&) = delete; \
	AUsdStageActor(const AUsdStageActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDSTAGE_API, AUsdStageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUsdStageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUsdStageActor) \
	USDSTAGE_API virtual ~AUsdStageActor();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_50_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUsdStageActor;

// ********** End Class AUsdStageActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h

// ********** Begin Enum EUsdStageState ************************************************************
#define FOREACH_ENUM_EUSDSTAGESTATE(op) \
	op(EUsdStageState::Closed) \
	op(EUsdStageState::Opened) \
	op(EUsdStageState::OpenedAndLoaded) 

enum class EUsdStageState : uint8;
template<> struct TIsUEnumClass<EUsdStageState> { enum { Value = true }; };
template<> USDSTAGE_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdStageState>();
// ********** End Enum EUsdStageState **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
