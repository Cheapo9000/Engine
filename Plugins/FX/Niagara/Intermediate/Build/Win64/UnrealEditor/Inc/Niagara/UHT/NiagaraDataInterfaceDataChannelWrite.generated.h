// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDataChannelWrite.h"

#ifdef NIAGARA_NiagaraDataInterfaceDataChannelWrite_generated_h
#error "NiagaraDataInterfaceDataChannelWrite.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDataChannelWrite.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDataChannelWrite_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNDIDataChannelWriteCompiledData **********************************
struct Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNDIDataChannelCompiledData Super;


struct FNDIDataChannelWriteCompiledData;
// ********** End ScriptStruct FNDIDataChannelWriteCompiledData ************************************

// ********** Begin ScriptStruct FNDIDataChannelWriteSimCacheFrameBuffer ***************************
struct Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIDataChannelWriteSimCacheFrameBuffer;
// ********** End ScriptStruct FNDIDataChannelWriteSimCacheFrameBuffer *****************************

// ********** Begin ScriptStruct FNDIDataChannelWriteSimCacheFrame *********************************
struct Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIDataChannelWriteSimCacheFrame;
// ********** End ScriptStruct FNDIDataChannelWriteSimCacheFrame ***********************************

// ********** Begin Class UNDIDataChannelWriteSimCacheData *****************************************
struct Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIDataChannelWriteSimCacheData(); \
	friend struct ::Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIDataChannelWriteSimCacheData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_NoRegister) \
	DECLARE_SERIALIZER(UNDIDataChannelWriteSimCacheData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNDIDataChannelWriteSimCacheData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIDataChannelWriteSimCacheData(UNDIDataChannelWriteSimCacheData&&) = delete; \
	UNDIDataChannelWriteSimCacheData(const UNDIDataChannelWriteSimCacheData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNDIDataChannelWriteSimCacheData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIDataChannelWriteSimCacheData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIDataChannelWriteSimCacheData) \
	NIAGARA_API virtual ~UNDIDataChannelWriteSimCacheData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_77_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIDataChannelWriteSimCacheData;

// ********** End Class UNDIDataChannelWriteSimCacheData *******************************************

// ********** Begin Class UNiagaraDataInterfaceDataChannelWrite ************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceDataChannelWrite, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDataChannelWrite) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceDataChannelWrite*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDataChannelWrite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDataChannelWrite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDataChannelWrite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDataChannelWrite); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDataChannelWrite(UNiagaraDataInterfaceDataChannelWrite&&) = delete; \
	UNiagaraDataInterfaceDataChannelWrite(const UNiagaraDataInterfaceDataChannelWrite&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDataChannelWrite();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_101_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_104_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceDataChannelWrite;

// ********** End Class UNiagaraDataInterfaceDataChannelWrite **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
