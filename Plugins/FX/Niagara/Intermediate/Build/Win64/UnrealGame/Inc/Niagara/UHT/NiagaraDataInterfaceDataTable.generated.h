// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDataTable.h"

#ifdef NIAGARA_NiagaraDataInterfaceDataTable_generated_h
#error "NiagaraDataInterfaceDataTable.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDataTable.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceDataTable *******************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceDataTable_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataTable_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataTable_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDataTable(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceDataTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceDataTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceDataTable, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceDataTable_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDataTable)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataTable_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDataTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDataTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDataTable(UNiagaraDataInterfaceDataTable&&) = delete; \
	UNiagaraDataInterfaceDataTable(const UNiagaraDataInterfaceDataTable&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDataTable();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataTable_h_16_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataTable_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataTable_h_19_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataTable_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceDataTable;

// ********** End Class UNiagaraDataInterfaceDataTable *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
