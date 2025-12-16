// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCacheDebugData.h"

#ifdef NIAGARA_NiagaraSimCacheDebugData_generated_h
#error "NiagaraSimCacheDebugData.generated.h already included, missing '#pragma once' in NiagaraSimCacheDebugData.h"
#endif
#define NIAGARA_NiagaraSimCacheDebugData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraSimCacheDebugDataFrame ************************************
struct Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSimCacheDebugDataFrame;
// ********** End ScriptStruct FNiagaraSimCacheDebugDataFrame **************************************

// ********** Begin Class UNiagaraSimCacheDebugData ************************************************
struct Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheDebugData_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSimCacheDebugData(); \
	friend struct ::Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSimCacheDebugData_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSimCacheDebugData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSimCacheDebugData_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSimCacheDebugData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimCacheDebugData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCacheDebugData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimCacheDebugData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCacheDebugData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSimCacheDebugData(UNiagaraSimCacheDebugData&&) = delete; \
	UNiagaraSimCacheDebugData(const UNiagaraSimCacheDebugData&) = delete; \
	NIAGARA_API virtual ~UNiagaraSimCacheDebugData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_22_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSimCacheDebugData;

// ********** End Class UNiagaraSimCacheDebugData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
