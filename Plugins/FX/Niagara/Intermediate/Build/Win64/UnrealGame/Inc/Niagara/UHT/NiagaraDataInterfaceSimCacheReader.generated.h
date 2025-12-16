// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceSimCacheReader.h"

#ifdef NIAGARA_NiagaraDataInterfaceSimCacheReader_generated_h
#error "NiagaraDataInterfaceSimCacheReader.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceSimCacheReader.h"
#endif
#define NIAGARA_NiagaraDataInterfaceSimCacheReader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceSimCacheReader **************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceSimCacheReader(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceSimCacheReader, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceSimCacheReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceSimCacheReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceSimCacheReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceSimCacheReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceSimCacheReader); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceSimCacheReader(UNiagaraDataInterfaceSimCacheReader&&) = delete; \
	UNiagaraDataInterfaceSimCacheReader(const UNiagaraDataInterfaceSimCacheReader&) = delete; \
	NO_API virtual ~UNiagaraDataInterfaceSimCacheReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_16_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_19_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceSimCacheReader;

// ********** End Class UNiagaraDataInterfaceSimCacheReader ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
