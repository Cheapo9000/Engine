// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARBlueprintProxy.h"

#ifdef AUGMENTEDREALITY_ARBlueprintProxy_generated_h
#error "ARBlueprintProxy.generated.h already included, missing '#pragma once' in ARBlueprintProxy.h"
#endif
#define AUGMENTEDREALITY_ARBlueprintProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARCandidateObject;
class UARGetCandidateObjectAsyncTaskBlueprintProxy;
class UARSaveWorldAsyncTaskBlueprintProxy;
class UObject;

// ********** Begin Class UARBaseAsyncTaskBlueprintProxy *******************************************
struct Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy(); \
	friend struct ::Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UARBaseAsyncTaskBlueprintProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister) \
	DECLARE_SERIALIZER(UARBaseAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBaseAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARBaseAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBaseAsyncTaskBlueprintProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARBaseAsyncTaskBlueprintProxy(UARBaseAsyncTaskBlueprintProxy&&) = delete; \
	UARBaseAsyncTaskBlueprintProxy(const UARBaseAsyncTaskBlueprintProxy&) = delete; \
	AUGMENTEDREALITY_API virtual ~UARBaseAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_19_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_24_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARBaseAsyncTaskBlueprintProxy;

// ********** End Class UARBaseAsyncTaskBlueprintProxy *********************************************

// ********** Begin Delegate FARSaveWorldPin *******************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_50_DELEGATE \
AUGMENTEDREALITY_API void FARSaveWorldPin_DelegateWrapper(const FMulticastScriptDelegate& ARSaveWorldPin, TArray<uint8> const& SavedWorld);


// ********** End Delegate FARSaveWorldPin *********************************************************

// ********** Begin Class UARSaveWorldAsyncTaskBlueprintProxy **************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execARSaveWorld);


struct Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy(); \
	friend struct ::Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UARSaveWorldAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister) \
	DECLARE_SERIALIZER(UARSaveWorldAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSaveWorldAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARSaveWorldAsyncTaskBlueprintProxy(UARSaveWorldAsyncTaskBlueprintProxy&&) = delete; \
	UARSaveWorldAsyncTaskBlueprintProxy(const UARSaveWorldAsyncTaskBlueprintProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSaveWorldAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSaveWorldAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSaveWorldAsyncTaskBlueprintProxy) \
	NO_API virtual ~UARSaveWorldAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_52_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARSaveWorldAsyncTaskBlueprintProxy;

// ********** End Class UARSaveWorldAsyncTaskBlueprintProxy ****************************************

// ********** Begin Delegate FARGetCandidateObjectPin **********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_85_DELEGATE \
AUGMENTEDREALITY_API void FARGetCandidateObjectPin_DelegateWrapper(const FMulticastScriptDelegate& ARGetCandidateObjectPin, UARCandidateObject* SavedObject);


// ********** End Delegate FARGetCandidateObjectPin ************************************************

// ********** Begin Class UARGetCandidateObjectAsyncTaskBlueprintProxy *****************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execARGetCandidateObject);


struct Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy(); \
	friend struct ::Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UARGetCandidateObjectAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister) \
	DECLARE_SERIALIZER(UARGetCandidateObjectAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGetCandidateObjectAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARGetCandidateObjectAsyncTaskBlueprintProxy(UARGetCandidateObjectAsyncTaskBlueprintProxy&&) = delete; \
	UARGetCandidateObjectAsyncTaskBlueprintProxy(const UARGetCandidateObjectAsyncTaskBlueprintProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGetCandidateObjectAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGetCandidateObjectAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGetCandidateObjectAsyncTaskBlueprintProxy) \
	NO_API virtual ~UARGetCandidateObjectAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_87_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARGetCandidateObjectAsyncTaskBlueprintProxy;

// ********** End Class UARGetCandidateObjectAsyncTaskBlueprintProxy *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
