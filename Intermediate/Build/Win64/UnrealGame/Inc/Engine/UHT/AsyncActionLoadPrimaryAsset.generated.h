// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActionLoadPrimaryAsset.h"

#ifdef ENGINE_AsyncActionLoadPrimaryAsset_generated_h
#error "AsyncActionLoadPrimaryAsset.generated.h already included, missing '#pragma once' in AsyncActionLoadPrimaryAsset.h"
#endif
#define ENGINE_AsyncActionLoadPrimaryAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncActionChangePrimaryAssetBundles;
class UAsyncActionLoadPrimaryAsset;
class UAsyncActionLoadPrimaryAssetClass;
class UAsyncActionLoadPrimaryAssetClassList;
class UAsyncActionLoadPrimaryAssetList;
class UClass;
class UObject;
struct FPrimaryAssetId;

// ********** Begin Class UAsyncActionLoadPrimaryAssetBase *****************************************
struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase(); \
	friend struct ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncActionLoadPrimaryAssetBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetBase)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncActionLoadPrimaryAssetBase(UAsyncActionLoadPrimaryAssetBase&&) = delete; \
	UAsyncActionLoadPrimaryAssetBase(const UAsyncActionLoadPrimaryAssetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetBase) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetBase();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncActionLoadPrimaryAssetBase;

// ********** End Class UAsyncActionLoadPrimaryAssetBase *******************************************

// ********** Begin Delegate FOnPrimaryAssetLoaded *************************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_54_DELEGATE \
ENGINE_API void FOnPrimaryAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetLoaded, UObject* Loaded);


// ********** End Delegate FOnPrimaryAssetLoaded ***************************************************

// ********** Begin Class UAsyncActionLoadPrimaryAsset *********************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAsset);


struct Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAsset(); \
	friend struct ::Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncActionLoadPrimaryAsset, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAsset)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncActionLoadPrimaryAsset(UAsyncActionLoadPrimaryAsset&&) = delete; \
	UAsyncActionLoadPrimaryAsset(const UAsyncActionLoadPrimaryAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAsset) \
	NO_API virtual ~UAsyncActionLoadPrimaryAsset();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncActionLoadPrimaryAsset;

// ********** End Class UAsyncActionLoadPrimaryAsset ***********************************************

// ********** Begin Delegate FOnPrimaryAssetClassLoaded ********************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_79_DELEGATE \
ENGINE_API void FOnPrimaryAssetClassLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassLoaded, TSubclassOf<UObject> Loaded);


// ********** End Delegate FOnPrimaryAssetClassLoaded **********************************************

// ********** Begin Class UAsyncActionLoadPrimaryAssetClass ****************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClass);


struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass(); \
	friend struct ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncActionLoadPrimaryAssetClass, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClass)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncActionLoadPrimaryAssetClass(UAsyncActionLoadPrimaryAssetClass&&) = delete; \
	UAsyncActionLoadPrimaryAssetClass(const UAsyncActionLoadPrimaryAssetClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClass) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetClass();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_81_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncActionLoadPrimaryAssetClass;

// ********** End Class UAsyncActionLoadPrimaryAssetClass ******************************************

// ********** Begin Delegate FOnPrimaryAssetListLoaded *********************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_DELEGATE \
ENGINE_API void FOnPrimaryAssetListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetListLoaded, TArray<UObject*> const& Loaded);


// ********** End Delegate FOnPrimaryAssetListLoaded ***********************************************

// ********** Begin Class UAsyncActionLoadPrimaryAssetList *****************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetList);


struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetList(); \
	friend struct ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncActionLoadPrimaryAssetList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetList)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncActionLoadPrimaryAssetList(UAsyncActionLoadPrimaryAssetList&&) = delete; \
	UAsyncActionLoadPrimaryAssetList(const UAsyncActionLoadPrimaryAssetList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetList) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetList();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_106_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncActionLoadPrimaryAssetList;

// ********** End Class UAsyncActionLoadPrimaryAssetList *******************************************

// ********** Begin Delegate FOnPrimaryAssetClassListLoaded ****************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_129_DELEGATE \
ENGINE_API void FOnPrimaryAssetClassListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassListLoaded, TArray<TSubclassOf<UObject>> const& Loaded);


// ********** End Delegate FOnPrimaryAssetClassListLoaded ******************************************

// ********** Begin Class UAsyncActionLoadPrimaryAssetClassList ************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClassList);


struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList(); \
	friend struct ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncActionLoadPrimaryAssetClassList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClassList)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncActionLoadPrimaryAssetClassList(UAsyncActionLoadPrimaryAssetClassList&&) = delete; \
	UAsyncActionLoadPrimaryAssetClassList(const UAsyncActionLoadPrimaryAssetClassList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClassList) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetClassList();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_131_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncActionLoadPrimaryAssetClassList;

// ********** End Class UAsyncActionLoadPrimaryAssetClassList **************************************

// ********** Begin Delegate FOnPrimaryAssetBundlesChanged *****************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_154_DELEGATE \
ENGINE_API void FOnPrimaryAssetBundlesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetBundlesChanged);


// ********** End Delegate FOnPrimaryAssetBundlesChanged *******************************************

// ********** Begin Class UAsyncActionChangePrimaryAssetBundles ************************************
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForPrimaryAssetList); \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForMatchingPrimaryAssets);


struct Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles(); \
	friend struct ::Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncActionChangePrimaryAssetBundles, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister) \
	DECLARE_SERIALIZER(UAsyncActionChangePrimaryAssetBundles)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncActionChangePrimaryAssetBundles(UAsyncActionChangePrimaryAssetBundles&&) = delete; \
	UAsyncActionChangePrimaryAssetBundles(const UAsyncActionChangePrimaryAssetBundles&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionChangePrimaryAssetBundles) \
	NO_API virtual ~UAsyncActionChangePrimaryAssetBundles();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_156_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncActionChangePrimaryAssetBundles;

// ********** End Class UAsyncActionChangePrimaryAssetBundles **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
