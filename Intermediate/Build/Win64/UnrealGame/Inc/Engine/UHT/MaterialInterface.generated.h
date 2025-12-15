// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInterface.h"

#ifdef ENGINE_MaterialInterface_generated_h
#error "MaterialInterface.generated.h already included, missing '#pragma once' in MaterialInterface.h"
#endif
#define ENGINE_MaterialInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UMaterialFunctionInterface;
class UMaterialInterface;
class UPhysicalMaterial;
class UPhysicalMaterialMask;
struct FMaterialParameterInfo;

// ********** Begin ScriptStruct FLightmassMaterialInterfaceSettings *******************************
struct Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLightmassMaterialInterfaceSettings;
// ********** End ScriptStruct FLightmassMaterialInterfaceSettings *********************************

// ********** Begin ScriptStruct FMaterialTextureInfo **********************************************
struct Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialTextureInfo;
// ********** End ScriptStruct FMaterialTextureInfo ************************************************

// ********** Begin ScriptStruct FTextureSamplingInfo **********************************************
struct Z_Construct_UScriptStruct_FTextureSamplingInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_248_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureSamplingInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextureSamplingInfo;
// ********** End ScriptStruct FTextureSamplingInfo ************************************************

// ********** Begin ScriptStruct FMaterialCachedTexturesSamplingInfo *******************************
struct Z_Construct_UScriptStruct_FMaterialCachedTexturesSamplingInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_267_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialCachedTexturesSamplingInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialCachedTexturesSamplingInfo;
// ********** End ScriptStruct FMaterialCachedTexturesSamplingInfo *********************************

// ********** Begin Class UMaterialInterfaceEditorOnlyData *****************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_276_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInterfaceEditorOnlyData, NO_API)


struct Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_276_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInterfaceEditorOnlyData(); \
	friend struct ::Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialInterfaceEditorOnlyData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_NoRegister) \
	DECLARE_SERIALIZER(UMaterialInterfaceEditorOnlyData) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_276_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_276_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialInterfaceEditorOnlyData(UMaterialInterfaceEditorOnlyData&&) = delete; \
	UMaterialInterfaceEditorOnlyData(const UMaterialInterfaceEditorOnlyData&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterfaceEditorOnlyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialInterfaceEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_273_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_276_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_276_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_276_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialInterfaceEditorOnlyData;

// ********** End Class UMaterialInterfaceEditorOnlyData *******************************************

// ********** Begin Class UMaterialInterface *******************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident); \
	DECLARE_FUNCTION(execGetBlendMode); \
	DECLARE_FUNCTION(execGetParameterInfo); \
	DECLARE_FUNCTION(execGetNaniteOverideMaterial); \
	DECLARE_FUNCTION(execGetPhysicalMaterialFromMap); \
	DECLARE_FUNCTION(execGetPhysicalMaterialMask); \
	DECLARE_FUNCTION(execGetPhysicalMaterial); \
	DECLARE_FUNCTION(execGetBaseMaterial);


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInterface, ENGINE_API)


struct Z_Construct_UClass_UMaterialInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend struct ::Z_Construct_UClass_UMaterialInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialInterface_NoRegister) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialInterface(UMaterialInterface&&) = delete; \
	UMaterialInterface(const UMaterialInterface&) = delete;


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_294_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h_297_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialInterface;

// ********** End Class UMaterialInterface *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInterface_h

// ********** Begin Enum EMaterialUsage ************************************************************
#define FOREACH_ENUM_EMATERIALUSAGE(op) \
	op(MATUSAGE_SkeletalMesh) \
	op(MATUSAGE_ParticleSprites) \
	op(MATUSAGE_BeamTrails) \
	op(MATUSAGE_MeshParticles) \
	op(MATUSAGE_StaticLighting) \
	op(MATUSAGE_MorphTargets) \
	op(MATUSAGE_SplineMesh) \
	op(MATUSAGE_InstancedStaticMeshes) \
	op(MATUSAGE_GeometryCollections) \
	op(MATUSAGE_Clothing) \
	op(MATUSAGE_NiagaraSprites) \
	op(MATUSAGE_NiagaraRibbons) \
	op(MATUSAGE_NiagaraMeshParticles) \
	op(MATUSAGE_GeometryCache) \
	op(MATUSAGE_Water) \
	op(MATUSAGE_HairStrands) \
	op(MATUSAGE_LidarPointCloud) \
	op(MATUSAGE_VirtualHeightfieldMesh) \
	op(MATUSAGE_Nanite) \
	op(MATUSAGE_Voxels) \
	op(MATUSAGE_VolumetricCloud) \
	op(MATUSAGE_HeterogeneousVolumes) \
	op(MATUSAGE_StaticMesh) 

enum EMaterialUsage : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialUsage>();
// ********** End Enum EMaterialUsage **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
