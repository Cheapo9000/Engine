// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertReplicationBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FConcertPropertyChainWrapper;
#ifdef CONCERTREPLICATIONSCRIPTING_ConcertReplicationBlueprintFunctionLibrary_generated_h
#error "ConcertReplicationBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in ConcertReplicationBlueprintFunctionLibrary.h"
#endif
#define CONCERTREPLICATIONSCRIPTING_ConcertReplicationBlueprintFunctionLibrary_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_17_DELEGATE \
static bool FPropertyChainPredicate_DelegateWrapper(const FScriptDelegate& PropertyChainPredicate, FConcertPropertyChainWrapper const& PathToProperty);


#define FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDirectChildOf); \
	DECLARE_FUNCTION(execIsChildOf); \
	DECLARE_FUNCTION(execGetPropertyFromLeaf); \
	DECLARE_FUNCTION(execGetPropertyFromRoot); \
	DECLARE_FUNCTION(execGetPropertyStringPath); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execGetChildProperties); \
	DECLARE_FUNCTION(execGetAllProperties); \
	DECLARE_FUNCTION(execGetPropertiesIn); \
	DECLARE_FUNCTION(execMakePropertyChainByLiteralPath);


#define FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertReplicationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UConcertReplicationBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UConcertReplicationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConcertReplicationScripting"), NO_API) \
	DECLARE_SERIALIZER(UConcertReplicationBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConcertReplicationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConcertReplicationBlueprintFunctionLibrary(UConcertReplicationBlueprintFunctionLibrary&&); \
	UConcertReplicationBlueprintFunctionLibrary(const UConcertReplicationBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConcertReplicationBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertReplicationBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConcertReplicationBlueprintFunctionLibrary) \
	NO_API virtual ~UConcertReplicationBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_11_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONCERTREPLICATIONSCRIPTING_API UClass* StaticClass<class UConcertReplicationBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertScripting_ConcertReplicationScripting_Source_ConcertReplicationScripting_Public_ConcertReplicationBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
