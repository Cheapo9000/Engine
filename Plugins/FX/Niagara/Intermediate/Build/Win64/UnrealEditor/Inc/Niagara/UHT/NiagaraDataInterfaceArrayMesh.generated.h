// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceArrayMesh.h"

#ifdef NIAGARA_NiagaraDataInterfaceArrayMesh_generated_h
#error "NiagaraDataInterfaceArrayMesh.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceArrayMesh.h"
#endif
#define NIAGARA_NiagaraDataInterfaceArrayMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UStaticMesh;
struct FNiagaraMeshRendererMeshPropertiesBase;

// ********** Begin Class UNiagaraDataInterfaceArrayMesh *******************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNiagaraArrayMeshSM); \
	DECLARE_FUNCTION(execSetNiagaraArrayMesh);


struct Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceArrayMesh(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceArrayMesh, UNiagaraDataInterfaceArray, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceArrayMesh_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceArrayMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceArrayMesh*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceArrayMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceArrayMesh(UNiagaraDataInterfaceArrayMesh&&) = delete; \
	UNiagaraDataInterfaceArrayMesh(const UNiagaraDataInterfaceArrayMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceArrayMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceArrayMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceArrayMesh) \
	NIAGARA_API virtual ~UNiagaraDataInterfaceArrayMesh();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceArrayMesh;

// ********** End Class UNiagaraDataInterfaceArrayMesh *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceArrayMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
