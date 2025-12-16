// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceRigidMeshCollisionQuery.h"

#ifdef NIAGARA_NiagaraDataInterfaceRigidMeshCollisionQuery_generated_h
#error "NiagaraDataInterfaceRigidMeshCollisionQuery.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceRigidMeshCollisionQuery.h"
#endif
#define NIAGARA_NiagaraDataInterfaceRigidMeshCollisionQuery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;

// ********** Begin Class UNiagaraDataInterfaceRigidMeshCollisionQuery *****************************
struct Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceRigidMeshCollisionQuery, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceRigidMeshCollisionQuery)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceRigidMeshCollisionQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceRigidMeshCollisionQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceRigidMeshCollisionQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceRigidMeshCollisionQuery); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceRigidMeshCollisionQuery(UNiagaraDataInterfaceRigidMeshCollisionQuery&&) = delete; \
	UNiagaraDataInterfaceRigidMeshCollisionQuery(const UNiagaraDataInterfaceRigidMeshCollisionQuery&) = delete; \
	NO_API virtual ~UNiagaraDataInterfaceRigidMeshCollisionQuery();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_179_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceRigidMeshCollisionQuery;

// ********** End Class UNiagaraDataInterfaceRigidMeshCollisionQuery *******************************

// ********** Begin Class UNiagaraDIRigidMeshCollisionFunctionLibrary ******************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSourceActors);


struct Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDIRigidMeshCollisionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDIRigidMeshCollisionFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDIRigidMeshCollisionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDIRigidMeshCollisionFunctionLibrary(UNiagaraDIRigidMeshCollisionFunctionLibrary&&) = delete; \
	UNiagaraDIRigidMeshCollisionFunctionLibrary(const UNiagaraDIRigidMeshCollisionFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDIRigidMeshCollisionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDIRigidMeshCollisionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDIRigidMeshCollisionFunctionLibrary) \
	NIAGARA_API virtual ~UNiagaraDIRigidMeshCollisionFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_302_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDIRigidMeshCollisionFunctionLibrary;

// ********** End Class UNiagaraDIRigidMeshCollisionFunctionLibrary ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
