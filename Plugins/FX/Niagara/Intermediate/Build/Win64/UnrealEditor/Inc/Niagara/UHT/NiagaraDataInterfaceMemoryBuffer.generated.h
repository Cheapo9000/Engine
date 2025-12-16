// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceMemoryBuffer.h"

#ifdef NIAGARA_NiagaraDataInterfaceMemoryBuffer_generated_h
#error "NiagaraDataInterfaceMemoryBuffer.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceMemoryBuffer.h"
#endif
#define NIAGARA_NiagaraDataInterfaceMemoryBuffer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceMemoryBuffer ****************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceMemoryBuffer(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceMemoryBuffer, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceMemoryBuffer) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceMemoryBuffer*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceMemoryBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceMemoryBuffer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceMemoryBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceMemoryBuffer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceMemoryBuffer(UNiagaraDataInterfaceMemoryBuffer&&) = delete; \
	UNiagaraDataInterfaceMemoryBuffer(const UNiagaraDataInterfaceMemoryBuffer&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceMemoryBuffer();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_23_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_26_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceMemoryBuffer;

// ********** End Class UNiagaraDataInterfaceMemoryBuffer ******************************************

// ********** Begin ScriptStruct FNDIMemoryBufferSimCacheDataFrame *********************************
struct Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIMemoryBufferSimCacheDataFrame;
// ********** End ScriptStruct FNDIMemoryBufferSimCacheDataFrame ***********************************

// ********** Begin Class UNDIMemoryBufferSimCacheData *********************************************
struct Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNDIMemoryBufferSimCacheData_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMemoryBufferSimCacheData(); \
	friend struct ::Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNDIMemoryBufferSimCacheData_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIMemoryBufferSimCacheData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNDIMemoryBufferSimCacheData_NoRegister) \
	DECLARE_SERIALIZER(UNDIMemoryBufferSimCacheData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNDIMemoryBufferSimCacheData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIMemoryBufferSimCacheData(UNDIMemoryBufferSimCacheData&&) = delete; \
	UNDIMemoryBufferSimCacheData(const UNDIMemoryBufferSimCacheData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNDIMemoryBufferSimCacheData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMemoryBufferSimCacheData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMemoryBufferSimCacheData) \
	NIAGARA_API virtual ~UNDIMemoryBufferSimCacheData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_95_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIMemoryBufferSimCacheData;

// ********** End Class UNDIMemoryBufferSimCacheData ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
