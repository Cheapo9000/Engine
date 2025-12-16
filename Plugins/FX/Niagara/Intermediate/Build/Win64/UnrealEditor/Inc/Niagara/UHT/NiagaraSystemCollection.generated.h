// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystemCollection.h"

#ifdef NIAGARA_NiagaraSystemCollection_generated_h
#error "NiagaraSystemCollection.generated.h already included, missing '#pragma once' in NiagaraSystemCollection.h"
#endif
#define NIAGARA_NiagaraSystemCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;

// ********** Begin ScriptStruct FNiagaraSystemCollectionData **************************************
struct Z_Construct_UScriptStruct_FNiagaraSystemCollectionData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSystemCollectionData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSystemCollectionData;
// ********** End ScriptStruct FNiagaraSystemCollectionData ****************************************

// ********** Begin Class UNiagaraSystemCollection *************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSystems); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execLoadSynchronous); \
	DECLARE_FUNCTION(execLoadAsync); \
	DECLARE_FUNCTION(execNum);


struct Z_Construct_UClass_UNiagaraSystemCollection_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystemCollection_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSystemCollection(); \
	friend struct ::Z_Construct_UClass_UNiagaraSystemCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSystemCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSystemCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSystemCollection_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSystemCollection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystemCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSystemCollection(UNiagaraSystemCollection&&) = delete; \
	UNiagaraSystemCollection(const UNiagaraSystemCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystemCollection) \
	NO_API virtual ~UNiagaraSystemCollection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_50_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSystemCollection;

// ********** End Class UNiagaraSystemCollection ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
