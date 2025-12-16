// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceGBuffer.h"

#ifdef NIAGARA_NiagaraDataInterfaceGBuffer_generated_h
#error "NiagaraDataInterfaceGBuffer.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceGBuffer.h"
#endif
#define NIAGARA_NiagaraDataInterfaceGBuffer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceGBuffer *********************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceGBuffer(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceGBuffer, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceGBuffer)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceGBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceGBuffer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceGBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceGBuffer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceGBuffer(UNiagaraDataInterfaceGBuffer&&) = delete; \
	UNiagaraDataInterfaceGBuffer(const UNiagaraDataInterfaceGBuffer&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceGBuffer();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceGBuffer;

// ********** End Class UNiagaraDataInterfaceGBuffer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceGBuffer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
