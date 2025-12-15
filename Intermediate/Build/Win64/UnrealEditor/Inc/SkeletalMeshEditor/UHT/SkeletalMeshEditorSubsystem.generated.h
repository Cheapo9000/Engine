// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMeshEditorSubsystem.h"

#ifdef SKELETALMESHEDITOR_SkeletalMeshEditorSubsystem_generated_h
#error "SkeletalMeshEditorSubsystem.generated.h already included, missing '#pragma once' in SkeletalMeshEditorSubsystem.h"
#endif
#define SKELETALMESHEDITOR_SkeletalMeshEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UPhysicsAsset;
class USkeletalMesh;
class USkeleton;
class UTexture2D;
enum class ESkelSubSysQueryCurvesMetatdataNamesFilter : uint8;
struct FSkeletalMeshBuildSettings;

// ********** Begin Class USkeletalMeshEditorSubsystem *********************************************
#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkeletonCurveMetaDataNames); \
	DECLARE_FUNCTION(execGetMorphTargetsGeneratedByEngine); \
	DECLARE_FUNCTION(execSetMorphTargetsToGeneratedByEngineForAllSkeletalMesh); \
	DECLARE_FUNCTION(execSetMorphTargetsToGeneratedByEngine); \
	DECLARE_FUNCTION(execAssignPhysicsAsset); \
	DECLARE_FUNCTION(execIsPhysicsAssetCompatible); \
	DECLARE_FUNCTION(execCreatePhysicsAsset); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execStripLODGeometry); \
	DECLARE_FUNCTION(execRemoveLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execGetLODCount); \
	DECLARE_FUNCTION(execRenameSocket); \
	DECLARE_FUNCTION(execGetLODMaterialSlot); \
	DECLARE_FUNCTION(execSetSkeletalMeshOverlayMaterial); \
	DECLARE_FUNCTION(execGetSkeletalMeshOverlayMaterial); \
	DECLARE_FUNCTION(execSetMaterialSlotOverlayMaterial); \
	DECLARE_FUNCTION(execGetMaterialSlotOverlayMaterial); \
	DECLARE_FUNCTION(execSetSectionVisibleInRayTracing); \
	DECLARE_FUNCTION(execGetSectionVisibleInRayTracing); \
	DECLARE_FUNCTION(execSetSectionCastShadow); \
	DECLARE_FUNCTION(execGetSectionCastShadow); \
	DECLARE_FUNCTION(execSetSectionRecomputeTangentsVertexMaskChannel); \
	DECLARE_FUNCTION(execGetSectionRecomputeTangentsVertexMaskChannel); \
	DECLARE_FUNCTION(execSetSectionRecomputeTangent); \
	DECLARE_FUNCTION(execGetSectionRecomputeTangent); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetNumVerts); \
	DECLARE_FUNCTION(execRegenerateLOD);


struct Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics;
SKELETALMESHEDITOR_API UClass* Z_Construct_UClass_USkeletalMeshEditorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHEDITOR_API UClass* ::Z_Construct_UClass_USkeletalMeshEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshEditor"), Z_Construct_UClass_USkeletalMeshEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshEditorSubsystem)


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshEditorSubsystem(USkeletalMeshEditorSubsystem&&) = delete; \
	USkeletalMeshEditorSubsystem(const USkeletalMeshEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHEDITOR_API, USkeletalMeshEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkeletalMeshEditorSubsystem) \
	SKELETALMESHEDITOR_API virtual ~USkeletalMeshEditorSubsystem();


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_38_PROLOG
#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshEditorSubsystem;

// ********** End Class USkeletalMeshEditorSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h

// ********** Begin Enum ESkelSubSysQueryCurvesMetatdataNamesFilter ********************************
#define FOREACH_ENUM_ESKELSUBSYSQUERYCURVESMETATDATANAMESFILTER(op) \
	op(ESkelSubSysQueryCurvesMetatdataNamesFilter::All) \
	op(ESkelSubSysQueryCurvesMetatdataNamesFilter::MorphTargetOnly) \
	op(ESkelSubSysQueryCurvesMetatdataNamesFilter::MaterialOnly) 

enum class ESkelSubSysQueryCurvesMetatdataNamesFilter : uint8;
template<> struct TIsUEnumClass<ESkelSubSysQueryCurvesMetatdataNamesFilter> { enum { Value = true }; };
template<> SKELETALMESHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkelSubSysQueryCurvesMetatdataNamesFilter>();
// ********** End Enum ESkelSubSysQueryCurvesMetatdataNamesFilter **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
