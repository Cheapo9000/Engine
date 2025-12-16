// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PreviewMesh.h"

#ifdef MODELINGCOMPONENTS_PreviewMesh_generated_h
#error "PreviewMesh.generated.h already included, missing '#pragma once' in PreviewMesh.h"
#endif
#define MODELINGCOMPONENTS_PreviewMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APreviewMeshActor ********************************************************
struct Z_Construct_UClass_APreviewMeshActor_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewMeshActor_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPreviewMeshActor(); \
	friend struct ::Z_Construct_UClass_APreviewMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_APreviewMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APreviewMeshActor, AInternalToolFrameworkActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_APreviewMeshActor_NoRegister) \
	DECLARE_SERIALIZER(APreviewMeshActor)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APreviewMeshActor(APreviewMeshActor&&) = delete; \
	APreviewMeshActor(const APreviewMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, APreviewMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APreviewMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APreviewMeshActor) \
	MODELINGCOMPONENTS_API virtual ~APreviewMeshActor();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APreviewMeshActor;

// ********** End Class APreviewMeshActor **********************************************************

// ********** Begin Class UPreviewMesh *************************************************************
struct Z_Construct_UClass_UPreviewMesh_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreviewMesh(); \
	friend struct ::Z_Construct_UClass_UPreviewMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UPreviewMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UPreviewMesh, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UPreviewMesh_NoRegister) \
	DECLARE_SERIALIZER(UPreviewMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UPreviewMesh*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPreviewMesh(UPreviewMesh&&) = delete; \
	UPreviewMesh(const UPreviewMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UPreviewMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPreviewMesh)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_58_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPreviewMesh;

// ********** End Class UPreviewMesh ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
