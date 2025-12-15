// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRMeshComponent.h"

#ifdef MRMESH_MRMeshComponent_generated_h
#error "MRMeshComponent.generated.h already included, missing '#pragma once' in MRMeshComponent.h"
#endif
#define MRMESH_MRMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FLinearColor;

// ********** Begin Class UMRMeshBodyHolder ********************************************************
struct Z_Construct_UClass_UMRMeshBodyHolder_Statics;
MRMESH_API UClass* Z_Construct_UClass_UMRMeshBodyHolder_NoRegister();

#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRMeshBodyHolder(); \
	friend struct ::Z_Construct_UClass_UMRMeshBodyHolder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRMESH_API UClass* ::Z_Construct_UClass_UMRMeshBodyHolder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRMeshBodyHolder, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MRMesh"), Z_Construct_UClass_UMRMeshBodyHolder_NoRegister) \
	DECLARE_SERIALIZER(UMRMeshBodyHolder) \
	virtual UObject* _getUObject() const override { return const_cast<UMRMeshBodyHolder*>(this); }


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshBodyHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRMeshBodyHolder(UMRMeshBodyHolder&&) = delete; \
	UMRMeshBodyHolder(const UMRMeshBodyHolder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshBodyHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshBodyHolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshBodyHolder) \
	NO_API virtual ~UMRMeshBodyHolder();


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_62_PROLOG
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_66_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRMeshBodyHolder;

// ********** End Class UMRMeshBodyHolder **********************************************************

// ********** Begin Class UMRMeshComponent *********************************************************
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_110_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetWireframeColor); \
	DECLARE_FUNCTION(execSetWireframeColor); \
	DECLARE_FUNCTION(execGetUseWireframe); \
	DECLARE_FUNCTION(execSetUseWireframe); \
	DECLARE_FUNCTION(execGetEnableMeshOcclusion); \
	DECLARE_FUNCTION(execSetEnableMeshOcclusion); \
	DECLARE_FUNCTION(execSetWireframeMaterial); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execRequestNavMeshUpdate); \
	DECLARE_FUNCTION(execForceNavMeshUpdate); \
	DECLARE_FUNCTION(execIsConnected);


struct Z_Construct_UClass_UMRMeshComponent_Statics;
MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUMRMeshComponent(); \
	friend struct ::Z_Construct_UClass_UMRMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRMESH_API UClass* ::Z_Construct_UClass_UMRMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), Z_Construct_UClass_UMRMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UMRMeshComponent)


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MRMESH_API UMRMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MRMESH_API, UMRMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRMeshComponent(UMRMeshComponent&&) = delete; \
	UMRMeshComponent(const UMRMeshComponent&) = delete; \
	MRMESH_API virtual ~UMRMeshComponent();


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_104_PROLOG
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_110_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_110_INCLASS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRMeshComponent;

// ********** End Class UMRMeshComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
