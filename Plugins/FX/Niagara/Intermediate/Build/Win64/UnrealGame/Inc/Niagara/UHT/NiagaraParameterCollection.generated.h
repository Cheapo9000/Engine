// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraParameterCollection.h"

#ifdef NIAGARA_NiagaraParameterCollection_generated_h
#error "NiagaraParameterCollection.generated.h already included, missing '#pragma once' in NiagaraParameterCollection.h"
#endif
#define NIAGARA_NiagaraParameterCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UNiagaraParameterCollectionInstance **************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetQuatParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVector4Parameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetVector2DParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execGetColorParameter); \
	DECLARE_FUNCTION(execGetQuatParameter); \
	DECLARE_FUNCTION(execGetVector4Parameter); \
	DECLARE_FUNCTION(execGetVectorParameter); \
	DECLARE_FUNCTION(execGetVector2DParameter); \
	DECLARE_FUNCTION(execGetIntParameter); \
	DECLARE_FUNCTION(execGetFloatParameter); \
	DECLARE_FUNCTION(execGetBoolParameter);


struct Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollectionInstance(); \
	friend struct ::Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraParameterCollectionInstance)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollectionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraParameterCollectionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollectionInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraParameterCollectionInstance(UNiagaraParameterCollectionInstance&&) = delete; \
	UNiagaraParameterCollectionInstance(const UNiagaraParameterCollectionInstance&) = delete;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_18_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_21_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraParameterCollectionInstance;

// ********** End Class UNiagaraParameterCollectionInstance ****************************************

// ********** Begin Class UNiagaraParameterCollection **********************************************
struct Z_Construct_UClass_UNiagaraParameterCollection_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollection(); \
	friend struct ::Z_Construct_UClass_UNiagaraParameterCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraParameterCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraParameterCollection_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraParameterCollection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraParameterCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraParameterCollection(UNiagaraParameterCollection&&) = delete; \
	UNiagaraParameterCollection(const UNiagaraParameterCollection&) = delete; \
	NIAGARA_API virtual ~UNiagaraParameterCollection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_170_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_173_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraParameterCollection;

// ********** End Class UNiagaraParameterCollection ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
