// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceStaticMesh.h"

#ifdef NIAGARA_NiagaraDataInterfaceStaticMesh_generated_h
#error "NiagaraDataInterfaceStaticMesh.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceStaticMesh.h"
#endif
#define NIAGARA_NiagaraDataInterfaceStaticMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;

// ********** Begin ScriptStruct FNDIStaticMeshSectionFilter ***************************************
struct Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDIStaticMeshSectionFilter;
// ********** End ScriptStruct FNDIStaticMeshSectionFilter *****************************************

// ********** Begin Class UNiagaraDataInterfaceStaticMesh ******************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSourceEndPlay); \
	DECLARE_FUNCTION(execSetNiagaraStaticMeshDIInstanceIndex);


struct Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceStaticMesh(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceStaticMesh, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceStaticMesh)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceStaticMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceStaticMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceStaticMesh(UNiagaraDataInterfaceStaticMesh&&) = delete; \
	UNiagaraDataInterfaceStaticMesh(const UNiagaraDataInterfaceStaticMesh&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceStaticMesh();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_52_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceStaticMesh;

// ********** End Class UNiagaraDataInterfaceStaticMesh ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h

// ********** Begin Enum ENDIStaticMesh_SourceMode *************************************************
#define FOREACH_ENUM_ENDISTATICMESH_SOURCEMODE(op) \
	op(ENDIStaticMesh_SourceMode::Default) \
	op(ENDIStaticMesh_SourceMode::Source) \
	op(ENDIStaticMesh_SourceMode::AttachParent) \
	op(ENDIStaticMesh_SourceMode::DefaultMeshOnly) \
	op(ENDIStaticMesh_SourceMode::MeshParameterBinding) 

enum class ENDIStaticMesh_SourceMode : uint8;
template<> struct TIsUEnumClass<ENDIStaticMesh_SourceMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIStaticMesh_SourceMode>();
// ********** End Enum ENDIStaticMesh_SourceMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
