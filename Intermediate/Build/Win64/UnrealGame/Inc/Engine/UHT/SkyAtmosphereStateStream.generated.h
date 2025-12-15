// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateStream/SkyAtmosphereStateStream.h"

#ifdef ENGINE_SkyAtmosphereStateStream_generated_h
#error "SkyAtmosphereStateStream.generated.h already included, missing '#pragma once' in SkyAtmosphereStateStream.h"
#endif
#define ENGINE_SkyAtmosphereStateStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSkyAtmosphereStaticState *****************************************
struct Z_Construct_UScriptStruct_FSkyAtmosphereStaticState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_SkyAtmosphereStateStream_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkyAtmosphereStaticState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
	}; \
	uint32 ModifiedFlags = 0; \
	FSkyAtmosphereStaticState() = default; \
	FSkyAtmosphereStaticState(FStateStreamCopyContext& Context, const FSkyAtmosphereStaticState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	{} \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FSkyAtmosphereStaticState& Other) \
	{ \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FSkyAtmosphereStaticState& From, const FSkyAtmosphereStaticState& To) \
	{ \
		ModifiedFlags = 0; \
	}


struct FSkyAtmosphereStaticState;
// ********** End ScriptStruct FSkyAtmosphereStaticState *******************************************

// ********** Begin ScriptStruct FOverrideAtmosphericLight *****************************************
struct Z_Construct_UScriptStruct_FOverrideAtmosphericLight_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_SkyAtmosphereStateStream_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOverrideAtmosphericLight_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FOverrideAtmosphericLight;
// ********** End ScriptStruct FOverrideAtmosphericLight *******************************************

// ********** Begin ScriptStruct FSkyAtmosphereDynamicState ****************************************
struct Z_Construct_UScriptStruct_FSkyAtmosphereDynamicState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_SkyAtmosphereStateStream_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkyAtmosphereDynamicState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
		Field_TransformMode = 1, \
		Field_BottomRadius = 2, \
		Field_GroundAlbedo = 4, \
		Field_AtmosphereHeight = 8, \
		Field_MultiScatteringFactor = 16, \
		Field_TraceSampleCountScale = 32, \
		Field_RayleighScatteringScale = 64, \
		Field_RayleighScattering = 128, \
		Field_RayleighExponentialDistribution = 256, \
		Field_MieScatteringScale = 512, \
		Field_MieScattering = 1024, \
		Field_MieAbsorptionScale = 2048, \
		Field_MieAbsorption = 4096, \
		Field_MieAnisotropy = 8192, \
		Field_MieExponentialDistribution = 16384, \
		Field_OtherAbsorptionScale = 32768, \
		Field_OtherAbsorption = 65536, \
		Field_OtherTentDistributionTipAltitude = 131072, \
		Field_OtherTentDistributionTipValue = 262144, \
		Field_OtherTentDistributionWidth = 524288, \
		Field_SkyLuminanceFactor = 1048576, \
		Field_SkyAndAerialPerspectiveLuminanceFactor = 2097152, \
		Field_AerialPespectiveViewDistanceScale = 4194304, \
		Field_HeightFogContribution = 8388608, \
		Field_TransmittanceMinLightElevationAngle = 16777216, \
		Field_AerialPerspectiveStartDepth = 33554432, \
		Field_bHoldout = 67108864, \
		Field_bRenderInMainPass = 134217728, \
		Field_bBuilt = 268435456, \
		Field_ComponentTransform = 536870912, \
		Field_OverrideAtmosphericLight = 1073741824, \
	}; \
	uint32 ModifiedFlags = 0; \
	FSkyAtmosphereDynamicState() = default; \
	FSkyAtmosphereDynamicState(FStateStreamCopyContext& Context, const FSkyAtmosphereDynamicState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	,	TransformMode(Other.TransformMode) \
	,	BottomRadius(Other.BottomRadius) \
	,	GroundAlbedo(Other.GroundAlbedo) \
	,	AtmosphereHeight(Other.AtmosphereHeight) \
	,	MultiScatteringFactor(Other.MultiScatteringFactor) \
	,	TraceSampleCountScale(Other.TraceSampleCountScale) \
	,	RayleighScatteringScale(Other.RayleighScatteringScale) \
	,	RayleighScattering(Other.RayleighScattering) \
	,	RayleighExponentialDistribution(Other.RayleighExponentialDistribution) \
	,	MieScatteringScale(Other.MieScatteringScale) \
	,	MieScattering(Other.MieScattering) \
	,	MieAbsorptionScale(Other.MieAbsorptionScale) \
	,	MieAbsorption(Other.MieAbsorption) \
	,	MieAnisotropy(Other.MieAnisotropy) \
	,	MieExponentialDistribution(Other.MieExponentialDistribution) \
	,	OtherAbsorptionScale(Other.OtherAbsorptionScale) \
	,	OtherAbsorption(Other.OtherAbsorption) \
	,	OtherTentDistributionTipAltitude(Other.OtherTentDistributionTipAltitude) \
	,	OtherTentDistributionTipValue(Other.OtherTentDistributionTipValue) \
	,	OtherTentDistributionWidth(Other.OtherTentDistributionWidth) \
	,	SkyLuminanceFactor(Other.SkyLuminanceFactor) \
	,	SkyAndAerialPerspectiveLuminanceFactor(Other.SkyAndAerialPerspectiveLuminanceFactor) \
	,	AerialPespectiveViewDistanceScale(Other.AerialPespectiveViewDistanceScale) \
	,	HeightFogContribution(Other.HeightFogContribution) \
	,	TransmittanceMinLightElevationAngle(Other.TransmittanceMinLightElevationAngle) \
	,	AerialPerspectiveStartDepth(Other.AerialPerspectiveStartDepth) \
	,	bHoldout(Other.bHoldout) \
	,	bRenderInMainPass(Other.bRenderInMainPass) \
	,	bBuilt(Other.bBuilt) \
	,	ComponentTransform(Other.ComponentTransform) \
	,	OverrideAtmosphericLight(Other.OverrideAtmosphericLight) \
	{} \
	inline bool TransformModeModified() const { return !!(ModifiedFlags & Field_TransformMode); } \
	inline void SetTransformMode(const ESkyAtmosphereTransformMode& In) { TransformMode = In; ModifiedFlags |= Field_TransformMode; } \
	inline const ESkyAtmosphereTransformMode& GetTransformMode() const { return TransformMode; } \
	inline bool BottomRadiusModified() const { return !!(ModifiedFlags & Field_BottomRadius); } \
	inline void SetBottomRadius(const float& In) { BottomRadius = In; ModifiedFlags |= Field_BottomRadius; } \
	inline const float& GetBottomRadius() const { return BottomRadius; } \
	inline bool GroundAlbedoModified() const { return !!(ModifiedFlags & Field_GroundAlbedo); } \
	inline void SetGroundAlbedo(const FColor& In) { GroundAlbedo = In; ModifiedFlags |= Field_GroundAlbedo; } \
	inline const FColor& GetGroundAlbedo() const { return GroundAlbedo; } \
	inline bool AtmosphereHeightModified() const { return !!(ModifiedFlags & Field_AtmosphereHeight); } \
	inline void SetAtmosphereHeight(const float& In) { AtmosphereHeight = In; ModifiedFlags |= Field_AtmosphereHeight; } \
	inline const float& GetAtmosphereHeight() const { return AtmosphereHeight; } \
	inline bool MultiScatteringFactorModified() const { return !!(ModifiedFlags & Field_MultiScatteringFactor); } \
	inline void SetMultiScatteringFactor(const float& In) { MultiScatteringFactor = In; ModifiedFlags |= Field_MultiScatteringFactor; } \
	inline const float& GetMultiScatteringFactor() const { return MultiScatteringFactor; } \
	inline bool TraceSampleCountScaleModified() const { return !!(ModifiedFlags & Field_TraceSampleCountScale); } \
	inline void SetTraceSampleCountScale(const float& In) { TraceSampleCountScale = In; ModifiedFlags |= Field_TraceSampleCountScale; } \
	inline const float& GetTraceSampleCountScale() const { return TraceSampleCountScale; } \
	inline bool RayleighScatteringScaleModified() const { return !!(ModifiedFlags & Field_RayleighScatteringScale); } \
	inline void SetRayleighScatteringScale(const float& In) { RayleighScatteringScale = In; ModifiedFlags |= Field_RayleighScatteringScale; } \
	inline const float& GetRayleighScatteringScale() const { return RayleighScatteringScale; } \
	inline bool RayleighScatteringModified() const { return !!(ModifiedFlags & Field_RayleighScattering); } \
	inline void SetRayleighScattering(const FLinearColor& In) { RayleighScattering = In; ModifiedFlags |= Field_RayleighScattering; } \
	inline const FLinearColor& GetRayleighScattering() const { return RayleighScattering; } \
	inline bool RayleighExponentialDistributionModified() const { return !!(ModifiedFlags & Field_RayleighExponentialDistribution); } \
	inline void SetRayleighExponentialDistribution(const float& In) { RayleighExponentialDistribution = In; ModifiedFlags |= Field_RayleighExponentialDistribution; } \
	inline const float& GetRayleighExponentialDistribution() const { return RayleighExponentialDistribution; } \
	inline bool MieScatteringScaleModified() const { return !!(ModifiedFlags & Field_MieScatteringScale); } \
	inline void SetMieScatteringScale(const float& In) { MieScatteringScale = In; ModifiedFlags |= Field_MieScatteringScale; } \
	inline const float& GetMieScatteringScale() const { return MieScatteringScale; } \
	inline bool MieScatteringModified() const { return !!(ModifiedFlags & Field_MieScattering); } \
	inline void SetMieScattering(const FLinearColor& In) { MieScattering = In; ModifiedFlags |= Field_MieScattering; } \
	inline const FLinearColor& GetMieScattering() const { return MieScattering; } \
	inline bool MieAbsorptionScaleModified() const { return !!(ModifiedFlags & Field_MieAbsorptionScale); } \
	inline void SetMieAbsorptionScale(const float& In) { MieAbsorptionScale = In; ModifiedFlags |= Field_MieAbsorptionScale; } \
	inline const float& GetMieAbsorptionScale() const { return MieAbsorptionScale; } \
	inline bool MieAbsorptionModified() const { return !!(ModifiedFlags & Field_MieAbsorption); } \
	inline void SetMieAbsorption(const FLinearColor& In) { MieAbsorption = In; ModifiedFlags |= Field_MieAbsorption; } \
	inline const FLinearColor& GetMieAbsorption() const { return MieAbsorption; } \
	inline bool MieAnisotropyModified() const { return !!(ModifiedFlags & Field_MieAnisotropy); } \
	inline void SetMieAnisotropy(const float& In) { MieAnisotropy = In; ModifiedFlags |= Field_MieAnisotropy; } \
	inline const float& GetMieAnisotropy() const { return MieAnisotropy; } \
	inline bool MieExponentialDistributionModified() const { return !!(ModifiedFlags & Field_MieExponentialDistribution); } \
	inline void SetMieExponentialDistribution(const float& In) { MieExponentialDistribution = In; ModifiedFlags |= Field_MieExponentialDistribution; } \
	inline const float& GetMieExponentialDistribution() const { return MieExponentialDistribution; } \
	inline bool OtherAbsorptionScaleModified() const { return !!(ModifiedFlags & Field_OtherAbsorptionScale); } \
	inline void SetOtherAbsorptionScale(const float& In) { OtherAbsorptionScale = In; ModifiedFlags |= Field_OtherAbsorptionScale; } \
	inline const float& GetOtherAbsorptionScale() const { return OtherAbsorptionScale; } \
	inline bool OtherAbsorptionModified() const { return !!(ModifiedFlags & Field_OtherAbsorption); } \
	inline void SetOtherAbsorption(const FLinearColor& In) { OtherAbsorption = In; ModifiedFlags |= Field_OtherAbsorption; } \
	inline const FLinearColor& GetOtherAbsorption() const { return OtherAbsorption; } \
	inline bool OtherTentDistributionTipAltitudeModified() const { return !!(ModifiedFlags & Field_OtherTentDistributionTipAltitude); } \
	inline void SetOtherTentDistributionTipAltitude(const float& In) { OtherTentDistributionTipAltitude = In; ModifiedFlags |= Field_OtherTentDistributionTipAltitude; } \
	inline const float& GetOtherTentDistributionTipAltitude() const { return OtherTentDistributionTipAltitude; } \
	inline bool OtherTentDistributionTipValueModified() const { return !!(ModifiedFlags & Field_OtherTentDistributionTipValue); } \
	inline void SetOtherTentDistributionTipValue(const float& In) { OtherTentDistributionTipValue = In; ModifiedFlags |= Field_OtherTentDistributionTipValue; } \
	inline const float& GetOtherTentDistributionTipValue() const { return OtherTentDistributionTipValue; } \
	inline bool OtherTentDistributionWidthModified() const { return !!(ModifiedFlags & Field_OtherTentDistributionWidth); } \
	inline void SetOtherTentDistributionWidth(const float& In) { OtherTentDistributionWidth = In; ModifiedFlags |= Field_OtherTentDistributionWidth; } \
	inline const float& GetOtherTentDistributionWidth() const { return OtherTentDistributionWidth; } \
	inline bool SkyLuminanceFactorModified() const { return !!(ModifiedFlags & Field_SkyLuminanceFactor); } \
	inline void SetSkyLuminanceFactor(const FLinearColor& In) { SkyLuminanceFactor = In; ModifiedFlags |= Field_SkyLuminanceFactor; } \
	inline const FLinearColor& GetSkyLuminanceFactor() const { return SkyLuminanceFactor; } \
	inline bool SkyAndAerialPerspectiveLuminanceFactorModified() const { return !!(ModifiedFlags & Field_SkyAndAerialPerspectiveLuminanceFactor); } \
	inline void SetSkyAndAerialPerspectiveLuminanceFactor(const FLinearColor& In) { SkyAndAerialPerspectiveLuminanceFactor = In; ModifiedFlags |= Field_SkyAndAerialPerspectiveLuminanceFactor; } \
	inline const FLinearColor& GetSkyAndAerialPerspectiveLuminanceFactor() const { return SkyAndAerialPerspectiveLuminanceFactor; } \
	inline bool AerialPespectiveViewDistanceScaleModified() const { return !!(ModifiedFlags & Field_AerialPespectiveViewDistanceScale); } \
	inline void SetAerialPespectiveViewDistanceScale(const float& In) { AerialPespectiveViewDistanceScale = In; ModifiedFlags |= Field_AerialPespectiveViewDistanceScale; } \
	inline const float& GetAerialPespectiveViewDistanceScale() const { return AerialPespectiveViewDistanceScale; } \
	inline bool HeightFogContributionModified() const { return !!(ModifiedFlags & Field_HeightFogContribution); } \
	inline void SetHeightFogContribution(const float& In) { HeightFogContribution = In; ModifiedFlags |= Field_HeightFogContribution; } \
	inline const float& GetHeightFogContribution() const { return HeightFogContribution; } \
	inline bool TransmittanceMinLightElevationAngleModified() const { return !!(ModifiedFlags & Field_TransmittanceMinLightElevationAngle); } \
	inline void SetTransmittanceMinLightElevationAngle(const float& In) { TransmittanceMinLightElevationAngle = In; ModifiedFlags |= Field_TransmittanceMinLightElevationAngle; } \
	inline const float& GetTransmittanceMinLightElevationAngle() const { return TransmittanceMinLightElevationAngle; } \
	inline bool AerialPerspectiveStartDepthModified() const { return !!(ModifiedFlags & Field_AerialPerspectiveStartDepth); } \
	inline void SetAerialPerspectiveStartDepth(const float& In) { AerialPerspectiveStartDepth = In; ModifiedFlags |= Field_AerialPerspectiveStartDepth; } \
	inline const float& GetAerialPerspectiveStartDepth() const { return AerialPerspectiveStartDepth; } \
	inline bool HoldoutModified() const { return !!(ModifiedFlags & Field_bHoldout); } \
	inline void SetHoldout(const uint8& In) { bHoldout = In; ModifiedFlags |= Field_bHoldout; } \
	inline bool GetHoldout() const { return bHoldout; } \
	inline bool RenderInMainPassModified() const { return !!(ModifiedFlags & Field_bRenderInMainPass); } \
	inline void SetRenderInMainPass(const uint8& In) { bRenderInMainPass = In; ModifiedFlags |= Field_bRenderInMainPass; } \
	inline bool GetRenderInMainPass() const { return bRenderInMainPass; } \
	inline bool BuiltModified() const { return !!(ModifiedFlags & Field_bBuilt); } \
	inline void SetBuilt(const uint8& In) { bBuilt = In; ModifiedFlags |= Field_bBuilt; } \
	inline bool GetBuilt() const { return bBuilt; } \
	inline bool ComponentTransformModified() const { return !!(ModifiedFlags & Field_ComponentTransform); } \
	inline void SetComponentTransform(const FTransform& In) { ComponentTransform = In; ModifiedFlags |= Field_ComponentTransform; } \
	inline const FTransform& GetComponentTransform() const { return ComponentTransform; } \
	inline bool OverrideAtmosphericLightModified() const { return !!(ModifiedFlags & Field_OverrideAtmosphericLight); } \
	inline void SetOverrideAtmosphericLight(const FOverrideAtmosphericLight& In) { OverrideAtmosphericLight = In; ModifiedFlags |= Field_OverrideAtmosphericLight; } \
	inline const FOverrideAtmosphericLight& GetOverrideAtmosphericLight() const { return OverrideAtmosphericLight; } \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FSkyAtmosphereDynamicState& Other) \
	{ \
		if (Other.TransformModeModified() && !StateStreamEquals(TransformMode, Other.TransformMode)) \
		{ \
			TransformMode = Other.TransformMode; \
			ModifiedFlags |= Field_TransformMode; \
		} \
		if (Other.BottomRadiusModified() && !StateStreamEquals(BottomRadius, Other.BottomRadius)) \
		{ \
			BottomRadius = Other.BottomRadius; \
			ModifiedFlags |= Field_BottomRadius; \
		} \
		if (Other.GroundAlbedoModified() && !StateStreamEquals(GroundAlbedo, Other.GroundAlbedo)) \
		{ \
			GroundAlbedo = Other.GroundAlbedo; \
			ModifiedFlags |= Field_GroundAlbedo; \
		} \
		if (Other.AtmosphereHeightModified() && !StateStreamEquals(AtmosphereHeight, Other.AtmosphereHeight)) \
		{ \
			AtmosphereHeight = Other.AtmosphereHeight; \
			ModifiedFlags |= Field_AtmosphereHeight; \
		} \
		if (Other.MultiScatteringFactorModified() && !StateStreamEquals(MultiScatteringFactor, Other.MultiScatteringFactor)) \
		{ \
			MultiScatteringFactor = Other.MultiScatteringFactor; \
			ModifiedFlags |= Field_MultiScatteringFactor; \
		} \
		if (Other.TraceSampleCountScaleModified() && !StateStreamEquals(TraceSampleCountScale, Other.TraceSampleCountScale)) \
		{ \
			TraceSampleCountScale = Other.TraceSampleCountScale; \
			ModifiedFlags |= Field_TraceSampleCountScale; \
		} \
		if (Other.RayleighScatteringScaleModified() && !StateStreamEquals(RayleighScatteringScale, Other.RayleighScatteringScale)) \
		{ \
			RayleighScatteringScale = Other.RayleighScatteringScale; \
			ModifiedFlags |= Field_RayleighScatteringScale; \
		} \
		if (Other.RayleighScatteringModified() && !StateStreamEquals(RayleighScattering, Other.RayleighScattering)) \
		{ \
			RayleighScattering = Other.RayleighScattering; \
			ModifiedFlags |= Field_RayleighScattering; \
		} \
		if (Other.RayleighExponentialDistributionModified() && !StateStreamEquals(RayleighExponentialDistribution, Other.RayleighExponentialDistribution)) \
		{ \
			RayleighExponentialDistribution = Other.RayleighExponentialDistribution; \
			ModifiedFlags |= Field_RayleighExponentialDistribution; \
		} \
		if (Other.MieScatteringScaleModified() && !StateStreamEquals(MieScatteringScale, Other.MieScatteringScale)) \
		{ \
			MieScatteringScale = Other.MieScatteringScale; \
			ModifiedFlags |= Field_MieScatteringScale; \
		} \
		if (Other.MieScatteringModified() && !StateStreamEquals(MieScattering, Other.MieScattering)) \
		{ \
			MieScattering = Other.MieScattering; \
			ModifiedFlags |= Field_MieScattering; \
		} \
		if (Other.MieAbsorptionScaleModified() && !StateStreamEquals(MieAbsorptionScale, Other.MieAbsorptionScale)) \
		{ \
			MieAbsorptionScale = Other.MieAbsorptionScale; \
			ModifiedFlags |= Field_MieAbsorptionScale; \
		} \
		if (Other.MieAbsorptionModified() && !StateStreamEquals(MieAbsorption, Other.MieAbsorption)) \
		{ \
			MieAbsorption = Other.MieAbsorption; \
			ModifiedFlags |= Field_MieAbsorption; \
		} \
		if (Other.MieAnisotropyModified() && !StateStreamEquals(MieAnisotropy, Other.MieAnisotropy)) \
		{ \
			MieAnisotropy = Other.MieAnisotropy; \
			ModifiedFlags |= Field_MieAnisotropy; \
		} \
		if (Other.MieExponentialDistributionModified() && !StateStreamEquals(MieExponentialDistribution, Other.MieExponentialDistribution)) \
		{ \
			MieExponentialDistribution = Other.MieExponentialDistribution; \
			ModifiedFlags |= Field_MieExponentialDistribution; \
		} \
		if (Other.OtherAbsorptionScaleModified() && !StateStreamEquals(OtherAbsorptionScale, Other.OtherAbsorptionScale)) \
		{ \
			OtherAbsorptionScale = Other.OtherAbsorptionScale; \
			ModifiedFlags |= Field_OtherAbsorptionScale; \
		} \
		if (Other.OtherAbsorptionModified() && !StateStreamEquals(OtherAbsorption, Other.OtherAbsorption)) \
		{ \
			OtherAbsorption = Other.OtherAbsorption; \
			ModifiedFlags |= Field_OtherAbsorption; \
		} \
		if (Other.OtherTentDistributionTipAltitudeModified() && !StateStreamEquals(OtherTentDistributionTipAltitude, Other.OtherTentDistributionTipAltitude)) \
		{ \
			OtherTentDistributionTipAltitude = Other.OtherTentDistributionTipAltitude; \
			ModifiedFlags |= Field_OtherTentDistributionTipAltitude; \
		} \
		if (Other.OtherTentDistributionTipValueModified() && !StateStreamEquals(OtherTentDistributionTipValue, Other.OtherTentDistributionTipValue)) \
		{ \
			OtherTentDistributionTipValue = Other.OtherTentDistributionTipValue; \
			ModifiedFlags |= Field_OtherTentDistributionTipValue; \
		} \
		if (Other.OtherTentDistributionWidthModified() && !StateStreamEquals(OtherTentDistributionWidth, Other.OtherTentDistributionWidth)) \
		{ \
			OtherTentDistributionWidth = Other.OtherTentDistributionWidth; \
			ModifiedFlags |= Field_OtherTentDistributionWidth; \
		} \
		if (Other.SkyLuminanceFactorModified() && !StateStreamEquals(SkyLuminanceFactor, Other.SkyLuminanceFactor)) \
		{ \
			SkyLuminanceFactor = Other.SkyLuminanceFactor; \
			ModifiedFlags |= Field_SkyLuminanceFactor; \
		} \
		if (Other.SkyAndAerialPerspectiveLuminanceFactorModified() && !StateStreamEquals(SkyAndAerialPerspectiveLuminanceFactor, Other.SkyAndAerialPerspectiveLuminanceFactor)) \
		{ \
			SkyAndAerialPerspectiveLuminanceFactor = Other.SkyAndAerialPerspectiveLuminanceFactor; \
			ModifiedFlags |= Field_SkyAndAerialPerspectiveLuminanceFactor; \
		} \
		if (Other.AerialPespectiveViewDistanceScaleModified() && !StateStreamEquals(AerialPespectiveViewDistanceScale, Other.AerialPespectiveViewDistanceScale)) \
		{ \
			AerialPespectiveViewDistanceScale = Other.AerialPespectiveViewDistanceScale; \
			ModifiedFlags |= Field_AerialPespectiveViewDistanceScale; \
		} \
		if (Other.HeightFogContributionModified() && !StateStreamEquals(HeightFogContribution, Other.HeightFogContribution)) \
		{ \
			HeightFogContribution = Other.HeightFogContribution; \
			ModifiedFlags |= Field_HeightFogContribution; \
		} \
		if (Other.TransmittanceMinLightElevationAngleModified() && !StateStreamEquals(TransmittanceMinLightElevationAngle, Other.TransmittanceMinLightElevationAngle)) \
		{ \
			TransmittanceMinLightElevationAngle = Other.TransmittanceMinLightElevationAngle; \
			ModifiedFlags |= Field_TransmittanceMinLightElevationAngle; \
		} \
		if (Other.AerialPerspectiveStartDepthModified() && !StateStreamEquals(AerialPerspectiveStartDepth, Other.AerialPerspectiveStartDepth)) \
		{ \
			AerialPerspectiveStartDepth = Other.AerialPerspectiveStartDepth; \
			ModifiedFlags |= Field_AerialPerspectiveStartDepth; \
		} \
		if (Other.HoldoutModified() && !StateStreamEquals(bHoldout, Other.bHoldout)) \
		{ \
			bHoldout = Other.bHoldout; \
			ModifiedFlags |= Field_bHoldout; \
		} \
		if (Other.RenderInMainPassModified() && !StateStreamEquals(bRenderInMainPass, Other.bRenderInMainPass)) \
		{ \
			bRenderInMainPass = Other.bRenderInMainPass; \
			ModifiedFlags |= Field_bRenderInMainPass; \
		} \
		if (Other.BuiltModified() && !StateStreamEquals(bBuilt, Other.bBuilt)) \
		{ \
			bBuilt = Other.bBuilt; \
			ModifiedFlags |= Field_bBuilt; \
		} \
		if (Other.ComponentTransformModified() && !StateStreamEquals(ComponentTransform, Other.ComponentTransform)) \
		{ \
			ComponentTransform = Other.ComponentTransform; \
			ModifiedFlags |= Field_ComponentTransform; \
		} \
		if (Other.OverrideAtmosphericLightModified() && !StateStreamEquals(OverrideAtmosphericLight, Other.OverrideAtmosphericLight)) \
		{ \
			OverrideAtmosphericLight = Other.OverrideAtmosphericLight; \
			ModifiedFlags |= Field_OverrideAtmosphericLight; \
		} \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FSkyAtmosphereDynamicState& From, const FSkyAtmosphereDynamicState& To) \
	{ \
		ModifiedFlags = 0; \
		if (To.TransformModeModified()) \
		{ \
			ModifiedFlags |= Field_TransformMode; \
			StateStreamInterpolate(Context, TransformMode, From.TransformMode, To.TransformMode); \
		} \
		if (To.BottomRadiusModified()) \
		{ \
			ModifiedFlags |= Field_BottomRadius; \
			StateStreamInterpolate(Context, BottomRadius, From.BottomRadius, To.BottomRadius); \
		} \
		if (To.GroundAlbedoModified()) \
		{ \
			ModifiedFlags |= Field_GroundAlbedo; \
			StateStreamInterpolate(Context, GroundAlbedo, From.GroundAlbedo, To.GroundAlbedo); \
		} \
		if (To.AtmosphereHeightModified()) \
		{ \
			ModifiedFlags |= Field_AtmosphereHeight; \
			StateStreamInterpolate(Context, AtmosphereHeight, From.AtmosphereHeight, To.AtmosphereHeight); \
		} \
		if (To.MultiScatteringFactorModified()) \
		{ \
			ModifiedFlags |= Field_MultiScatteringFactor; \
			StateStreamInterpolate(Context, MultiScatteringFactor, From.MultiScatteringFactor, To.MultiScatteringFactor); \
		} \
		if (To.TraceSampleCountScaleModified()) \
		{ \
			ModifiedFlags |= Field_TraceSampleCountScale; \
			StateStreamInterpolate(Context, TraceSampleCountScale, From.TraceSampleCountScale, To.TraceSampleCountScale); \
		} \
		if (To.RayleighScatteringScaleModified()) \
		{ \
			ModifiedFlags |= Field_RayleighScatteringScale; \
			StateStreamInterpolate(Context, RayleighScatteringScale, From.RayleighScatteringScale, To.RayleighScatteringScale); \
		} \
		if (To.RayleighScatteringModified()) \
		{ \
			ModifiedFlags |= Field_RayleighScattering; \
			StateStreamInterpolate(Context, RayleighScattering, From.RayleighScattering, To.RayleighScattering); \
		} \
		if (To.RayleighExponentialDistributionModified()) \
		{ \
			ModifiedFlags |= Field_RayleighExponentialDistribution; \
			StateStreamInterpolate(Context, RayleighExponentialDistribution, From.RayleighExponentialDistribution, To.RayleighExponentialDistribution); \
		} \
		if (To.MieScatteringScaleModified()) \
		{ \
			ModifiedFlags |= Field_MieScatteringScale; \
			StateStreamInterpolate(Context, MieScatteringScale, From.MieScatteringScale, To.MieScatteringScale); \
		} \
		if (To.MieScatteringModified()) \
		{ \
			ModifiedFlags |= Field_MieScattering; \
			StateStreamInterpolate(Context, MieScattering, From.MieScattering, To.MieScattering); \
		} \
		if (To.MieAbsorptionScaleModified()) \
		{ \
			ModifiedFlags |= Field_MieAbsorptionScale; \
			StateStreamInterpolate(Context, MieAbsorptionScale, From.MieAbsorptionScale, To.MieAbsorptionScale); \
		} \
		if (To.MieAbsorptionModified()) \
		{ \
			ModifiedFlags |= Field_MieAbsorption; \
			StateStreamInterpolate(Context, MieAbsorption, From.MieAbsorption, To.MieAbsorption); \
		} \
		if (To.MieAnisotropyModified()) \
		{ \
			ModifiedFlags |= Field_MieAnisotropy; \
			StateStreamInterpolate(Context, MieAnisotropy, From.MieAnisotropy, To.MieAnisotropy); \
		} \
		if (To.MieExponentialDistributionModified()) \
		{ \
			ModifiedFlags |= Field_MieExponentialDistribution; \
			StateStreamInterpolate(Context, MieExponentialDistribution, From.MieExponentialDistribution, To.MieExponentialDistribution); \
		} \
		if (To.OtherAbsorptionScaleModified()) \
		{ \
			ModifiedFlags |= Field_OtherAbsorptionScale; \
			StateStreamInterpolate(Context, OtherAbsorptionScale, From.OtherAbsorptionScale, To.OtherAbsorptionScale); \
		} \
		if (To.OtherAbsorptionModified()) \
		{ \
			ModifiedFlags |= Field_OtherAbsorption; \
			StateStreamInterpolate(Context, OtherAbsorption, From.OtherAbsorption, To.OtherAbsorption); \
		} \
		if (To.OtherTentDistributionTipAltitudeModified()) \
		{ \
			ModifiedFlags |= Field_OtherTentDistributionTipAltitude; \
			StateStreamInterpolate(Context, OtherTentDistributionTipAltitude, From.OtherTentDistributionTipAltitude, To.OtherTentDistributionTipAltitude); \
		} \
		if (To.OtherTentDistributionTipValueModified()) \
		{ \
			ModifiedFlags |= Field_OtherTentDistributionTipValue; \
			StateStreamInterpolate(Context, OtherTentDistributionTipValue, From.OtherTentDistributionTipValue, To.OtherTentDistributionTipValue); \
		} \
		if (To.OtherTentDistributionWidthModified()) \
		{ \
			ModifiedFlags |= Field_OtherTentDistributionWidth; \
			StateStreamInterpolate(Context, OtherTentDistributionWidth, From.OtherTentDistributionWidth, To.OtherTentDistributionWidth); \
		} \
		if (To.SkyLuminanceFactorModified()) \
		{ \
			ModifiedFlags |= Field_SkyLuminanceFactor; \
			StateStreamInterpolate(Context, SkyLuminanceFactor, From.SkyLuminanceFactor, To.SkyLuminanceFactor); \
		} \
		if (To.SkyAndAerialPerspectiveLuminanceFactorModified()) \
		{ \
			ModifiedFlags |= Field_SkyAndAerialPerspectiveLuminanceFactor; \
			StateStreamInterpolate(Context, SkyAndAerialPerspectiveLuminanceFactor, From.SkyAndAerialPerspectiveLuminanceFactor, To.SkyAndAerialPerspectiveLuminanceFactor); \
		} \
		if (To.AerialPespectiveViewDistanceScaleModified()) \
		{ \
			ModifiedFlags |= Field_AerialPespectiveViewDistanceScale; \
			StateStreamInterpolate(Context, AerialPespectiveViewDistanceScale, From.AerialPespectiveViewDistanceScale, To.AerialPespectiveViewDistanceScale); \
		} \
		if (To.HeightFogContributionModified()) \
		{ \
			ModifiedFlags |= Field_HeightFogContribution; \
			StateStreamInterpolate(Context, HeightFogContribution, From.HeightFogContribution, To.HeightFogContribution); \
		} \
		if (To.TransmittanceMinLightElevationAngleModified()) \
		{ \
			ModifiedFlags |= Field_TransmittanceMinLightElevationAngle; \
			StateStreamInterpolate(Context, TransmittanceMinLightElevationAngle, From.TransmittanceMinLightElevationAngle, To.TransmittanceMinLightElevationAngle); \
		} \
		if (To.AerialPerspectiveStartDepthModified()) \
		{ \
			ModifiedFlags |= Field_AerialPerspectiveStartDepth; \
			StateStreamInterpolate(Context, AerialPerspectiveStartDepth, From.AerialPerspectiveStartDepth, To.AerialPerspectiveStartDepth); \
		} \
		if (To.HoldoutModified()) \
		{ \
			ModifiedFlags |= Field_bHoldout; \
			bHoldout = To.bHoldout;\
		} \
		if (To.RenderInMainPassModified()) \
		{ \
			ModifiedFlags |= Field_bRenderInMainPass; \
			bRenderInMainPass = To.bRenderInMainPass;\
		} \
		if (To.BuiltModified()) \
		{ \
			ModifiedFlags |= Field_bBuilt; \
			bBuilt = To.bBuilt;\
		} \
		if (To.ComponentTransformModified()) \
		{ \
			ModifiedFlags |= Field_ComponentTransform; \
			StateStreamInterpolate(Context, ComponentTransform, From.ComponentTransform, To.ComponentTransform); \
		} \
		if (To.OverrideAtmosphericLightModified()) \
		{ \
			ModifiedFlags |= Field_OverrideAtmosphericLight; \
			StateStreamInterpolate(Context, OverrideAtmosphericLight, From.OverrideAtmosphericLight, To.OverrideAtmosphericLight); \
		} \
	}


struct FSkyAtmosphereDynamicState;
// ********** End ScriptStruct FSkyAtmosphereDynamicState ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_StateStream_SkyAtmosphereStateStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
