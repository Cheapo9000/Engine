// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateStream/ExponentialHeightFogStateStream.h"

#ifdef ENGINE_ExponentialHeightFogStateStream_generated_h
#error "ExponentialHeightFogStateStream.generated.h already included, missing '#pragma once' in ExponentialHeightFogStateStream.h"
#endif
#define ENGINE_ExponentialHeightFogStateStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FExponentialHeightFogStaticState **********************************
struct Z_Construct_UScriptStruct_FExponentialHeightFogStaticState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_ExponentialHeightFogStateStream_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExponentialHeightFogStaticState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
	}; \
	uint32 ModifiedFlags = 0; \
	FExponentialHeightFogStaticState() = default; \
	FExponentialHeightFogStaticState(FStateStreamCopyContext& Context, const FExponentialHeightFogStaticState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	{} \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FExponentialHeightFogStaticState& Other) \
	{ \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FExponentialHeightFogStaticState& From, const FExponentialHeightFogStaticState& To) \
	{ \
		ModifiedFlags = 0; \
	}


struct FExponentialHeightFogStaticState;
// ********** End ScriptStruct FExponentialHeightFogStaticState ************************************

// ********** Begin ScriptStruct FExponentialHeightFogDynamicState *********************************
struct Z_Construct_UScriptStruct_FExponentialHeightFogDynamicState_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_StateStream_ExponentialHeightFogStateStream_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExponentialHeightFogDynamicState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	enum Fields \
	{ \
		Field_FogDensity = 1, \
		Field_FogHeightFalloff = 2, \
		Field_SecondFogData = 4, \
		Field_FogInscatteringLuminance = 8, \
		Field_SkyAtmosphereAmbientContributionColorScale = 16, \
		Field_InscatteringColorCubemap = 32, \
		Field_InscatteringColorCubemapAngle = 64, \
		Field_InscatteringTextureTint = 128, \
		Field_FullyDirectionalInscatteringColorDistance = 256, \
		Field_NonDirectionalInscatteringColorDistance = 512, \
		Field_DirectionalInscatteringExponent = 1024, \
		Field_DirectionalInscatteringStartDistance = 2048, \
		Field_DirectionalInscatteringLuminance = 4096, \
		Field_FogMaxOpacity = 8192, \
		Field_StartDistance = 16384, \
		Field_EndDistance = 32768, \
		Field_FogCutoffDistance = 65536, \
		Field_bEnableVolumetricFog = 131072, \
		Field_VolumetricFogScatteringDistribution = 262144, \
		Field_VolumetricFogAlbedo = 524288, \
		Field_VolumetricFogEmissive = 1048576, \
		Field_VolumetricFogExtinctionScale = 2097152, \
		Field_VolumetricFogDistance = 4194304, \
		Field_VolumetricFogStartDistance = 8388608, \
		Field_VolumetricFogNearFadeInDistance = 16777216, \
		Field_VolumetricFogStaticLightingScatteringIntensity = 33554432, \
		Field_bOverrideLightColorsWithFogInscatteringColors = 67108864, \
		Field_bHoldout = 134217728, \
		Field_bRenderInMainPass = 268435456, \
		Field_bVisibleInReflectionCaptures = 536870912, \
		Field_bVisibleInRealTimeSkyCaptures = 1073741824, \
		Field_Height = -2147483648, \
	}; \
	uint32 ModifiedFlags = 0; \
	FExponentialHeightFogDynamicState() = default; \
	FExponentialHeightFogDynamicState(FStateStreamCopyContext& Context, const FExponentialHeightFogDynamicState& Other) \
	:	ModifiedFlags(Other.ModifiedFlags) \
	,	FogDensity(Other.FogDensity) \
	,	FogHeightFalloff(Other.FogHeightFalloff) \
	,	SecondFogData(Other.SecondFogData) \
	,	FogInscatteringLuminance(Other.FogInscatteringLuminance) \
	,	SkyAtmosphereAmbientContributionColorScale(Other.SkyAtmosphereAmbientContributionColorScale) \
	,	InscatteringColorCubemap(Other.InscatteringColorCubemap) \
	,	InscatteringColorCubemapAngle(Other.InscatteringColorCubemapAngle) \
	,	InscatteringTextureTint(Other.InscatteringTextureTint) \
	,	FullyDirectionalInscatteringColorDistance(Other.FullyDirectionalInscatteringColorDistance) \
	,	NonDirectionalInscatteringColorDistance(Other.NonDirectionalInscatteringColorDistance) \
	,	DirectionalInscatteringExponent(Other.DirectionalInscatteringExponent) \
	,	DirectionalInscatteringStartDistance(Other.DirectionalInscatteringStartDistance) \
	,	DirectionalInscatteringLuminance(Other.DirectionalInscatteringLuminance) \
	,	FogMaxOpacity(Other.FogMaxOpacity) \
	,	StartDistance(Other.StartDistance) \
	,	EndDistance(Other.EndDistance) \
	,	FogCutoffDistance(Other.FogCutoffDistance) \
	,	bEnableVolumetricFog(Other.bEnableVolumetricFog) \
	,	VolumetricFogScatteringDistribution(Other.VolumetricFogScatteringDistribution) \
	,	VolumetricFogAlbedo(Other.VolumetricFogAlbedo) \
	,	VolumetricFogEmissive(Other.VolumetricFogEmissive) \
	,	VolumetricFogExtinctionScale(Other.VolumetricFogExtinctionScale) \
	,	VolumetricFogDistance(Other.VolumetricFogDistance) \
	,	VolumetricFogStartDistance(Other.VolumetricFogStartDistance) \
	,	VolumetricFogNearFadeInDistance(Other.VolumetricFogNearFadeInDistance) \
	,	VolumetricFogStaticLightingScatteringIntensity(Other.VolumetricFogStaticLightingScatteringIntensity) \
	,	bOverrideLightColorsWithFogInscatteringColors(Other.bOverrideLightColorsWithFogInscatteringColors) \
	,	bHoldout(Other.bHoldout) \
	,	bRenderInMainPass(Other.bRenderInMainPass) \
	,	bVisibleInReflectionCaptures(Other.bVisibleInReflectionCaptures) \
	,	bVisibleInRealTimeSkyCaptures(Other.bVisibleInRealTimeSkyCaptures) \
	,	Height(Other.Height) \
	{} \
	inline bool FogDensityModified() const { return !!(ModifiedFlags & Field_FogDensity); } \
	inline void SetFogDensity(const float& In) { FogDensity = In; ModifiedFlags |= Field_FogDensity; } \
	inline const float& GetFogDensity() const { return FogDensity; } \
	inline bool FogHeightFalloffModified() const { return !!(ModifiedFlags & Field_FogHeightFalloff); } \
	inline void SetFogHeightFalloff(const float& In) { FogHeightFalloff = In; ModifiedFlags |= Field_FogHeightFalloff; } \
	inline const float& GetFogHeightFalloff() const { return FogHeightFalloff; } \
	inline bool SecondFogDataModified() const { return !!(ModifiedFlags & Field_SecondFogData); } \
	inline void SetSecondFogData(const FExponentialHeightFogData& In) { SecondFogData = In; ModifiedFlags |= Field_SecondFogData; } \
	inline const FExponentialHeightFogData& GetSecondFogData() const { return SecondFogData; } \
	inline bool FogInscatteringLuminanceModified() const { return !!(ModifiedFlags & Field_FogInscatteringLuminance); } \
	inline void SetFogInscatteringLuminance(const FLinearColor& In) { FogInscatteringLuminance = In; ModifiedFlags |= Field_FogInscatteringLuminance; } \
	inline const FLinearColor& GetFogInscatteringLuminance() const { return FogInscatteringLuminance; } \
	inline bool SkyAtmosphereAmbientContributionColorScaleModified() const { return !!(ModifiedFlags & Field_SkyAtmosphereAmbientContributionColorScale); } \
	inline void SetSkyAtmosphereAmbientContributionColorScale(const FLinearColor& In) { SkyAtmosphereAmbientContributionColorScale = In; ModifiedFlags |= Field_SkyAtmosphereAmbientContributionColorScale; } \
	inline const FLinearColor& GetSkyAtmosphereAmbientContributionColorScale() const { return SkyAtmosphereAmbientContributionColorScale; } \
	inline bool InscatteringColorCubemapModified() const { return !!(ModifiedFlags & Field_InscatteringColorCubemap); } \
	inline void SetInscatteringColorCubemap(const TObjectPtr<UTextureCube>& In) { InscatteringColorCubemap = In; ModifiedFlags |= Field_InscatteringColorCubemap; } \
	inline const TObjectPtr<UTextureCube>& GetInscatteringColorCubemap() const { return InscatteringColorCubemap; } \
	inline bool InscatteringColorCubemapAngleModified() const { return !!(ModifiedFlags & Field_InscatteringColorCubemapAngle); } \
	inline void SetInscatteringColorCubemapAngle(const float& In) { InscatteringColorCubemapAngle = In; ModifiedFlags |= Field_InscatteringColorCubemapAngle; } \
	inline const float& GetInscatteringColorCubemapAngle() const { return InscatteringColorCubemapAngle; } \
	inline bool InscatteringTextureTintModified() const { return !!(ModifiedFlags & Field_InscatteringTextureTint); } \
	inline void SetInscatteringTextureTint(const FLinearColor& In) { InscatteringTextureTint = In; ModifiedFlags |= Field_InscatteringTextureTint; } \
	inline const FLinearColor& GetInscatteringTextureTint() const { return InscatteringTextureTint; } \
	inline bool FullyDirectionalInscatteringColorDistanceModified() const { return !!(ModifiedFlags & Field_FullyDirectionalInscatteringColorDistance); } \
	inline void SetFullyDirectionalInscatteringColorDistance(const float& In) { FullyDirectionalInscatteringColorDistance = In; ModifiedFlags |= Field_FullyDirectionalInscatteringColorDistance; } \
	inline const float& GetFullyDirectionalInscatteringColorDistance() const { return FullyDirectionalInscatteringColorDistance; } \
	inline bool NonDirectionalInscatteringColorDistanceModified() const { return !!(ModifiedFlags & Field_NonDirectionalInscatteringColorDistance); } \
	inline void SetNonDirectionalInscatteringColorDistance(const float& In) { NonDirectionalInscatteringColorDistance = In; ModifiedFlags |= Field_NonDirectionalInscatteringColorDistance; } \
	inline const float& GetNonDirectionalInscatteringColorDistance() const { return NonDirectionalInscatteringColorDistance; } \
	inline bool DirectionalInscatteringExponentModified() const { return !!(ModifiedFlags & Field_DirectionalInscatteringExponent); } \
	inline void SetDirectionalInscatteringExponent(const float& In) { DirectionalInscatteringExponent = In; ModifiedFlags |= Field_DirectionalInscatteringExponent; } \
	inline const float& GetDirectionalInscatteringExponent() const { return DirectionalInscatteringExponent; } \
	inline bool DirectionalInscatteringStartDistanceModified() const { return !!(ModifiedFlags & Field_DirectionalInscatteringStartDistance); } \
	inline void SetDirectionalInscatteringStartDistance(const float& In) { DirectionalInscatteringStartDistance = In; ModifiedFlags |= Field_DirectionalInscatteringStartDistance; } \
	inline const float& GetDirectionalInscatteringStartDistance() const { return DirectionalInscatteringStartDistance; } \
	inline bool DirectionalInscatteringLuminanceModified() const { return !!(ModifiedFlags & Field_DirectionalInscatteringLuminance); } \
	inline void SetDirectionalInscatteringLuminance(const FLinearColor& In) { DirectionalInscatteringLuminance = In; ModifiedFlags |= Field_DirectionalInscatteringLuminance; } \
	inline const FLinearColor& GetDirectionalInscatteringLuminance() const { return DirectionalInscatteringLuminance; } \
	inline bool FogMaxOpacityModified() const { return !!(ModifiedFlags & Field_FogMaxOpacity); } \
	inline void SetFogMaxOpacity(const float& In) { FogMaxOpacity = In; ModifiedFlags |= Field_FogMaxOpacity; } \
	inline const float& GetFogMaxOpacity() const { return FogMaxOpacity; } \
	inline bool StartDistanceModified() const { return !!(ModifiedFlags & Field_StartDistance); } \
	inline void SetStartDistance(const float& In) { StartDistance = In; ModifiedFlags |= Field_StartDistance; } \
	inline const float& GetStartDistance() const { return StartDistance; } \
	inline bool EndDistanceModified() const { return !!(ModifiedFlags & Field_EndDistance); } \
	inline void SetEndDistance(const float& In) { EndDistance = In; ModifiedFlags |= Field_EndDistance; } \
	inline const float& GetEndDistance() const { return EndDistance; } \
	inline bool FogCutoffDistanceModified() const { return !!(ModifiedFlags & Field_FogCutoffDistance); } \
	inline void SetFogCutoffDistance(const float& In) { FogCutoffDistance = In; ModifiedFlags |= Field_FogCutoffDistance; } \
	inline const float& GetFogCutoffDistance() const { return FogCutoffDistance; } \
	inline bool EnableVolumetricFogModified() const { return !!(ModifiedFlags & Field_bEnableVolumetricFog); } \
	inline void SetEnableVolumetricFog(const bool& In) { bEnableVolumetricFog = In; ModifiedFlags |= Field_bEnableVolumetricFog; } \
	inline bool GetEnableVolumetricFog() const { return bEnableVolumetricFog; } \
	inline bool VolumetricFogScatteringDistributionModified() const { return !!(ModifiedFlags & Field_VolumetricFogScatteringDistribution); } \
	inline void SetVolumetricFogScatteringDistribution(const float& In) { VolumetricFogScatteringDistribution = In; ModifiedFlags |= Field_VolumetricFogScatteringDistribution; } \
	inline const float& GetVolumetricFogScatteringDistribution() const { return VolumetricFogScatteringDistribution; } \
	inline bool VolumetricFogAlbedoModified() const { return !!(ModifiedFlags & Field_VolumetricFogAlbedo); } \
	inline void SetVolumetricFogAlbedo(const FColor& In) { VolumetricFogAlbedo = In; ModifiedFlags |= Field_VolumetricFogAlbedo; } \
	inline const FColor& GetVolumetricFogAlbedo() const { return VolumetricFogAlbedo; } \
	inline bool VolumetricFogEmissiveModified() const { return !!(ModifiedFlags & Field_VolumetricFogEmissive); } \
	inline void SetVolumetricFogEmissive(const FLinearColor& In) { VolumetricFogEmissive = In; ModifiedFlags |= Field_VolumetricFogEmissive; } \
	inline const FLinearColor& GetVolumetricFogEmissive() const { return VolumetricFogEmissive; } \
	inline bool VolumetricFogExtinctionScaleModified() const { return !!(ModifiedFlags & Field_VolumetricFogExtinctionScale); } \
	inline void SetVolumetricFogExtinctionScale(const float& In) { VolumetricFogExtinctionScale = In; ModifiedFlags |= Field_VolumetricFogExtinctionScale; } \
	inline const float& GetVolumetricFogExtinctionScale() const { return VolumetricFogExtinctionScale; } \
	inline bool VolumetricFogDistanceModified() const { return !!(ModifiedFlags & Field_VolumetricFogDistance); } \
	inline void SetVolumetricFogDistance(const float& In) { VolumetricFogDistance = In; ModifiedFlags |= Field_VolumetricFogDistance; } \
	inline const float& GetVolumetricFogDistance() const { return VolumetricFogDistance; } \
	inline bool VolumetricFogStartDistanceModified() const { return !!(ModifiedFlags & Field_VolumetricFogStartDistance); } \
	inline void SetVolumetricFogStartDistance(const float& In) { VolumetricFogStartDistance = In; ModifiedFlags |= Field_VolumetricFogStartDistance; } \
	inline const float& GetVolumetricFogStartDistance() const { return VolumetricFogStartDistance; } \
	inline bool VolumetricFogNearFadeInDistanceModified() const { return !!(ModifiedFlags & Field_VolumetricFogNearFadeInDistance); } \
	inline void SetVolumetricFogNearFadeInDistance(const float& In) { VolumetricFogNearFadeInDistance = In; ModifiedFlags |= Field_VolumetricFogNearFadeInDistance; } \
	inline const float& GetVolumetricFogNearFadeInDistance() const { return VolumetricFogNearFadeInDistance; } \
	inline bool VolumetricFogStaticLightingScatteringIntensityModified() const { return !!(ModifiedFlags & Field_VolumetricFogStaticLightingScatteringIntensity); } \
	inline void SetVolumetricFogStaticLightingScatteringIntensity(const float& In) { VolumetricFogStaticLightingScatteringIntensity = In; ModifiedFlags |= Field_VolumetricFogStaticLightingScatteringIntensity; } \
	inline const float& GetVolumetricFogStaticLightingScatteringIntensity() const { return VolumetricFogStaticLightingScatteringIntensity; } \
	inline bool OverrideLightColorsWithFogInscatteringColorsModified() const { return !!(ModifiedFlags & Field_bOverrideLightColorsWithFogInscatteringColors); } \
	inline void SetOverrideLightColorsWithFogInscatteringColors(const bool& In) { bOverrideLightColorsWithFogInscatteringColors = In; ModifiedFlags |= Field_bOverrideLightColorsWithFogInscatteringColors; } \
	inline bool GetOverrideLightColorsWithFogInscatteringColors() const { return bOverrideLightColorsWithFogInscatteringColors; } \
	inline bool HoldoutModified() const { return !!(ModifiedFlags & Field_bHoldout); } \
	inline void SetHoldout(const uint8& In) { bHoldout = In; ModifiedFlags |= Field_bHoldout; } \
	inline bool GetHoldout() const { return bHoldout; } \
	inline bool RenderInMainPassModified() const { return !!(ModifiedFlags & Field_bRenderInMainPass); } \
	inline void SetRenderInMainPass(const uint8& In) { bRenderInMainPass = In; ModifiedFlags |= Field_bRenderInMainPass; } \
	inline bool GetRenderInMainPass() const { return bRenderInMainPass; } \
	inline bool VisibleInReflectionCapturesModified() const { return !!(ModifiedFlags & Field_bVisibleInReflectionCaptures); } \
	inline void SetVisibleInReflectionCaptures(const uint8& In) { bVisibleInReflectionCaptures = In; ModifiedFlags |= Field_bVisibleInReflectionCaptures; } \
	inline bool GetVisibleInReflectionCaptures() const { return bVisibleInReflectionCaptures; } \
	inline bool VisibleInRealTimeSkyCapturesModified() const { return !!(ModifiedFlags & Field_bVisibleInRealTimeSkyCaptures); } \
	inline void SetVisibleInRealTimeSkyCaptures(const uint8& In) { bVisibleInRealTimeSkyCaptures = In; ModifiedFlags |= Field_bVisibleInRealTimeSkyCaptures; } \
	inline bool GetVisibleInRealTimeSkyCaptures() const { return bVisibleInRealTimeSkyCaptures; } \
	inline bool HeightModified() const { return !!(ModifiedFlags & Field_Height); } \
	inline void SetHeight(const float& In) { Height = In; ModifiedFlags |= Field_Height; } \
	inline const float& GetHeight() const { return Height; } \
	uint32 GetDependencies(FStateStreamHandle** OutHandles, uint32 Capacity) \
	{ \
		return 0; \
	} \
	void Apply(FStateStreamCopyContext& Context, const FExponentialHeightFogDynamicState& Other) \
	{ \
		if (Other.FogDensityModified() && !StateStreamEquals(FogDensity, Other.FogDensity)) \
		{ \
			FogDensity = Other.FogDensity; \
			ModifiedFlags |= Field_FogDensity; \
		} \
		if (Other.FogHeightFalloffModified() && !StateStreamEquals(FogHeightFalloff, Other.FogHeightFalloff)) \
		{ \
			FogHeightFalloff = Other.FogHeightFalloff; \
			ModifiedFlags |= Field_FogHeightFalloff; \
		} \
		if (Other.SecondFogDataModified() && !StateStreamEquals(SecondFogData, Other.SecondFogData)) \
		{ \
			SecondFogData = Other.SecondFogData; \
			ModifiedFlags |= Field_SecondFogData; \
		} \
		if (Other.FogInscatteringLuminanceModified() && !StateStreamEquals(FogInscatteringLuminance, Other.FogInscatteringLuminance)) \
		{ \
			FogInscatteringLuminance = Other.FogInscatteringLuminance; \
			ModifiedFlags |= Field_FogInscatteringLuminance; \
		} \
		if (Other.SkyAtmosphereAmbientContributionColorScaleModified() && !StateStreamEquals(SkyAtmosphereAmbientContributionColorScale, Other.SkyAtmosphereAmbientContributionColorScale)) \
		{ \
			SkyAtmosphereAmbientContributionColorScale = Other.SkyAtmosphereAmbientContributionColorScale; \
			ModifiedFlags |= Field_SkyAtmosphereAmbientContributionColorScale; \
		} \
		if (Other.InscatteringColorCubemapModified() && !StateStreamEquals(InscatteringColorCubemap, Other.InscatteringColorCubemap)) \
		{ \
			InscatteringColorCubemap = Other.InscatteringColorCubemap; \
			ModifiedFlags |= Field_InscatteringColorCubemap; \
		} \
		if (Other.InscatteringColorCubemapAngleModified() && !StateStreamEquals(InscatteringColorCubemapAngle, Other.InscatteringColorCubemapAngle)) \
		{ \
			InscatteringColorCubemapAngle = Other.InscatteringColorCubemapAngle; \
			ModifiedFlags |= Field_InscatteringColorCubemapAngle; \
		} \
		if (Other.InscatteringTextureTintModified() && !StateStreamEquals(InscatteringTextureTint, Other.InscatteringTextureTint)) \
		{ \
			InscatteringTextureTint = Other.InscatteringTextureTint; \
			ModifiedFlags |= Field_InscatteringTextureTint; \
		} \
		if (Other.FullyDirectionalInscatteringColorDistanceModified() && !StateStreamEquals(FullyDirectionalInscatteringColorDistance, Other.FullyDirectionalInscatteringColorDistance)) \
		{ \
			FullyDirectionalInscatteringColorDistance = Other.FullyDirectionalInscatteringColorDistance; \
			ModifiedFlags |= Field_FullyDirectionalInscatteringColorDistance; \
		} \
		if (Other.NonDirectionalInscatteringColorDistanceModified() && !StateStreamEquals(NonDirectionalInscatteringColorDistance, Other.NonDirectionalInscatteringColorDistance)) \
		{ \
			NonDirectionalInscatteringColorDistance = Other.NonDirectionalInscatteringColorDistance; \
			ModifiedFlags |= Field_NonDirectionalInscatteringColorDistance; \
		} \
		if (Other.DirectionalInscatteringExponentModified() && !StateStreamEquals(DirectionalInscatteringExponent, Other.DirectionalInscatteringExponent)) \
		{ \
			DirectionalInscatteringExponent = Other.DirectionalInscatteringExponent; \
			ModifiedFlags |= Field_DirectionalInscatteringExponent; \
		} \
		if (Other.DirectionalInscatteringStartDistanceModified() && !StateStreamEquals(DirectionalInscatteringStartDistance, Other.DirectionalInscatteringStartDistance)) \
		{ \
			DirectionalInscatteringStartDistance = Other.DirectionalInscatteringStartDistance; \
			ModifiedFlags |= Field_DirectionalInscatteringStartDistance; \
		} \
		if (Other.DirectionalInscatteringLuminanceModified() && !StateStreamEquals(DirectionalInscatteringLuminance, Other.DirectionalInscatteringLuminance)) \
		{ \
			DirectionalInscatteringLuminance = Other.DirectionalInscatteringLuminance; \
			ModifiedFlags |= Field_DirectionalInscatteringLuminance; \
		} \
		if (Other.FogMaxOpacityModified() && !StateStreamEquals(FogMaxOpacity, Other.FogMaxOpacity)) \
		{ \
			FogMaxOpacity = Other.FogMaxOpacity; \
			ModifiedFlags |= Field_FogMaxOpacity; \
		} \
		if (Other.StartDistanceModified() && !StateStreamEquals(StartDistance, Other.StartDistance)) \
		{ \
			StartDistance = Other.StartDistance; \
			ModifiedFlags |= Field_StartDistance; \
		} \
		if (Other.EndDistanceModified() && !StateStreamEquals(EndDistance, Other.EndDistance)) \
		{ \
			EndDistance = Other.EndDistance; \
			ModifiedFlags |= Field_EndDistance; \
		} \
		if (Other.FogCutoffDistanceModified() && !StateStreamEquals(FogCutoffDistance, Other.FogCutoffDistance)) \
		{ \
			FogCutoffDistance = Other.FogCutoffDistance; \
			ModifiedFlags |= Field_FogCutoffDistance; \
		} \
		if (Other.EnableVolumetricFogModified() && !StateStreamEquals(bEnableVolumetricFog, Other.bEnableVolumetricFog)) \
		{ \
			bEnableVolumetricFog = Other.bEnableVolumetricFog; \
			ModifiedFlags |= Field_bEnableVolumetricFog; \
		} \
		if (Other.VolumetricFogScatteringDistributionModified() && !StateStreamEquals(VolumetricFogScatteringDistribution, Other.VolumetricFogScatteringDistribution)) \
		{ \
			VolumetricFogScatteringDistribution = Other.VolumetricFogScatteringDistribution; \
			ModifiedFlags |= Field_VolumetricFogScatteringDistribution; \
		} \
		if (Other.VolumetricFogAlbedoModified() && !StateStreamEquals(VolumetricFogAlbedo, Other.VolumetricFogAlbedo)) \
		{ \
			VolumetricFogAlbedo = Other.VolumetricFogAlbedo; \
			ModifiedFlags |= Field_VolumetricFogAlbedo; \
		} \
		if (Other.VolumetricFogEmissiveModified() && !StateStreamEquals(VolumetricFogEmissive, Other.VolumetricFogEmissive)) \
		{ \
			VolumetricFogEmissive = Other.VolumetricFogEmissive; \
			ModifiedFlags |= Field_VolumetricFogEmissive; \
		} \
		if (Other.VolumetricFogExtinctionScaleModified() && !StateStreamEquals(VolumetricFogExtinctionScale, Other.VolumetricFogExtinctionScale)) \
		{ \
			VolumetricFogExtinctionScale = Other.VolumetricFogExtinctionScale; \
			ModifiedFlags |= Field_VolumetricFogExtinctionScale; \
		} \
		if (Other.VolumetricFogDistanceModified() && !StateStreamEquals(VolumetricFogDistance, Other.VolumetricFogDistance)) \
		{ \
			VolumetricFogDistance = Other.VolumetricFogDistance; \
			ModifiedFlags |= Field_VolumetricFogDistance; \
		} \
		if (Other.VolumetricFogStartDistanceModified() && !StateStreamEquals(VolumetricFogStartDistance, Other.VolumetricFogStartDistance)) \
		{ \
			VolumetricFogStartDistance = Other.VolumetricFogStartDistance; \
			ModifiedFlags |= Field_VolumetricFogStartDistance; \
		} \
		if (Other.VolumetricFogNearFadeInDistanceModified() && !StateStreamEquals(VolumetricFogNearFadeInDistance, Other.VolumetricFogNearFadeInDistance)) \
		{ \
			VolumetricFogNearFadeInDistance = Other.VolumetricFogNearFadeInDistance; \
			ModifiedFlags |= Field_VolumetricFogNearFadeInDistance; \
		} \
		if (Other.VolumetricFogStaticLightingScatteringIntensityModified() && !StateStreamEquals(VolumetricFogStaticLightingScatteringIntensity, Other.VolumetricFogStaticLightingScatteringIntensity)) \
		{ \
			VolumetricFogStaticLightingScatteringIntensity = Other.VolumetricFogStaticLightingScatteringIntensity; \
			ModifiedFlags |= Field_VolumetricFogStaticLightingScatteringIntensity; \
		} \
		if (Other.OverrideLightColorsWithFogInscatteringColorsModified() && !StateStreamEquals(bOverrideLightColorsWithFogInscatteringColors, Other.bOverrideLightColorsWithFogInscatteringColors)) \
		{ \
			bOverrideLightColorsWithFogInscatteringColors = Other.bOverrideLightColorsWithFogInscatteringColors; \
			ModifiedFlags |= Field_bOverrideLightColorsWithFogInscatteringColors; \
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
		if (Other.VisibleInReflectionCapturesModified() && !StateStreamEquals(bVisibleInReflectionCaptures, Other.bVisibleInReflectionCaptures)) \
		{ \
			bVisibleInReflectionCaptures = Other.bVisibleInReflectionCaptures; \
			ModifiedFlags |= Field_bVisibleInReflectionCaptures; \
		} \
		if (Other.VisibleInRealTimeSkyCapturesModified() && !StateStreamEquals(bVisibleInRealTimeSkyCaptures, Other.bVisibleInRealTimeSkyCaptures)) \
		{ \
			bVisibleInRealTimeSkyCaptures = Other.bVisibleInRealTimeSkyCaptures; \
			ModifiedFlags |= Field_bVisibleInRealTimeSkyCaptures; \
		} \
		if (Other.HeightModified() && !StateStreamEquals(Height, Other.Height)) \
		{ \
			Height = Other.Height; \
			ModifiedFlags |= Field_Height; \
		} \
	} \
	void Interpolate(FStateStreamInterpolateContext& Context, const FExponentialHeightFogDynamicState& From, const FExponentialHeightFogDynamicState& To) \
	{ \
		ModifiedFlags = 0; \
		if (To.FogDensityModified()) \
		{ \
			ModifiedFlags |= Field_FogDensity; \
			StateStreamInterpolate(Context, FogDensity, From.FogDensity, To.FogDensity); \
		} \
		if (To.FogHeightFalloffModified()) \
		{ \
			ModifiedFlags |= Field_FogHeightFalloff; \
			StateStreamInterpolate(Context, FogHeightFalloff, From.FogHeightFalloff, To.FogHeightFalloff); \
		} \
		if (To.SecondFogDataModified()) \
		{ \
			ModifiedFlags |= Field_SecondFogData; \
			StateStreamInterpolate(Context, SecondFogData, From.SecondFogData, To.SecondFogData); \
		} \
		if (To.FogInscatteringLuminanceModified()) \
		{ \
			ModifiedFlags |= Field_FogInscatteringLuminance; \
			StateStreamInterpolate(Context, FogInscatteringLuminance, From.FogInscatteringLuminance, To.FogInscatteringLuminance); \
		} \
		if (To.SkyAtmosphereAmbientContributionColorScaleModified()) \
		{ \
			ModifiedFlags |= Field_SkyAtmosphereAmbientContributionColorScale; \
			StateStreamInterpolate(Context, SkyAtmosphereAmbientContributionColorScale, From.SkyAtmosphereAmbientContributionColorScale, To.SkyAtmosphereAmbientContributionColorScale); \
		} \
		if (To.InscatteringColorCubemapModified()) \
		{ \
			ModifiedFlags |= Field_InscatteringColorCubemap; \
			StateStreamInterpolate(Context, InscatteringColorCubemap, From.InscatteringColorCubemap, To.InscatteringColorCubemap); \
		} \
		if (To.InscatteringColorCubemapAngleModified()) \
		{ \
			ModifiedFlags |= Field_InscatteringColorCubemapAngle; \
			StateStreamInterpolate(Context, InscatteringColorCubemapAngle, From.InscatteringColorCubemapAngle, To.InscatteringColorCubemapAngle); \
		} \
		if (To.InscatteringTextureTintModified()) \
		{ \
			ModifiedFlags |= Field_InscatteringTextureTint; \
			StateStreamInterpolate(Context, InscatteringTextureTint, From.InscatteringTextureTint, To.InscatteringTextureTint); \
		} \
		if (To.FullyDirectionalInscatteringColorDistanceModified()) \
		{ \
			ModifiedFlags |= Field_FullyDirectionalInscatteringColorDistance; \
			StateStreamInterpolate(Context, FullyDirectionalInscatteringColorDistance, From.FullyDirectionalInscatteringColorDistance, To.FullyDirectionalInscatteringColorDistance); \
		} \
		if (To.NonDirectionalInscatteringColorDistanceModified()) \
		{ \
			ModifiedFlags |= Field_NonDirectionalInscatteringColorDistance; \
			StateStreamInterpolate(Context, NonDirectionalInscatteringColorDistance, From.NonDirectionalInscatteringColorDistance, To.NonDirectionalInscatteringColorDistance); \
		} \
		if (To.DirectionalInscatteringExponentModified()) \
		{ \
			ModifiedFlags |= Field_DirectionalInscatteringExponent; \
			StateStreamInterpolate(Context, DirectionalInscatteringExponent, From.DirectionalInscatteringExponent, To.DirectionalInscatteringExponent); \
		} \
		if (To.DirectionalInscatteringStartDistanceModified()) \
		{ \
			ModifiedFlags |= Field_DirectionalInscatteringStartDistance; \
			StateStreamInterpolate(Context, DirectionalInscatteringStartDistance, From.DirectionalInscatteringStartDistance, To.DirectionalInscatteringStartDistance); \
		} \
		if (To.DirectionalInscatteringLuminanceModified()) \
		{ \
			ModifiedFlags |= Field_DirectionalInscatteringLuminance; \
			StateStreamInterpolate(Context, DirectionalInscatteringLuminance, From.DirectionalInscatteringLuminance, To.DirectionalInscatteringLuminance); \
		} \
		if (To.FogMaxOpacityModified()) \
		{ \
			ModifiedFlags |= Field_FogMaxOpacity; \
			StateStreamInterpolate(Context, FogMaxOpacity, From.FogMaxOpacity, To.FogMaxOpacity); \
		} \
		if (To.StartDistanceModified()) \
		{ \
			ModifiedFlags |= Field_StartDistance; \
			StateStreamInterpolate(Context, StartDistance, From.StartDistance, To.StartDistance); \
		} \
		if (To.EndDistanceModified()) \
		{ \
			ModifiedFlags |= Field_EndDistance; \
			StateStreamInterpolate(Context, EndDistance, From.EndDistance, To.EndDistance); \
		} \
		if (To.FogCutoffDistanceModified()) \
		{ \
			ModifiedFlags |= Field_FogCutoffDistance; \
			StateStreamInterpolate(Context, FogCutoffDistance, From.FogCutoffDistance, To.FogCutoffDistance); \
		} \
		if (To.EnableVolumetricFogModified()) \
		{ \
			ModifiedFlags |= Field_bEnableVolumetricFog; \
			bEnableVolumetricFog = To.bEnableVolumetricFog;\
		} \
		if (To.VolumetricFogScatteringDistributionModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogScatteringDistribution; \
			StateStreamInterpolate(Context, VolumetricFogScatteringDistribution, From.VolumetricFogScatteringDistribution, To.VolumetricFogScatteringDistribution); \
		} \
		if (To.VolumetricFogAlbedoModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogAlbedo; \
			StateStreamInterpolate(Context, VolumetricFogAlbedo, From.VolumetricFogAlbedo, To.VolumetricFogAlbedo); \
		} \
		if (To.VolumetricFogEmissiveModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogEmissive; \
			StateStreamInterpolate(Context, VolumetricFogEmissive, From.VolumetricFogEmissive, To.VolumetricFogEmissive); \
		} \
		if (To.VolumetricFogExtinctionScaleModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogExtinctionScale; \
			StateStreamInterpolate(Context, VolumetricFogExtinctionScale, From.VolumetricFogExtinctionScale, To.VolumetricFogExtinctionScale); \
		} \
		if (To.VolumetricFogDistanceModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogDistance; \
			StateStreamInterpolate(Context, VolumetricFogDistance, From.VolumetricFogDistance, To.VolumetricFogDistance); \
		} \
		if (To.VolumetricFogStartDistanceModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogStartDistance; \
			StateStreamInterpolate(Context, VolumetricFogStartDistance, From.VolumetricFogStartDistance, To.VolumetricFogStartDistance); \
		} \
		if (To.VolumetricFogNearFadeInDistanceModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogNearFadeInDistance; \
			StateStreamInterpolate(Context, VolumetricFogNearFadeInDistance, From.VolumetricFogNearFadeInDistance, To.VolumetricFogNearFadeInDistance); \
		} \
		if (To.VolumetricFogStaticLightingScatteringIntensityModified()) \
		{ \
			ModifiedFlags |= Field_VolumetricFogStaticLightingScatteringIntensity; \
			StateStreamInterpolate(Context, VolumetricFogStaticLightingScatteringIntensity, From.VolumetricFogStaticLightingScatteringIntensity, To.VolumetricFogStaticLightingScatteringIntensity); \
		} \
		if (To.OverrideLightColorsWithFogInscatteringColorsModified()) \
		{ \
			ModifiedFlags |= Field_bOverrideLightColorsWithFogInscatteringColors; \
			bOverrideLightColorsWithFogInscatteringColors = To.bOverrideLightColorsWithFogInscatteringColors;\
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
		if (To.VisibleInReflectionCapturesModified()) \
		{ \
			ModifiedFlags |= Field_bVisibleInReflectionCaptures; \
			bVisibleInReflectionCaptures = To.bVisibleInReflectionCaptures;\
		} \
		if (To.VisibleInRealTimeSkyCapturesModified()) \
		{ \
			ModifiedFlags |= Field_bVisibleInRealTimeSkyCaptures; \
			bVisibleInRealTimeSkyCaptures = To.bVisibleInRealTimeSkyCaptures;\
		} \
		if (To.HeightModified()) \
		{ \
			ModifiedFlags |= Field_Height; \
			StateStreamInterpolate(Context, Height, From.Height, To.Height); \
		} \
	}


struct FExponentialHeightFogDynamicState;
// ********** End ScriptStruct FExponentialHeightFogDynamicState ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_StateStream_ExponentialHeightFogStateStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
