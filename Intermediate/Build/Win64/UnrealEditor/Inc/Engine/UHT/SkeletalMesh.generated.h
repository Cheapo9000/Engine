// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMesh.h"

#ifdef ENGINE_SkeletalMesh_generated_h
#error "SkeletalMesh.generated.h already included, missing '#pragma once' in SkeletalMesh.h"
#endif
#define ENGINE_SkeletalMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UClothingAssetBase;
class UMaterialInterface;
class UMeshDeformer;
class UMeshDeformerCollection;
class UMorphTarget;
class UNodeMappingContainer;
class UObject;
class UPhysicsAsset;
class USkeletalMeshLODSettings;
class USkeletalMeshSocket;
class USkeleton;
enum class EPerQualityLevels : uint8;
struct FSkeletalMaterial;

// ********** Begin ScriptStruct FBoneMirrorInfo ***************************************************
struct Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBoneMirrorInfo;
// ********** End ScriptStruct FBoneMirrorInfo *****************************************************

// ********** Begin ScriptStruct FBoneMirrorExport *************************************************
struct Z_Construct_UScriptStruct_FBoneMirrorExport_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_178_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoneMirrorExport_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBoneMirrorExport;
// ********** End ScriptStruct FBoneMirrorExport ***************************************************

// ********** Begin ScriptStruct FSkeletalMeshClothBuildParams *************************************
struct Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkeletalMeshClothBuildParams;
// ********** End ScriptStruct FSkeletalMeshClothBuildParams ***************************************

// ********** Begin ScriptStruct FClothPhysicsProperties_Legacy ************************************
struct Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_245_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FClothPhysicsProperties_Legacy;
// ********** End ScriptStruct FClothPhysicsProperties_Legacy **************************************

// ********** Begin ScriptStruct FClothingAssetData_Legacy *****************************************
struct Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_318_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FClothingAssetData_Legacy;
// ********** End ScriptStruct FClothingAssetData_Legacy *******************************************

// ********** Begin Class USkeletalMesh ************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetForwardAxis); \
	DECLARE_FUNCTION(execSetOverlayMaterialMaxDrawDistance); \
	DECLARE_FUNCTION(execGetOverlayMaterialMaxDrawDistance); \
	DECLARE_FUNCTION(execSetOverlayMaterial); \
	DECLARE_FUNCTION(execGetOverlayMaterial); \
	DECLARE_FUNCTION(execGetTargetMeshDeformers); \
	DECLARE_FUNCTION(execGetDefaultMeshDeformer); \
	DECLARE_FUNCTION(execK2_GetAllSkinWeightProfileNames); \
	DECLARE_FUNCTION(execIsSectionUsingCloth); \
	DECLARE_FUNCTION(execGetSocketByIndex); \
	DECLARE_FUNCTION(execNumSockets); \
	DECLARE_FUNCTION(execFindSocketAndIndex); \
	DECLARE_FUNCTION(execSetMeshClothingAssets); \
	DECLARE_FUNCTION(execGetMeshClothingAssets); \
	DECLARE_FUNCTION(execK2_GetAllMorphTargetNames); \
	DECLARE_FUNCTION(execSetMorphTargets); \
	DECLARE_FUNCTION(execGetMorphTargetsPtrConv); \
	DECLARE_FUNCTION(execGetNodeMappingContainer); \
	DECLARE_FUNCTION(execGetNodeMappingData); \
	DECLARE_FUNCTION(execGetShadowPhysicsAsset); \
	DECLARE_FUNCTION(execGetPhysicsAsset); \
	DECLARE_FUNCTION(execGetHasVertexColors); \
	DECLARE_FUNCTION(execGetDefaultAnimatingRig); \
	DECLARE_FUNCTION(execSetDefaultAnimatingRig); \
	DECLARE_FUNCTION(execSetLODSettings); \
	DECLARE_FUNCTION(execGetLODSettings); \
	DECLARE_FUNCTION(execGetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execSetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execSetMaterials); \
	DECLARE_FUNCTION(execGetMaterials); \
	DECLARE_FUNCTION(execGetImportedBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetSkeleton); \
	DECLARE_FUNCTION(execGetSkeleton);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAddSocket);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_ACCESSORS \
static void GetThumbnailInfo_WrapperImpl(const void* Object, void* OutValue); \
static void SetThumbnailInfo_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMesh, ENGINE_API)


struct Z_Construct_UClass_USkeletalMesh_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend struct ::Z_Construct_UClass_USkeletalMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkeletalMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMesh, USkinnedAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USkeletalMesh_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMesh*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMesh(USkeletalMesh&&) = delete; \
	USkeletalMesh(const USkeletalMesh&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_438_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_441_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMesh;

// ********** End Class USkeletalMesh **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h

// ********** Begin Enum ESkeletalMeshAsyncProperties **********************************************
#define FOREACH_ENUM_ESKELETALMESHASYNCPROPERTIES(op) \
	op(ESkeletalMeshAsyncProperties::None) \
	op(ESkeletalMeshAsyncProperties::Materials) \
	op(ESkeletalMeshAsyncProperties::Skeleton) \
	op(ESkeletalMeshAsyncProperties::RefSkeleton) \
	op(ESkeletalMeshAsyncProperties::RetargetBasePose) \
	op(ESkeletalMeshAsyncProperties::RefBasesInvMatrix) \
	op(ESkeletalMeshAsyncProperties::MeshClothingAssets) \
	op(ESkeletalMeshAsyncProperties::SourceModels) \
	op(ESkeletalMeshAsyncProperties::HasActiveClothingAssets) \
	op(ESkeletalMeshAsyncProperties::LODSettings) \
	op(ESkeletalMeshAsyncProperties::HasVertexColors) \
	op(ESkeletalMeshAsyncProperties::VertexColorGuid) \
	op(ESkeletalMeshAsyncProperties::MorphTargets) \
	op(ESkeletalMeshAsyncProperties::SkeletalMeshRenderData) \
	op(ESkeletalMeshAsyncProperties::MeshEditorDataObject) \
	op(ESkeletalMeshAsyncProperties::NeverStream) \
	op(ESkeletalMeshAsyncProperties::OverrideLODStreamingSettings) \
	op(ESkeletalMeshAsyncProperties::SupportLODStreaming) \
	op(ESkeletalMeshAsyncProperties::MaxNumStreamedLODs) \
	op(ESkeletalMeshAsyncProperties::MaxNumOptionalLODs) \
	op(ESkeletalMeshAsyncProperties::ImportedModel) \
	op(ESkeletalMeshAsyncProperties::SkinWeightProfiles) \
	op(ESkeletalMeshAsyncProperties::CachedComposedRefPoseMatrices) \
	op(ESkeletalMeshAsyncProperties::SamplingInfo) \
	op(ESkeletalMeshAsyncProperties::NodeMappingData) \
	op(ESkeletalMeshAsyncProperties::ShadowPhysicsAsset) \
	op(ESkeletalMeshAsyncProperties::SkelMirrorTable) \
	op(ESkeletalMeshAsyncProperties::MinLod) \
	op(ESkeletalMeshAsyncProperties::DisableBelowMinLodStripping) \
	op(ESkeletalMeshAsyncProperties::SkelMirrorAxis) \
	op(ESkeletalMeshAsyncProperties::SkelMirrorFlipAxis) \
	op(ESkeletalMeshAsyncProperties::DefaultAnimationRig) \
	op(ESkeletalMeshAsyncProperties::NegativeBoundsExtension) \
	op(ESkeletalMeshAsyncProperties::PositiveBoundsExtension) \
	op(ESkeletalMeshAsyncProperties::ExtendedBounds) \
	op(ESkeletalMeshAsyncProperties::EnablePerPolyCollision) \
	op(ESkeletalMeshAsyncProperties::BodySetup) \
	op(ESkeletalMeshAsyncProperties::MorphTargetIndexMap) \
	op(ESkeletalMeshAsyncProperties::FloorOffset) \
	op(ESkeletalMeshAsyncProperties::ImportedBounds) \
	op(ESkeletalMeshAsyncProperties::PhysicsAsset) \
	op(ESkeletalMeshAsyncProperties::AssetImportData) \
	op(ESkeletalMeshAsyncProperties::ThumbnailInfo) \
	op(ESkeletalMeshAsyncProperties::HasCustomDefaultEditorCamera) \
	op(ESkeletalMeshAsyncProperties::DefaultEditorCameraLocation) \
	op(ESkeletalMeshAsyncProperties::DefaultEditorCameraRotation) \
	op(ESkeletalMeshAsyncProperties::RequiresLODScreenSizeConversion) \
	op(ESkeletalMeshAsyncProperties::PostProcessAnimBlueprint) \
	op(ESkeletalMeshAsyncProperties::DefaultEditorCameraLookAt) \
	op(ESkeletalMeshAsyncProperties::PreviewAttachedAssetContainer) \
	op(ESkeletalMeshAsyncProperties::DefaultEditorCameraOrthoZoom) \
	op(ESkeletalMeshAsyncProperties::RequiresLODHysteresisConversion) \
	op(ESkeletalMeshAsyncProperties::bSupportRayTracing) \
	op(ESkeletalMeshAsyncProperties::RayTracingMinLOD) \
	op(ESkeletalMeshAsyncProperties::ClothLODBiasMode) \
	op(ESkeletalMeshAsyncProperties::DefaultMeshDeformer) \
	op(ESkeletalMeshAsyncProperties::OverlayMaterial) \
	op(ESkeletalMeshAsyncProperties::OverlayMaterialMaxDrawDistance) \
	op(ESkeletalMeshAsyncProperties::TargetMeshDeformers) \
	op(ESkeletalMeshAsyncProperties::All) 

enum class ESkeletalMeshAsyncProperties : uint64;
template<> struct TIsUEnumClass<ESkeletalMeshAsyncProperties> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkeletalMeshAsyncProperties>();
// ********** End Enum ESkeletalMeshAsyncProperties ************************************************

// ********** Begin Enum EClothLODBiasMode *********************************************************
#define FOREACH_ENUM_ECLOTHLODBIASMODE(op) \
	op(EClothLODBiasMode::MappingsToSameLOD) \
	op(EClothLODBiasMode::MappingsToMinLOD) \
	op(EClothLODBiasMode::MappingsToAnyLOD) 

enum class EClothLODBiasMode : uint8;
template<> struct TIsUEnumClass<EClothLODBiasMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EClothLODBiasMode>();
// ********** End Enum EClothLODBiasMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
