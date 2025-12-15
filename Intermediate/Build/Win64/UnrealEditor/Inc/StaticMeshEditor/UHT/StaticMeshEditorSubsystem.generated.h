// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshEditorSubsystem.h"

#ifdef STATICMESHEDITOR_StaticMeshEditorSubsystem_generated_h
#error "StaticMeshEditorSubsystem.generated.h already included, missing '#pragma once' in StaticMeshEditorSubsystem.h"
#endif
#define STATICMESHEDITOR_StaticMeshEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AStaticMeshActor;
class UMaterialInterface;
class UMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
enum class EScriptCollisionShapeType : uint8;
struct FCreateProxyMeshActorOptions;
struct FJoinStaticMeshActorsOptions;
struct FMergeStaticMeshActorsOptions;
struct FMeshBuildSettings;
struct FMeshNaniteSettings;
struct FMeshReductionSettings;
struct FStaticMeshReductionOptions;

// ********** Begin Class UStaticMeshEditorSubsystem ***********************************************
#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateProxyMeshActor); \
	DECLARE_FUNCTION(execMergeStaticMeshActors); \
	DECLARE_FUNCTION(execJoinStaticMeshActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshesOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshes); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterialsOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterials); \
	DECLARE_FUNCTION(execGenerateBoxUVChannel); \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel); \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel); \
	DECLARE_FUNCTION(execRemoveUVChannel); \
	DECLARE_FUNCTION(execInsertUVChannel); \
	DECLARE_FUNCTION(execAddUVChannel); \
	DECLARE_FUNCTION(execGetNumUVChannels); \
	DECLARE_FUNCTION(execSetAllowCPUAccess); \
	DECLARE_FUNCTION(execGetNumberMaterials); \
	DECLARE_FUNCTION(execGetNumberVerts); \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs); \
	DECLARE_FUNCTION(execHasInstanceVertexColors); \
	DECLARE_FUNCTION(execHasVertexColors); \
	DECLARE_FUNCTION(execGetLODMaterialSlot); \
	DECLARE_FUNCTION(execSetLODMaterialSlot); \
	DECLARE_FUNCTION(execIsSectionForceOpaqueEnabled); \
	DECLARE_FUNCTION(execEnableSectionForceOpaque); \
	DECLARE_FUNCTION(execIsSectionAffectDistanceFieldLightingEnabled); \
	DECLARE_FUNCTION(execEnableSectionAffectDistanceFieldLighting); \
	DECLARE_FUNCTION(execIsSectionVisibleInRayTracingEnabled); \
	DECLARE_FUNCTION(execEnableSectionVisibleInRayTracing); \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled); \
	DECLARE_FUNCTION(execEnableSectionCollision); \
	DECLARE_FUNCTION(execIsSectionCastShadowEnabled); \
	DECLARE_FUNCTION(execEnableSectionCastShadow); \
	DECLARE_FUNCTION(execRemoveCollisions); \
	DECLARE_FUNCTION(execRemoveCollisionsWithNotification); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetConvexCollisionCount); \
	DECLARE_FUNCTION(execGetCollisionComplexity); \
	DECLARE_FUNCTION(execGetSimpleCollisionCount); \
	DECLARE_FUNCTION(execAddSimpleCollisions); \
	DECLARE_FUNCTION(execAddSimpleCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetNaniteSettings); \
	DECLARE_FUNCTION(execGetNaniteSettings); \
	DECLARE_FUNCTION(execUpdateNaniteSourceFilename); \
	DECLARE_FUNCTION(execGetNaniteSourceFilename); \
	DECLARE_FUNCTION(execImportNaniteHiResMesh); \
	DECLARE_FUNCTION(execSetLodScreenSizes); \
	DECLARE_FUNCTION(execGetLodScreenSizes); \
	DECLARE_FUNCTION(execRemoveLods); \
	DECLARE_FUNCTION(execGetLodCount); \
	DECLARE_FUNCTION(execSetLodFromStaticMesh); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execSetLODGroup); \
	DECLARE_FUNCTION(execGetLODGroup); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execSetLodReductionSettings); \
	DECLARE_FUNCTION(execGetLodReductionSettings); \
	DECLARE_FUNCTION(execSetLods); \
	DECLARE_FUNCTION(execSetLodsWithNotification);


struct Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics;
STATICMESHEDITOR_API UClass* Z_Construct_UClass_UStaticMeshEditorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATICMESHEDITOR_API UClass* ::Z_Construct_UClass_UStaticMeshEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StaticMeshEditor"), Z_Construct_UClass_UStaticMeshEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshEditorSubsystem)


#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshEditorSubsystem(UStaticMeshEditorSubsystem&&) = delete; \
	UStaticMeshEditorSubsystem(const UStaticMeshEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATICMESHEDITOR_API, UStaticMeshEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStaticMeshEditorSubsystem) \
	STATICMESHEDITOR_API virtual ~UStaticMeshEditorSubsystem();


#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_24_PROLOG
#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshEditorSubsystem;

// ********** End Class UStaticMeshEditorSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
