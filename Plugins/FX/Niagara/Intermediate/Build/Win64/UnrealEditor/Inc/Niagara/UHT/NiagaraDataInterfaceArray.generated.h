// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceArray.h"

#ifdef NIAGARA_NiagaraDataInterfaceArray_generated_h
#error "NiagaraDataInterfaceArray.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceArray.h"
#endif
#define NIAGARA_NiagaraDataInterfaceArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceArray ***********************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceArray(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceArray, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceArray) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceArray*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceArray); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceArray(UNiagaraDataInterfaceArray&&) = delete; \
	UNiagaraDataInterfaceArray(const UNiagaraDataInterfaceArray&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceArray();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_84_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_87_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceArray;

// ********** End Class UNiagaraDataInterfaceArray *************************************************

// ********** Begin ScriptStruct FNDIArraySimCacheDataFrame ****************************************
struct Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIArraySimCacheDataFrame;
// ********** End ScriptStruct FNDIArraySimCacheDataFrame ******************************************

// ********** Begin Class UNDIArraySimCacheData ****************************************************
struct Z_Construct_UClass_UNDIArraySimCacheData_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNDIArraySimCacheData_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIArraySimCacheData(); \
	friend struct ::Z_Construct_UClass_UNDIArraySimCacheData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNDIArraySimCacheData_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIArraySimCacheData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNDIArraySimCacheData_NoRegister) \
	DECLARE_SERIALIZER(UNDIArraySimCacheData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_170_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNDIArraySimCacheData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIArraySimCacheData(UNDIArraySimCacheData&&) = delete; \
	UNDIArraySimCacheData(const UNDIArraySimCacheData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNDIArraySimCacheData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIArraySimCacheData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIArraySimCacheData) \
	NIAGARA_API virtual ~UNDIArraySimCacheData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_167_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_170_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIArraySimCacheData;

// ********** End Class UNDIArraySimCacheData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
