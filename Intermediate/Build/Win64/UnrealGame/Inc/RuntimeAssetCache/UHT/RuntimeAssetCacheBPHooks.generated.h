// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAssetCacheBPHooks.h"

#ifdef RUNTIMEASSETCACHE_RuntimeAssetCacheBPHooks_generated_h
#error "RuntimeAssetCacheBPHooks.generated.h already included, missing '#pragma once' in RuntimeAssetCacheBPHooks.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCacheBPHooks_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IRuntimeAssetCacheBuilder;
struct FVoidPtrParam;

// ********** Begin Class URuntimeAssetCacheBPHooks ************************************************
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPollAsynchronousCompletion); \
	DECLARE_FUNCTION(execGetAsynchronousResults); \
	DECLARE_FUNCTION(execWaitAsynchronousCompletion); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execGetCacheSize); \
	DECLARE_FUNCTION(execGetAsynchronous); \
	DECLARE_FUNCTION(execGetSynchronous);


struct Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics;
RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks_NoRegister();

#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBPHooks(); \
	friend struct ::Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMEASSETCACHE_API UClass* ::Z_Construct_UClass_URuntimeAssetCacheBPHooks_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeAssetCacheBPHooks, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), Z_Construct_UClass_URuntimeAssetCacheBPHooks_NoRegister) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBPHooks)


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBPHooks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeAssetCacheBPHooks(URuntimeAssetCacheBPHooks&&) = delete; \
	URuntimeAssetCacheBPHooks(const URuntimeAssetCacheBPHooks&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBPHooks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBPHooks); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBPHooks) \
	NO_API virtual ~URuntimeAssetCacheBPHooks();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_22_PROLOG
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeAssetCacheBPHooks;

// ********** End Class URuntimeAssetCacheBPHooks **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
