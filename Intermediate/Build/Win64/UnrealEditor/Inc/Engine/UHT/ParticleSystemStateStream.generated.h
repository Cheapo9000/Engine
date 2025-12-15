// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateStream/ParticleSystemStateStream.h"

#ifdef ENGINE_ParticleSystemStateStream_generated_h
#error "ParticleSystemStateStream.generated.h already included, missing '#pragma once' in ParticleSystemStateStream.h"
#endif
#define ENGINE_ParticleSystemStateStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParticleSystemStaticState ****************************************
struct Z_Construct_UScriptStruct_FParticleSystemStaticState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_ParticleSystemStateStream_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleSystemStaticState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
	}; \
	uint32 ModifiedFlags = 0; \
	FParticleSystemStaticState() = default; \
	FParticleSystemStaticState(FStateStreamCopyContext& Context, const FParticleSystemStaticState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	{} \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FParticleSystemStaticState& Other) \
	{ \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FParticleSystemStaticState& From, const FParticleSystemStaticState& To) \
	{ \
		ModifiedFlags = 0; \
	}


struct FParticleSystemStaticState;
// ********** End ScriptStruct FParticleSystemStaticState ******************************************

// ********** Begin ScriptStruct FParticleSystemDynamicState ***************************************
struct Z_Construct_UScriptStruct_FParticleSystemDynamicState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_ParticleSystemStateStream_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleSystemDynamicState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
		Field_Transform = 1, \
		Field_SystemAsset = 2, \
	}; \
	uint32 ModifiedFlags = 0; \
	FParticleSystemDynamicState() = default; \
	FParticleSystemDynamicState(FStateStreamCopyContext& Context, const FParticleSystemDynamicState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	,	Transform(Context, Other.Transform) \
	,	SystemAsset(Other.SystemAsset) \
	{} \
	inline bool TransformModified() const { return !!(ModifiedFlags & Field_Transform); } \
	inline void SetTransform(const FTransformHandle& In) { Transform = In; ModifiedFlags |= Field_Transform; } \
	inline const FTransformHandle& GetTransform() const { return Transform; } \
	inline bool SystemAssetModified() const { return !!(ModifiedFlags & Field_SystemAsset); } \
	inline void SetSystemAsset(const TObjectPtr<UFXSystemAsset>& In) { SystemAsset = In; ModifiedFlags |= Field_SystemAsset; } \
	inline const TObjectPtr<UFXSystemAsset>& GetSystemAsset() const { return SystemAsset; } \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		OutHandles[0] = &Transform; \
		return 1; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FParticleSystemDynamicState& Other) \
	{ \
		if (Other.TransformModified() && !StateStreamEquals(Transform, Other.Transform)) \
		{ \
			Transform.Apply(Context, Other.Transform); \
			ModifiedFlags |= Field_Transform; \
		} \
		if (Other.SystemAssetModified() && !StateStreamEquals(SystemAsset, Other.SystemAsset)) \
		{ \
			SystemAsset = Other.SystemAsset; \
			ModifiedFlags |= Field_SystemAsset; \
		} \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FParticleSystemDynamicState& From, const FParticleSystemDynamicState& To) \
	{ \
		ModifiedFlags = 0; \
		if (To.TransformModified()) \
		{ \
			ModifiedFlags |= Field_Transform; \
			Transform.Apply(Context, To.Transform); \
		} \
		if (To.SystemAssetModified()) \
		{ \
			ModifiedFlags |= Field_SystemAsset; \
			StateStreamInterpolate(Context, SystemAsset, From.SystemAsset, To.SystemAsset); \
		} \
	}


struct FParticleSystemDynamicState;
// ********** End ScriptStruct FParticleSystemDynamicState *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_StateStream_ParticleSystemStateStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
