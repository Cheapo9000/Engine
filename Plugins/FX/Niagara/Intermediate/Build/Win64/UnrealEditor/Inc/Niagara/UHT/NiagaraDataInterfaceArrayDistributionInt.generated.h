// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceArrayDistributionInt.h"

#ifdef NIAGARA_NiagaraDataInterfaceArrayDistributionInt_generated_h
#error "NiagaraDataInterfaceArrayDistributionInt.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceArrayDistributionInt.h"
#endif
#define NIAGARA_NiagaraDataInterfaceArrayDistributionInt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
struct FNDIDistributionIntArrayEntry;

// ********** Begin ScriptStruct FNDIDistributionIntArrayEntry *************************************
struct Z_Construct_UScriptStruct_FNDIDistributionIntArrayEntry_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIDistributionIntArrayEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIDistributionIntArrayEntry;
// ********** End ScriptStruct FNDIDistributionIntArrayEntry ***************************************

// ********** Begin Class UNiagaraDataInterfaceArrayDistributionInt ********************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNiagaraArrayDistributionInt);


struct Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceArrayDistributionInt(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceArrayDistributionInt, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceArrayDistributionInt)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceArrayDistributionInt(UNiagaraDataInterfaceArrayDistributionInt&&) = delete; \
	UNiagaraDataInterfaceArrayDistributionInt(const UNiagaraDataInterfaceArrayDistributionInt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceArrayDistributionInt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceArrayDistributionInt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceArrayDistributionInt) \
	NO_API virtual ~UNiagaraDataInterfaceArrayDistributionInt();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_38_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceArrayDistributionInt;

// ********** End Class UNiagaraDataInterfaceArrayDistributionInt **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayDistributionInt_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
