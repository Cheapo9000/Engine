// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateStream/SkinnedMeshStateStream.h"

#ifdef ENGINE_SkinnedMeshStateStream_generated_h
#error "SkinnedMeshStateStream.generated.h already included, missing '#pragma once' in SkinnedMeshStateStream.h"
#endif
#define ENGINE_SkinnedMeshStateStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSkinnedMeshStaticState *******************************************
struct Z_Construct_UScriptStruct_FSkinnedMeshStaticState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_SkinnedMeshStateStream_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkinnedMeshStaticState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
		Field_MaterialRelevance = 1, \
	}; \
	uint32 ModifiedFlags = 0; \
	FSkinnedMeshStaticState() = default; \
	FSkinnedMeshStaticState(FStateStreamCopyContext& Context, const FSkinnedMeshStaticState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	,	MaterialRelevance(Other.MaterialRelevance) \
	{} \
	inline bool MaterialRelevanceModified() const { return !!(ModifiedFlags & Field_MaterialRelevance); } \
	inline void SetMaterialRelevance(const uint64& In) { MaterialRelevance = In; ModifiedFlags |= Field_MaterialRelevance; } \
	inline const uint64& GetMaterialRelevance() const { return MaterialRelevance; } \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FSkinnedMeshStaticState& Other) \
	{ \
		if (Other.MaterialRelevanceModified() && !StateStreamEquals(MaterialRelevance, Other.MaterialRelevance)) \
		{ \
			MaterialRelevance = Other.MaterialRelevance; \
			ModifiedFlags |= Field_MaterialRelevance; \
		} \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FSkinnedMeshStaticState& From, const FSkinnedMeshStaticState& To) \
	{ \
		ModifiedFlags = 0; \
		if (To.MaterialRelevanceModified()) \
		{ \
			ModifiedFlags |= Field_MaterialRelevance; \
			StateStreamInterpolate(Context, MaterialRelevance, From.MaterialRelevance, To.MaterialRelevance); \
		} \
	}


struct FSkinnedMeshStaticState;
// ********** End ScriptStruct FSkinnedMeshStaticState *********************************************

// ********** Begin ScriptStruct FSkinnedMeshDynamicState ******************************************
struct Z_Construct_UScriptStruct_FSkinnedMeshDynamicState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_SkinnedMeshStateStream_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkinnedMeshDynamicState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
		Field_Transform = 1, \
		Field_SkinnedAsset = 2, \
		Field_OverrideMaterials = 4, \
	}; \
	uint32 ModifiedFlags = 0; \
	FSkinnedMeshDynamicState() = default; \
	FSkinnedMeshDynamicState(FStateStreamCopyContext& Context, const FSkinnedMeshDynamicState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	,	Transform(Context, Other.Transform) \
	,	SkinnedAsset(Other.SkinnedAsset) \
	,	OverrideMaterials(Other.OverrideMaterials) \
	{} \
	inline bool TransformModified() const { return !!(ModifiedFlags & Field_Transform); } \
	inline void SetTransform(const FTransformHandle& In) { Transform = In; ModifiedFlags |= Field_Transform; } \
	inline const FTransformHandle& GetTransform() const { return Transform; } \
	inline bool SkinnedAssetModified() const { return !!(ModifiedFlags & Field_SkinnedAsset); } \
	inline void SetSkinnedAsset(const TObjectPtr<USkinnedAsset>& In) { SkinnedAsset = In; ModifiedFlags |= Field_SkinnedAsset; } \
	inline const TObjectPtr<USkinnedAsset>& GetSkinnedAsset() const { return SkinnedAsset; } \
	inline bool OverrideMaterialsModified() const { return !!(ModifiedFlags & Field_OverrideMaterials); } \
	inline void SetOverrideMaterials(const TArray<TObjectPtr<UMaterialInterface>>& In) { OverrideMaterials = In; ModifiedFlags |= Field_OverrideMaterials; } \
	inline const TArray<TObjectPtr<UMaterialInterface>>& GetOverrideMaterials() const { return OverrideMaterials; } \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		OutHandles[0] = &Transform; \
		return 1; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FSkinnedMeshDynamicState& Other) \
	{ \
		if (Other.TransformModified() && !StateStreamEquals(Transform, Other.Transform)) \
		{ \
			Transform.Apply(Context, Other.Transform); \
			ModifiedFlags |= Field_Transform; \
		} \
		if (Other.SkinnedAssetModified() && !StateStreamEquals(SkinnedAsset, Other.SkinnedAsset)) \
		{ \
			SkinnedAsset = Other.SkinnedAsset; \
			ModifiedFlags |= Field_SkinnedAsset; \
		} \
		if (Other.OverrideMaterialsModified() && !StateStreamEquals(OverrideMaterials, Other.OverrideMaterials)) \
		{ \
			OverrideMaterials = Other.OverrideMaterials; \
			ModifiedFlags |= Field_OverrideMaterials; \
		} \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FSkinnedMeshDynamicState& From, const FSkinnedMeshDynamicState& To) \
	{ \
		ModifiedFlags = 0; \
		if (To.TransformModified()) \
		{ \
			ModifiedFlags |= Field_Transform; \
			Transform.Apply(Context, To.Transform); \
		} \
		if (To.SkinnedAssetModified()) \
		{ \
			ModifiedFlags |= Field_SkinnedAsset; \
			StateStreamInterpolate(Context, SkinnedAsset, From.SkinnedAsset, To.SkinnedAsset); \
		} \
		if (To.OverrideMaterialsModified()) \
		{ \
			ModifiedFlags |= Field_OverrideMaterials; \
			StateStreamInterpolate(Context, OverrideMaterials, From.OverrideMaterials, To.OverrideMaterials); \
		} \
	}


struct FSkinnedMeshDynamicState;
// ********** End ScriptStruct FSkinnedMeshDynamicState ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_StateStream_SkinnedMeshStateStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
