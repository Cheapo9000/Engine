// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraFunctionLibrary.h"

#ifdef NIAGARA_NiagaraFunctionLibrary_generated_h
#error "NiagaraFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UNiagaraSystem;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture;
class UTexture2DArray;
class UVolumeTexture;
enum class ENCPoolMethod : uint8;
struct FFXSystemSpawnParameters;

// ********** Begin Class UNiagaraFunctionLibrary **************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReleaseNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execAcquireNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execSetActorNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execSetComponentNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execGetNiagaraParameterCollection); \
	DECLARE_FUNCTION(execSetVolumeTextureObject); \
	DECLARE_FUNCTION(execSetTexture2DArrayObject); \
	DECLARE_FUNCTION(execSetTextureObject); \
	DECLARE_FUNCTION(execSetSceneCapture2DDataInterfaceManagedMode); \
	DECLARE_FUNCTION(execSetSkeletalMeshDataInterfaceFilteredSockets); \
	DECLARE_FUNCTION(execSetSkeletalMeshDataInterfaceFilteredBones); \
	DECLARE_FUNCTION(execSetSkeletalMeshDataInterfaceSamplingRegions); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableSkeletalMeshComponent); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMesh); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMeshComponent); \
	DECLARE_FUNCTION(execSpawnSystemAttached); \
	DECLARE_FUNCTION(execSpawnSystemAtLocation); \
	DECLARE_FUNCTION(execSpawnSystemAttachedWithParams); \
	DECLARE_FUNCTION(execSpawnSystemAtLocationWithParams);


struct Z_Construct_UClass_UNiagaraFunctionLibrary_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UNiagaraFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraFunctionLibrary(UNiagaraFunctionLibrary&&) = delete; \
	UNiagaraFunctionLibrary(const UNiagaraFunctionLibrary&) = delete; \
	NIAGARA_API virtual ~UNiagaraFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_24_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraFunctionLibrary;

// ********** End Class UNiagaraFunctionLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
