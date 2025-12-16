// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequence/VCamTakesMetaDataMigration.h"

#ifdef VIRTUALCAMERA_VCamTakesMetaDataMigration_generated_h
#error "VCamTakesMetaDataMigration.generated.h already included, missing '#pragma once' in VCamTakesMetaDataMigration.h"
#endif
#define VIRTUALCAMERA_VCamTakesMetaDataMigration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
struct FAssetData;

// ********** Begin Class UVCamTakesMetaDataMigration **********************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSLOW_MigrateAllVCamTakesMetaDataInProject); \
	DECLARE_FUNCTION(execGetAutoMigrateAccessedLevelSequencesCVar); \
	DECLARE_FUNCTION(execMigrateVCamTakesMetaData); \
	DECLARE_FUNCTION(execNeedsToMigrateVCamMetaDataByAssetData); \
	DECLARE_FUNCTION(execNeedsToMigrateVCamMetaData); \
	DECLARE_FUNCTION(execSetFavoriteLevel); \
	DECLARE_FUNCTION(execSetIsFlagged); \
	DECLARE_FUNCTION(execSetIsNoGood); \
	DECLARE_FUNCTION(execGetFavoriteLevelByAssetData); \
	DECLARE_FUNCTION(execGetIsFlaggedByAssetData); \
	DECLARE_FUNCTION(execGetIsNoGoodByAssetData); \
	DECLARE_FUNCTION(execGetFavoriteLevel); \
	DECLARE_FUNCTION(execGetIsFlagged); \
	DECLARE_FUNCTION(execGetIsNoGood);


struct Z_Construct_UClass_UVCamTakesMetaDataMigration_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVCamTakesMetaDataMigration_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamTakesMetaDataMigration(); \
	friend struct ::Z_Construct_UClass_UVCamTakesMetaDataMigration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UVCamTakesMetaDataMigration_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamTakesMetaDataMigration, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UVCamTakesMetaDataMigration_NoRegister) \
	DECLARE_SERIALIZER(UVCamTakesMetaDataMigration)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamTakesMetaDataMigration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamTakesMetaDataMigration(UVCamTakesMetaDataMigration&&) = delete; \
	UVCamTakesMetaDataMigration(const UVCamTakesMetaDataMigration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamTakesMetaDataMigration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamTakesMetaDataMigration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamTakesMetaDataMigration) \
	NO_API virtual ~UVCamTakesMetaDataMigration();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamTakesMetaDataMigration;

// ********** End Class UVCamTakesMetaDataMigration ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VCamTakesMetaDataMigration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
