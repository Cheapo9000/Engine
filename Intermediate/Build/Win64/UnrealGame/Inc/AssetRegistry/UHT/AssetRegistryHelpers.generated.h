// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetRegistry/AssetRegistryHelpers.h"

#ifdef ASSETREGISTRY_AssetRegistryHelpers_generated_h
#error "AssetRegistryHelpers.generated.h already included, missing '#pragma once' in AssetRegistryHelpers.h"
#endif
#define ASSETREGISTRY_AssetRegistryHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAssetRegistry;
class UClass;
class UObject;
enum class EAssetRegistrySortOrder : uint8;
struct FARFilter;
struct FAssetData;
struct FSoftObjectPath;
struct FTagAndValue;
struct FTopLevelAssetPath;

// ********** Begin ScriptStruct FTagAndValue ******************************************************
struct Z_Construct_UScriptStruct_FTagAndValue_Statics;
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTagAndValue_Statics; \
	ASSETREGISTRY_API static class UScriptStruct* StaticStruct();


struct FTagAndValue;
// ********** End ScriptStruct FTagAndValue ********************************************************

// ********** Begin Delegate FSortingPredicate *****************************************************
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_152_DELEGATE \
static ASSETREGISTRY_API bool FSortingPredicate_DelegateWrapper(const FScriptDelegate& SortingPredicate, FAssetData const& Left, FAssetData const& Right);


// ********** End Delegate FSortingPredicate *******************************************************

// ********** Begin Class UAssetRegistryHelpers ****************************************************
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortByAssetName); \
	DECLARE_FUNCTION(execSortByPredicate); \
	DECLARE_FUNCTION(execFindAssetNativeClass); \
	DECLARE_FUNCTION(execGetDerivedClassAssetData); \
	DECLARE_FUNCTION(execGetBlueprintAssets); \
	DECLARE_FUNCTION(execSetFilterTagsAndValues); \
	DECLARE_FUNCTION(execGetTagValue); \
	DECLARE_FUNCTION(execGetExportTextName); \
	DECLARE_FUNCTION(execIsAssetLoaded); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execGetClass); \
	DECLARE_FUNCTION(execToSoftObjectPath); \
	DECLARE_FUNCTION(execGetFullName); \
	DECLARE_FUNCTION(execIsRedirector); \
	DECLARE_FUNCTION(execIsUAsset); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execCreateAssetData); \
	DECLARE_FUNCTION(execGetAssetRegistry);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execAssetHasEditorOnlyData); \
	DECLARE_FUNCTION(execIsAssetCooked);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAssetRegistryHelpers_Statics;
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryHelpers_NoRegister();

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetRegistryHelpers(); \
	friend struct ::Z_Construct_UClass_UAssetRegistryHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETREGISTRY_API UClass* ::Z_Construct_UClass_UAssetRegistryHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetRegistryHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), Z_Construct_UClass_UAssetRegistryHelpers_NoRegister) \
	DECLARE_SERIALIZER(UAssetRegistryHelpers)


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetRegistryHelpers(UAssetRegistryHelpers&&) = delete; \
	UAssetRegistryHelpers(const UAssetRegistryHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryHelpers) \
	NO_API virtual ~UAssetRegistryHelpers();


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_59_PROLOG
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetRegistryHelpers;

// ********** End Class UAssetRegistryHelpers ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h

// ********** Begin Enum EAssetRegistrySortOrder ***************************************************
#define FOREACH_ENUM_EASSETREGISTRYSORTORDER(op) \
	op(EAssetRegistrySortOrder::Ascending) \
	op(EAssetRegistrySortOrder::Descending) 

enum class EAssetRegistrySortOrder : uint8;
template<> struct TIsUEnumClass<EAssetRegistrySortOrder> { enum { Value = true }; };
template<> ASSETREGISTRY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetRegistrySortOrder>();
// ********** End Enum EAssetRegistrySortOrder *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
