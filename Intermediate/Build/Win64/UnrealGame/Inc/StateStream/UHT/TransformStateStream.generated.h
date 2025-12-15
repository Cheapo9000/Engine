// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransformStateStream.h"

#ifdef STATESTREAM_TransformStateStream_generated_h
#error "TransformStateStream.generated.h already included, missing '#pragma once' in TransformStateStream.h"
#endif
#define STATESTREAM_TransformStateStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTransformStaticState *********************************************
struct Z_Construct_UScriptStruct_FTransformStaticState_Statics;
#define FID_Engine_Source_Runtime_StateStream_Public_TransformStateStream_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformStaticState_Statics; \
	STATESTREAM_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
	}; \
	uint32 ModifiedFlags = 0; \
	FTransformStaticState() = default; \
	FTransformStaticState(FStateStreamCopyContext& Context, const FTransformStaticState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	{} \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FTransformStaticState& Other) \
	{ \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FTransformStaticState& From, const FTransformStaticState& To) \
	{ \
		ModifiedFlags = 0; \
	}


struct FTransformStaticState;
// ********** End ScriptStruct FTransformStaticState ***********************************************

// ********** Begin ScriptStruct FTransformDynamicState ********************************************
struct Z_Construct_UScriptStruct_FTransformDynamicState_Statics;
#define FID_Engine_Source_Runtime_StateStream_Public_TransformStateStream_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformDynamicState_Statics; \
	STATESTREAM_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
		Field_LocalTransform = 1, \
		Field_BoneTransforms = 2, \
		Field_Parent = 4, \
		Field_bVisible = 8, \
	}; \
	uint32 ModifiedFlags = 0; \
	FTransformDynamicState() = default; \
	FTransformDynamicState(FStateStreamCopyContext& Context, const FTransformDynamicState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	,	LocalTransform(Other.LocalTransform) \
	,	BoneTransforms(Other.BoneTransforms) \
	,	Parent(Context, Other.Parent) \
	,	bVisible(Other.bVisible) \
	{} \
	inline bool LocalTransformModified() const { return !!(ModifiedFlags & Field_LocalTransform); } \
	inline void SetLocalTransform(const FTransform& In) { LocalTransform = In; ModifiedFlags |= Field_LocalTransform; } \
	inline const FTransform& GetLocalTransform() const { return LocalTransform; } \
	inline bool BoneTransformsModified() const { return !!(ModifiedFlags & Field_BoneTransforms); } \
	inline void SetBoneTransforms(const TArray<FTransform>& In) { BoneTransforms = In; ModifiedFlags |= Field_BoneTransforms; } \
	inline const TArray<FTransform>& GetBoneTransforms() const { return BoneTransforms; } \
	inline bool ParentModified() const { return !!(ModifiedFlags & Field_Parent); } \
	inline void SetParent(const FTransformHandle& In) { Parent = In; ModifiedFlags |= Field_Parent; } \
	inline const FTransformHandle& GetParent() const { return Parent; } \
	inline bool VisibleModified() const { return !!(ModifiedFlags & Field_bVisible); } \
	inline void SetVisible(const bool& In) { bVisible = In; ModifiedFlags |= Field_bVisible; } \
	inline bool GetVisible() const { return bVisible; } \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		OutHandles[0] = &Parent; \
		return 1; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FTransformDynamicState& Other) \
	{ \
		if (Other.LocalTransformModified() && !StateStreamEquals(LocalTransform, Other.LocalTransform)) \
		{ \
			LocalTransform = Other.LocalTransform; \
			ModifiedFlags |= Field_LocalTransform; \
		} \
		if (Other.BoneTransformsModified() && !StateStreamEquals(BoneTransforms, Other.BoneTransforms)) \
		{ \
			BoneTransforms = Other.BoneTransforms; \
			ModifiedFlags |= Field_BoneTransforms; \
		} \
		if (Other.ParentModified() && !StateStreamEquals(Parent, Other.Parent)) \
		{ \
			Parent.Apply(Context, Other.Parent); \
			ModifiedFlags |= Field_Parent; \
		} \
		if (Other.VisibleModified() && !StateStreamEquals(bVisible, Other.bVisible)) \
		{ \
			bVisible = Other.bVisible; \
			ModifiedFlags |= Field_bVisible; \
		} \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FTransformDynamicState& From, const FTransformDynamicState& To) \
	{ \
		ModifiedFlags = 0; \
		if (To.LocalTransformModified()) \
		{ \
			ModifiedFlags |= Field_LocalTransform; \
			StateStreamInterpolate(Context, LocalTransform, From.LocalTransform, To.LocalTransform); \
		} \
		if (To.BoneTransformsModified()) \
		{ \
			ModifiedFlags |= Field_BoneTransforms; \
			StateStreamInterpolate(Context, BoneTransforms, From.BoneTransforms, To.BoneTransforms); \
		} \
		if (To.ParentModified()) \
		{ \
			ModifiedFlags |= Field_Parent; \
			Parent.Apply(Context, To.Parent); \
		} \
		if (To.VisibleModified()) \
		{ \
			ModifiedFlags |= Field_bVisible; \
			bVisible = To.bVisible;\
		} \
	}


struct FTransformDynamicState;
// ********** End ScriptStruct FTransformDynamicState **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_StateStream_Public_TransformStateStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
