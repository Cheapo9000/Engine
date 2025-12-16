// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelAccessor.h"

#ifdef NIAGARA_NiagaraDataChannelAccessor_generated_h
#error "NiagaraDataChannelAccessor.generated.h already included, missing '#pragma once' in NiagaraDataChannelAccessor.h"
#endif
#define NIAGARA_NiagaraDataChannelAccessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FNiagaraDataChannelSearchParameters;
struct FNiagaraID;
struct FNiagaraSpawnInfo;

// ********** Begin Class UNiagaraDataChannelReader ************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReadSpawnInfo); \
	DECLARE_FUNCTION(execReadID); \
	DECLARE_FUNCTION(execReadPosition); \
	DECLARE_FUNCTION(execReadBool); \
	DECLARE_FUNCTION(execReadEnum); \
	DECLARE_FUNCTION(execReadInt); \
	DECLARE_FUNCTION(execReadLinearColor); \
	DECLARE_FUNCTION(execReadQuat); \
	DECLARE_FUNCTION(execReadVector4); \
	DECLARE_FUNCTION(execReadVector); \
	DECLARE_FUNCTION(execReadVector2D); \
	DECLARE_FUNCTION(execReadFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitAccess);


struct Z_Construct_UClass_UNiagaraDataChannelReader_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelReader(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelReader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelReader(UNiagaraDataChannelReader&&) = delete; \
	UNiagaraDataChannelReader(const UNiagaraDataChannelReader&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelReader) \
	NIAGARA_API virtual ~UNiagaraDataChannelReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_18_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelReader;

// ********** End Class UNiagaraDataChannelReader **************************************************

// ********** Begin Class UNiagaraDataChannelWriter ************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteID); \
	DECLARE_FUNCTION(execWritePosition); \
	DECLARE_FUNCTION(execWriteSpawnInfo); \
	DECLARE_FUNCTION(execWriteBool); \
	DECLARE_FUNCTION(execWriteEnum); \
	DECLARE_FUNCTION(execWriteInt); \
	DECLARE_FUNCTION(execWriteLinearColor); \
	DECLARE_FUNCTION(execWriteQuat); \
	DECLARE_FUNCTION(execWriteVector4); \
	DECLARE_FUNCTION(execWriteVector); \
	DECLARE_FUNCTION(execWriteVector2D); \
	DECLARE_FUNCTION(execWriteFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitWrite);


struct Z_Construct_UClass_UNiagaraDataChannelWriter_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelWriter(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelWriter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelWriter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelWriter)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelWriter(UNiagaraDataChannelWriter&&) = delete; \
	UNiagaraDataChannelWriter(const UNiagaraDataChannelWriter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelWriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelWriter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelWriter) \
	NIAGARA_API virtual ~UNiagaraDataChannelWriter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_88_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelWriter;

// ********** End Class UNiagaraDataChannelWriter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAccessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
