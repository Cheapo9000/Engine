// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetRegistry/IAssetRegistry.h"

#ifdef ASSETREGISTRY_IAssetRegistry_generated_h
#error "IAssetRegistry.generated.h already included, missing '#pragma once' in IAssetRegistry.h"
#endif
#define ASSETREGISTRY_IAssetRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FARFilter;
struct FAssetData;
struct FAssetRegistryDependencyOptions;
struct FSoftObjectPath;
struct FTopLevelAssetPath;

// ********** Begin ScriptStruct FAssetRegistryDependencyOptions ***********************************
struct Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics;
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics; \
	ASSETREGISTRY_API static class UScriptStruct* StaticStruct();


struct FAssetRegistryDependencyOptions;
// ********** End ScriptStruct FAssetRegistryDependencyOptions *************************************

// ********** Begin Interface UAssetRegistry *******************************************************
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsLoadingAssets); \
	DECLARE_FUNCTION(execScanModifiedAssetFiles); \
	DECLARE_FUNCTION(execPrioritizeSearchPath); \
	DECLARE_FUNCTION(execWaitForPackage); \
	DECLARE_FUNCTION(execWaitForCompletion); \
	DECLARE_FUNCTION(execIsSearchAsync); \
	DECLARE_FUNCTION(execIsSearchAllAssets); \
	DECLARE_FUNCTION(execSearchAllAssets); \
	DECLARE_FUNCTION(execScanFilesSynchronous); \
	DECLARE_FUNCTION(execScanPathsSynchronous); \
	DECLARE_FUNCTION(execUseFilterToExcludeAssets); \
	DECLARE_FUNCTION(execRunAssetsThroughFilter); \
	DECLARE_FUNCTION(execGetSubPaths); \
	DECLARE_FUNCTION(execGetAllCachedPaths); \
	DECLARE_FUNCTION(execGetDerivedClassNames); \
	DECLARE_FUNCTION(execGetAncestorClassNames); \
	DECLARE_FUNCTION(execK2_GetReferencers); \
	DECLARE_FUNCTION(execK2_GetDependencies); \
	DECLARE_FUNCTION(execGetAllAssets); \
	DECLARE_FUNCTION(execK2_GetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetInMemoryAssets); \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execGetAssetsByClass); \
	DECLARE_FUNCTION(execGetAssetsByPaths); \
	DECLARE_FUNCTION(execGetAssetsByPath); \
	DECLARE_FUNCTION(execGetAssetsByPackageName); \
	DECLARE_FUNCTION(execHasAssets);


struct Z_Construct_UClass_UAssetRegistry_Statics;
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETREGISTRY_API UAssetRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREGISTRY_API, UAssetRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistry); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetRegistry(UAssetRegistry&&) = delete; \
	UAssetRegistry(const UAssetRegistry&) = delete; \
	virtual ~UAssetRegistry() = default;


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetRegistry(); \
	friend struct ::Z_Construct_UClass_UAssetRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETREGISTRY_API UClass* ::Z_Construct_UClass_UAssetRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetRegistry, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AssetRegistry"), Z_Construct_UClass_UAssetRegistry_NoRegister) \
	DECLARE_SERIALIZER(UAssetRegistry)


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_INCLASS_IINTERFACE \
protected: \
	virtual ~IAssetRegistry() {} \
public: \
	typedef UAssetRegistry UClassType; \
	typedef IAssetRegistry ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_233_PROLOG
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_264_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_236_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetRegistry;

// ********** End Interface UAssetRegistry *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
