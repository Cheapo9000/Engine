// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTagsSubsystem.h"

#ifdef ASSETTAGS_AssetTagsSubsystem_generated_h
#error "AssetTagsSubsystem.generated.h already included, missing '#pragma once' in AssetTagsSubsystem.h"
#endif
#define ASSETTAGS_AssetTagsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ECollectionScriptingShareType : uint8;
struct FAssetData;
struct FSoftObjectPath;

// ********** Begin Class UAssetTagsSubsystem ******************************************************
#define FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetPtr); \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetData); \
	DECLARE_FUNCTION(execGetCollectionsContainingAsset); \
	DECLARE_FUNCTION(execK2_GetCollectionsContainingAsset); \
	DECLARE_FUNCTION(execGetAssetsInCollection); \
	DECLARE_FUNCTION(execGetCollections); \
	DECLARE_FUNCTION(execCollectionExists);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRemoveAssetPtrsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDatasFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetsFromCollection); \
	DECLARE_FUNCTION(execK2_RemoveAssetsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetPtrFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDataFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetFromCollection); \
	DECLARE_FUNCTION(execK2_RemoveAssetFromCollection); \
	DECLARE_FUNCTION(execAddAssetPtrsToCollection); \
	DECLARE_FUNCTION(execAddAssetDatasToCollection); \
	DECLARE_FUNCTION(execAddAssetsToCollection); \
	DECLARE_FUNCTION(execK2_AddAssetsToCollection); \
	DECLARE_FUNCTION(execAddAssetPtrToCollection); \
	DECLARE_FUNCTION(execAddAssetDataToCollection); \
	DECLARE_FUNCTION(execAddAssetToCollection); \
	DECLARE_FUNCTION(execK2_AddAssetToCollection); \
	DECLARE_FUNCTION(execEmptyCollection); \
	DECLARE_FUNCTION(execReparentCollection); \
	DECLARE_FUNCTION(execRenameCollection); \
	DECLARE_FUNCTION(execDestroyCollection); \
	DECLARE_FUNCTION(execCreateCollection);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAssetTagsSubsystem_Statics;
ASSETTAGS_API UClass* Z_Construct_UClass_UAssetTagsSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetTagsSubsystem(); \
	friend struct ::Z_Construct_UClass_UAssetTagsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETTAGS_API UClass* ::Z_Construct_UClass_UAssetTagsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetTagsSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetTags"), Z_Construct_UClass_UAssetTagsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAssetTagsSubsystem)


#define FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETTAGS_API UAssetTagsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetTagsSubsystem(UAssetTagsSubsystem&&) = delete; \
	UAssetTagsSubsystem(const UAssetTagsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETTAGS_API, UAssetTagsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTagsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetTagsSubsystem) \
	ASSETTAGS_API virtual ~UAssetTagsSubsystem();


#define FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetTagsSubsystem;

// ********** End Class UAssetTagsSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
