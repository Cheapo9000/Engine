// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDynamicMesh.h"

#ifdef NIAGARA_NiagaraDataInterfaceDynamicMesh_generated_h
#error "NiagaraDataInterfaceDynamicMesh.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDynamicMesh.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDynamicMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraDynamicMeshSection ****************************************
struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraDynamicMeshSection;
// ********** End ScriptStruct FNiagaraDynamicMeshSection ******************************************

// ********** Begin ScriptStruct FNiagaraDynamicMeshMaterial ***************************************
struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraDynamicMeshMaterial;
// ********** End ScriptStruct FNiagaraDynamicMeshMaterial *****************************************

// ********** Begin Class UNiagaraDataInterfaceDynamicMesh *****************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceDynamicMesh, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDynamicMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceDynamicMesh*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDynamicMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDynamicMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDynamicMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDynamicMesh(UNiagaraDataInterfaceDynamicMesh&&) = delete; \
	UNiagaraDataInterfaceDynamicMesh(const UNiagaraDataInterfaceDynamicMesh&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDynamicMesh();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_54_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_57_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceDynamicMesh;

// ********** End Class UNiagaraDataInterfaceDynamicMesh *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDynamicMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
