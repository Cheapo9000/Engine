// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateStream/StaticMeshStateStream.h"

#ifdef ENGINE_StaticMeshStateStream_generated_h
#error "StaticMeshStateStream.generated.h already included, missing '#pragma once' in StaticMeshStateStream.h"
#endif
#define ENGINE_StaticMeshStateStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStaticMeshStaticState ********************************************
struct Z_Construct_UScriptStruct_FStaticMeshStaticState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_StaticMeshStateStream_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshStaticState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
	}; \
	uint32 ModifiedFlags = 0; \
	FStaticMeshStaticState() = default; \
	FStaticMeshStaticState(FStateStreamCopyContext& Context, const FStaticMeshStaticState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	{} \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FStaticMeshStaticState& Other) \
	{ \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FStaticMeshStaticState& From, const FStaticMeshStaticState& To) \
	{ \
		ModifiedFlags = 0; \
	}


struct FStaticMeshStaticState;
// ********** End ScriptStruct FStaticMeshStaticState **********************************************

// ********** Begin ScriptStruct FStaticMeshDynamicState *******************************************
struct Z_Construct_UScriptStruct_FStaticMeshDynamicState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_StaticMeshStateStream_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshDynamicState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
		Field_Transform = 1, \
		Field_Mesh = 2, \
		Field_OverrideMaterials = 4, \
		Field_Owners = 8, \
		Field_bOnlyOwnerSee = 16, \
		Field_bOwnerNoSee = 32, \
	}; \
	uint32 ModifiedFlags = 0; \
	FStaticMeshDynamicState() = default; \
	FStaticMeshDynamicState(FStateStreamCopyContext& Context, const FStaticMeshDynamicState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	,	Transform(Context, Other.Transform) \
	,	Mesh(Other.Mesh) \
	,	OverrideMaterials(Other.OverrideMaterials) \
	,	Owners(Other.Owners) \
	,	bOnlyOwnerSee(Other.bOnlyOwnerSee) \
	,	bOwnerNoSee(Other.bOwnerNoSee) \
	{} \
	inline bool TransformModified() const { return !!(ModifiedFlags & Field_Transform); } \
	inline void SetTransform(const FTransformHandle& In) { Transform = In; ModifiedFlags |= Field_Transform; } \
	inline const FTransformHandle& GetTransform() const { return Transform; } \
	inline bool MeshModified() const { return !!(ModifiedFlags & Field_Mesh); } \
	inline void SetMesh(const TObjectPtr<UStaticMesh>& In) { Mesh = In; ModifiedFlags |= Field_Mesh; } \
	inline const TObjectPtr<UStaticMesh>& GetMesh() const { return Mesh; } \
	inline bool OverrideMaterialsModified() const { return !!(ModifiedFlags & Field_OverrideMaterials); } \
	inline void SetOverrideMaterials(const TArray<TObjectPtr<UMaterialInterface>>& In) { OverrideMaterials = In; ModifiedFlags |= Field_OverrideMaterials; } \
	inline const TArray<TObjectPtr<UMaterialInterface>>& GetOverrideMaterials() const { return OverrideMaterials; } \
	inline bool OwnersModified() const { return !!(ModifiedFlags & Field_Owners); } \
	inline void SetOwners(const TArray<uint32>& In) { Owners = In; ModifiedFlags |= Field_Owners; } \
	inline const TArray<uint32>& GetOwners() const { return Owners; } \
	inline bool OnlyOwnerSeeModified() const { return !!(ModifiedFlags & Field_bOnlyOwnerSee); } \
	inline void SetOnlyOwnerSee(const uint8& In) { bOnlyOwnerSee = In; ModifiedFlags |= Field_bOnlyOwnerSee; } \
	inline bool GetOnlyOwnerSee() const { return bOnlyOwnerSee; } \
	inline bool OwnerNoSeeModified() const { return !!(ModifiedFlags & Field_bOwnerNoSee); } \
	inline void SetOwnerNoSee(const uint8& In) { bOwnerNoSee = In; ModifiedFlags |= Field_bOwnerNoSee; } \
	inline bool GetOwnerNoSee() const { return bOwnerNoSee; } \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		OutHandles[0] = &Transform; \
		return 1; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FStaticMeshDynamicState& Other) \
	{ \
		if (Other.TransformModified() && !StateStreamEquals(Transform, Other.Transform)) \
		{ \
			Transform.Apply(Context, Other.Transform); \
			ModifiedFlags |= Field_Transform; \
		} \
		if (Other.MeshModified() && !StateStreamEquals(Mesh, Other.Mesh)) \
		{ \
			Mesh = Other.Mesh; \
			ModifiedFlags |= Field_Mesh; \
		} \
		if (Other.OverrideMaterialsModified() && !StateStreamEquals(OverrideMaterials, Other.OverrideMaterials)) \
		{ \
			OverrideMaterials = Other.OverrideMaterials; \
			ModifiedFlags |= Field_OverrideMaterials; \
		} \
		if (Other.OwnersModified() && !StateStreamEquals(Owners, Other.Owners)) \
		{ \
			Owners = Other.Owners; \
			ModifiedFlags |= Field_Owners; \
		} \
		if (Other.OnlyOwnerSeeModified() && !StateStreamEquals(bOnlyOwnerSee, Other.bOnlyOwnerSee)) \
		{ \
			bOnlyOwnerSee = Other.bOnlyOwnerSee; \
			ModifiedFlags |= Field_bOnlyOwnerSee; \
		} \
		if (Other.OwnerNoSeeModified() && !StateStreamEquals(bOwnerNoSee, Other.bOwnerNoSee)) \
		{ \
			bOwnerNoSee = Other.bOwnerNoSee; \
			ModifiedFlags |= Field_bOwnerNoSee; \
		} \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FStaticMeshDynamicState& From, const FStaticMeshDynamicState& To) \
	{ \
		ModifiedFlags = 0; \
		if (To.TransformModified()) \
		{ \
			ModifiedFlags |= Field_Transform; \
			Transform.Apply(Context, To.Transform); \
		} \
		if (To.MeshModified()) \
		{ \
			ModifiedFlags |= Field_Mesh; \
			StateStreamInterpolate(Context, Mesh, From.Mesh, To.Mesh); \
		} \
		if (To.OverrideMaterialsModified()) \
		{ \
			ModifiedFlags |= Field_OverrideMaterials; \
			StateStreamInterpolate(Context, OverrideMaterials, From.OverrideMaterials, To.OverrideMaterials); \
		} \
		if (To.OwnersModified()) \
		{ \
			ModifiedFlags |= Field_Owners; \
			StateStreamInterpolate(Context, Owners, From.Owners, To.Owners); \
		} \
		if (To.OnlyOwnerSeeModified()) \
		{ \
			ModifiedFlags |= Field_bOnlyOwnerSee; \
			bOnlyOwnerSee = To.bOnlyOwnerSee;\
		} \
		if (To.OwnerNoSeeModified()) \
		{ \
			ModifiedFlags |= Field_bOwnerNoSee; \
			bOwnerNoSee = To.bOwnerNoSee;\
		} \
	}


struct FStaticMeshDynamicState;
// ********** End ScriptStruct FStaticMeshDynamicState *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_StateStream_StaticMeshStateStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
