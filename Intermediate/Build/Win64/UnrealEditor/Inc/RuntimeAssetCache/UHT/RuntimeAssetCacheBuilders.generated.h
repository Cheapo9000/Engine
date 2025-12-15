// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAssetCacheBuilders.h"

#ifdef RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h
#error "RuntimeAssetCacheBuilders.generated.h already included, missing '#pragma once' in RuntimeAssetCacheBuilders.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URuntimeAssetCacheBuilder_ObjectBase;
struct FVoidPtrParam;

// ********** Begin Delegate FOnAssetCacheComplete *************************************************
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_19_DELEGATE \
RUNTIMEASSETCACHE_API void FOnAssetCacheComplete_DelegateWrapper(const FScriptDelegate& OnAssetCacheComplete, URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder, bool Success);


// ********** End Delegate FOnAssetCacheComplete ***************************************************

// ********** Begin Class URuntimeAssetCacheBuilder_ObjectBase *************************************
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveNewAssetToCache); \
	DECLARE_FUNCTION(execOnAssetCacheMiss); \
	DECLARE_FUNCTION(execGetFromCacheAsyncComplete); \
	DECLARE_FUNCTION(execGetFromCacheAsync);


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics;
RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister();

#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase(); \
	friend struct ::Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMEASSETCACHE_API UClass* ::Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeAssetCacheBuilder_ObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder_ObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeAssetCacheBuilder_ObjectBase*>(this); }


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeAssetCacheBuilder_ObjectBase(URuntimeAssetCacheBuilder_ObjectBase&&) = delete; \
	URuntimeAssetCacheBuilder_ObjectBase(const URuntimeAssetCacheBuilder_ObjectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder_ObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder_ObjectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder_ObjectBase) \
	NO_API virtual ~URuntimeAssetCacheBuilder_ObjectBase();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_23_PROLOG
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeAssetCacheBuilder_ObjectBase;

// ********** End Class URuntimeAssetCacheBuilder_ObjectBase ***************************************

// ********** Begin Class UExampleTextureCacheBuilder **********************************************
struct Z_Construct_UClass_UExampleTextureCacheBuilder_Statics;
RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_UExampleTextureCacheBuilder_NoRegister();

#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExampleTextureCacheBuilder(); \
	friend struct ::Z_Construct_UClass_UExampleTextureCacheBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMEASSETCACHE_API UClass* ::Z_Construct_UClass_UExampleTextureCacheBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UExampleTextureCacheBuilder, URuntimeAssetCacheBuilder_ObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), Z_Construct_UClass_UExampleTextureCacheBuilder_NoRegister) \
	DECLARE_SERIALIZER(UExampleTextureCacheBuilder)


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExampleTextureCacheBuilder(UExampleTextureCacheBuilder&&) = delete; \
	UExampleTextureCacheBuilder(const UExampleTextureCacheBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleTextureCacheBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleTextureCacheBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleTextureCacheBuilder) \
	NO_API virtual ~UExampleTextureCacheBuilder();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_170_PROLOG
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExampleTextureCacheBuilder;

// ********** End Class UExampleTextureCacheBuilder ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
