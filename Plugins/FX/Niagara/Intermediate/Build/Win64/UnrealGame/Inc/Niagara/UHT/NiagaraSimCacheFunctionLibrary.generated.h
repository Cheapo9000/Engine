// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCacheFunctionLibrary.h"

#ifdef NIAGARA_NiagaraSimCacheFunctionLibrary_generated_h
#error "NiagaraSimCacheFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraSimCacheFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraSimCacheFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncNiagaraCaptureSimCache;
class UNiagaraComponent;
class UNiagaraSimCache;
class UObject;
struct FNiagaraSimCacheCaptureParameters;
struct FNiagaraSimCacheCreateParameters;

// ********** Begin Delegate FOnCaptureComplete ****************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_19_DELEGATE \
static NIAGARA_API void FOnCaptureComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureComplete, bool bSuccess);


// ********** End Delegate FOnCaptureComplete ******************************************************

// ********** Begin Class UAsyncNiagaraCaptureSimCache *********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCaptureNiagaraSimCache); \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheUntilComplete); \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheMultiFrame);


struct Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncNiagaraCaptureSimCache(); \
	friend struct ::Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncNiagaraCaptureSimCache, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister) \
	DECLARE_SERIALIZER(UAsyncNiagaraCaptureSimCache)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncNiagaraCaptureSimCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncNiagaraCaptureSimCache(UAsyncNiagaraCaptureSimCache&&) = delete; \
	UAsyncNiagaraCaptureSimCache(const UAsyncNiagaraCaptureSimCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncNiagaraCaptureSimCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncNiagaraCaptureSimCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncNiagaraCaptureSimCache) \
	NO_API virtual ~UAsyncNiagaraCaptureSimCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncNiagaraCaptureSimCache;

// ********** End Class UAsyncNiagaraCaptureSimCache ***********************************************

// ********** Begin Class UNiagaraSimCacheFunctionLibrary ******************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_72_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateNiagaraSimCache); \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheImmediate);


struct Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSimCacheFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSimCacheFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSimCacheFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimCacheFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCacheFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimCacheFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCacheFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSimCacheFunctionLibrary(UNiagaraSimCacheFunctionLibrary&&) = delete; \
	UNiagaraSimCacheFunctionLibrary(const UNiagaraSimCacheFunctionLibrary&) = delete; \
	NIAGARA_API virtual ~UNiagaraSimCacheFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_69_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_72_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_72_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSimCacheFunctionLibrary;

// ********** End Class UNiagaraSimCacheFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
