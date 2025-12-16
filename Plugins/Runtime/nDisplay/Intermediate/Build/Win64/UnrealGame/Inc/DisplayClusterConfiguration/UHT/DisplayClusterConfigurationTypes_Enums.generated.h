// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterConfigurationTypes_Enums.h"

#ifdef DISPLAYCLUSTERCONFIGURATION_DisplayClusterConfigurationTypes_Enums_generated_h
#error "DisplayClusterConfigurationTypes_Enums.generated.h already included, missing '#pragma once' in DisplayClusterConfigurationTypes_Enums.h"
#endif
#define DISPLAYCLUSTERCONFIGURATION_DisplayClusterConfigurationTypes_Enums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Enums_h

// ********** Begin Enum EDisplayClusterConfigurationDataSource ************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONDATASOURCE(op) \
	op(EDisplayClusterConfigurationDataSource::Text) \
	op(EDisplayClusterConfigurationDataSource::Json) 

enum class EDisplayClusterConfigurationDataSource : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationDataSource> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationDataSource>();
// ********** End Enum EDisplayClusterConfigurationDataSource **************************************

// ********** Begin Enum EDisplayClusterConfigurationFailoverPolicy ********************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONFAILOVERPOLICY(op) \
	op(EDisplayClusterConfigurationFailoverPolicy::Disabled) \
	op(EDisplayClusterConfigurationFailoverPolicy::DropSecondaryNodesOnly) 

enum class EDisplayClusterConfigurationFailoverPolicy : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationFailoverPolicy> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationFailoverPolicy>();
// ********** End Enum EDisplayClusterConfigurationFailoverPolicy **********************************

// ********** Begin Enum EDisplayClusterConfigurationEyeStereoOffset *******************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONEYESTEREOOFFSET(op) \
	op(EDisplayClusterConfigurationEyeStereoOffset::None) \
	op(EDisplayClusterConfigurationEyeStereoOffset::Left) \
	op(EDisplayClusterConfigurationEyeStereoOffset::Right) 

enum class EDisplayClusterConfigurationEyeStereoOffset : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationEyeStereoOffset> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationEyeStereoOffset>();
// ********** End Enum EDisplayClusterConfigurationEyeStereoOffset *********************************

// ********** Begin Enum EDisplayClusterConfiguration_PostRenderBlur *******************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATION_POSTRENDERBLUR(op) \
	op(EDisplayClusterConfiguration_PostRenderBlur::None) \
	op(EDisplayClusterConfiguration_PostRenderBlur::Gaussian) \
	op(EDisplayClusterConfiguration_PostRenderBlur::Dilate) 

enum class EDisplayClusterConfiguration_PostRenderBlur : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfiguration_PostRenderBlur> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfiguration_PostRenderBlur>();
// ********** End Enum EDisplayClusterConfiguration_PostRenderBlur *********************************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_ChromakeyType ***************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_CHROMAKEYTYPE(op) \
	op(EDisplayClusterConfigurationICVFX_ChromakeyType::InnerFrustum) \
	op(EDisplayClusterConfigurationICVFX_ChromakeyType::CustomChromakey) \
	op(EDisplayClusterConfigurationICVFX_ChromakeyType::Disabled) 

enum class EDisplayClusterConfigurationICVFX_ChromakeyType : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_ChromakeyType> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_ChromakeyType>();
// ********** End Enum EDisplayClusterConfigurationICVFX_ChromakeyType *****************************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_ChromakeySettingsSource *****************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_CHROMAKEYSETTINGSSOURCE(op) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySettingsSource::Viewport) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySettingsSource::ICVFXCamera) 

enum class EDisplayClusterConfigurationICVFX_ChromakeySettingsSource : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_ChromakeySettingsSource> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_ChromakeySettingsSource>();
// ********** End Enum EDisplayClusterConfigurationICVFX_ChromakeySettingsSource *******************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_ChromakeySource *************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_CHROMAKEYSOURCE(op) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySource::None) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySource::FrameColor) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySource::ChromakeyRenderTexture) 

enum class EDisplayClusterConfigurationICVFX_ChromakeySource : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_ChromakeySource> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_ChromakeySource>();
// ********** End Enum EDisplayClusterConfigurationICVFX_ChromakeySource ***************************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_LightcardRenderMode *********************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_LIGHTCARDRENDERMODE(op) \
	op(EDisplayClusterConfigurationICVFX_LightcardRenderMode::Over) \
	op(EDisplayClusterConfigurationICVFX_LightcardRenderMode::Under) 

enum class EDisplayClusterConfigurationICVFX_LightcardRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_LightcardRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_LightcardRenderMode>();
// ********** End Enum EDisplayClusterConfigurationICVFX_LightcardRenderMode ***********************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_PerLightcardRenderMode ******************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_PERLIGHTCARDRENDERMODE(op) \
	op(EDisplayClusterConfigurationICVFX_PerLightcardRenderMode::Default) \
	op(EDisplayClusterConfigurationICVFX_PerLightcardRenderMode::Over) \
	op(EDisplayClusterConfigurationICVFX_PerLightcardRenderMode::Under) 

enum class EDisplayClusterConfigurationICVFX_PerLightcardRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_PerLightcardRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_PerLightcardRenderMode>();
// ********** End Enum EDisplayClusterConfigurationICVFX_PerLightcardRenderMode ********************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode *************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_OVERRIDELIGHTCARDRENDERMODE(op) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Default) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Disabled) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Over) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Under) 

enum class EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode>();
// ********** End Enum EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode ***************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_OverrideChromakeyType *******************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_OVERRIDECHROMAKEYTYPE(op) \
	op(EDisplayClusterConfigurationICVFX_OverrideChromakeyType::Default) \
	op(EDisplayClusterConfigurationICVFX_OverrideChromakeyType::InnerFrustum) \
	op(EDisplayClusterConfigurationICVFX_OverrideChromakeyType::CustomChromakey) \
	op(EDisplayClusterConfigurationICVFX_OverrideChromakeyType::Disabled) 

enum class EDisplayClusterConfigurationICVFX_OverrideChromakeyType : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_OverrideChromakeyType> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_OverrideChromakeyType>();
// ********** End Enum EDisplayClusterConfigurationICVFX_OverrideChromakeyType *********************

// ********** Begin Enum EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode ****************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_OVERRIDECAMERARENDERMODE(op) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Default) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Disabled) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakey) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakeyMarkers) 

enum class EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode>();
// ********** End Enum EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode ******************

// ********** Begin Enum EDisplayClusterConfigurationViewport_StereoMode ***************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORT_STEREOMODE(op) \
	op(EDisplayClusterConfigurationViewport_StereoMode::Default) \
	op(EDisplayClusterConfigurationViewport_StereoMode::ForceMono) 

enum class EDisplayClusterConfigurationViewport_StereoMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewport_StereoMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationViewport_StereoMode>();
// ********** End Enum EDisplayClusterConfigurationViewport_StereoMode *****************************

// ********** Begin Enum EDisplayClusterConfigurationRenderFamilyMode ******************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONRENDERFAMILYMODE(op) \
	op(EDisplayClusterConfigurationRenderFamilyMode::None) \
	op(EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroups) \
	op(EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroupsAndStereo) \
	op(EDisplayClusterConfigurationRenderFamilyMode::MergeAnyPossible) 

enum class EDisplayClusterConfigurationRenderFamilyMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationRenderFamilyMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationRenderFamilyMode>();
// ********** End Enum EDisplayClusterConfigurationRenderFamilyMode ********************************

// ********** Begin Enum EDisplayClusterConfigurationCameraMotionBlurMode **************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONCAMERAMOTIONBLURMODE(op) \
	op(EDisplayClusterConfigurationCameraMotionBlurMode::Off) \
	op(EDisplayClusterConfigurationCameraMotionBlurMode::On) \
	op(EDisplayClusterConfigurationCameraMotionBlurMode::Override) 

enum class EDisplayClusterConfigurationCameraMotionBlurMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationCameraMotionBlurMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationCameraMotionBlurMode>();
// ********** End Enum EDisplayClusterConfigurationCameraMotionBlurMode ****************************

// ********** Begin Enum EDisplayClusterConfigurationViewportOverscanMode **************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORTOVERSCANMODE(op) \
	op(EDisplayClusterConfigurationViewportOverscanMode::Pixels) \
	op(EDisplayClusterConfigurationViewportOverscanMode::Percent) 

enum class EDisplayClusterConfigurationViewportOverscanMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewportOverscanMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportOverscanMode>();
// ********** End Enum EDisplayClusterConfigurationViewportOverscanMode ****************************

// ********** Begin Enum EDisplayClusterConfigurationViewportOverscanBlendMode *********************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORTOVERSCANBLENDMODE(op) \
	op(EDisplayClusterConfigurationViewportOverscanBlendMode::Disable) \
	op(EDisplayClusterConfigurationViewportOverscanBlendMode::Percent25) \
	op(EDisplayClusterConfigurationViewportOverscanBlendMode::Percent50) \
	op(EDisplayClusterConfigurationViewportOverscanBlendMode::Percent75) 

enum class EDisplayClusterConfigurationViewportOverscanBlendMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewportOverscanBlendMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportOverscanBlendMode>();
// ********** End Enum EDisplayClusterConfigurationViewportOverscanBlendMode ***********************

// ********** Begin Enum EDisplayClusterConfigurationRenderMode ************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONRENDERMODE(op) \
	op(EDisplayClusterConfigurationRenderMode::Mono) \
	op(EDisplayClusterConfigurationRenderMode::SideBySide) \
	op(EDisplayClusterConfigurationRenderMode::TopBottom) 

enum class EDisplayClusterConfigurationRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationRenderMode>();
// ********** End Enum EDisplayClusterConfigurationRenderMode **************************************

// ********** Begin Enum EDisplayClusterConfigurationViewportCustomFrustumMode *********************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORTCUSTOMFRUSTUMMODE(op) \
	op(EDisplayClusterConfigurationViewportCustomFrustumMode::Percent) \
	op(EDisplayClusterConfigurationViewportCustomFrustumMode::Pixels) 

enum class EDisplayClusterConfigurationViewportCustomFrustumMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewportCustomFrustumMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportCustomFrustumMode>();
// ********** End Enum EDisplayClusterConfigurationViewportCustomFrustumMode ***********************

// ********** Begin Enum EDisplayClusterConfigurationViewportLightcardOCIOMode *********************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORTLIGHTCARDOCIOMODE(op) \
	op(EDisplayClusterConfigurationViewportLightcardOCIOMode::nDisplay) \
	op(EDisplayClusterConfigurationViewportLightcardOCIOMode::Custom) \
	op(EDisplayClusterConfigurationViewportLightcardOCIOMode::None) 

enum class EDisplayClusterConfigurationViewportLightcardOCIOMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewportLightcardOCIOMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportLightcardOCIOMode>();
// ********** End Enum EDisplayClusterConfigurationViewportLightcardOCIOMode ***********************

// ********** Begin Enum EDisplayClusterConfigurationRootActorPreviewSettingsSource ****************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONROOTACTORPREVIEWSETTINGSSOURCE(op) \
	op(EDisplayClusterConfigurationRootActorPreviewSettingsSource::RootActor) \
	op(EDisplayClusterConfigurationRootActorPreviewSettingsSource::Configuration) 

enum class EDisplayClusterConfigurationRootActorPreviewSettingsSource : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationRootActorPreviewSettingsSource> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationRootActorPreviewSettingsSource>();
// ********** End Enum EDisplayClusterConfigurationRootActorPreviewSettingsSource ******************

// ********** Begin Enum EDisplayClusterConfigurationUpscalingMethod *******************************
#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONUPSCALINGMETHOD(op) \
	op(EDisplayClusterConfigurationUpscalingMethod::Default) \
	op(EDisplayClusterConfigurationUpscalingMethod::Disable) \
	op(EDisplayClusterConfigurationUpscalingMethod::FXAA) \
	op(EDisplayClusterConfigurationUpscalingMethod::MSAA) \
	op(EDisplayClusterConfigurationUpscalingMethod::TAA) \
	op(EDisplayClusterConfigurationUpscalingMethod::TSR) 

enum class EDisplayClusterConfigurationUpscalingMethod : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationUpscalingMethod> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterConfigurationUpscalingMethod>();
// ********** End Enum EDisplayClusterConfigurationUpscalingMethod *********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
