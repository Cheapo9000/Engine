// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSessionConfig.h"

#ifdef AUGMENTEDREALITY_ARSessionConfig_generated_h
#error "ARSessionConfig.generated.h already included, missing '#pragma once' in ARSessionConfig.h"
#endif
#define AUGMENTEDREALITY_ARSessionConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARCandidateImage;
class UARCandidateObject;
enum class EAREnvironmentCaptureProbeType : uint8;
enum class EARFaceTrackingDirection : uint8;
enum class EARFaceTrackingUpdate : uint8;
enum class EARFrameSyncMode : uint8;
enum class EARLightEstimationMode : uint8;
enum class EARPlaneDetectionMode : uint8;
enum class EARSceneReconstruction : uint8;
enum class EARSessionTrackingFeature : uint8;
enum class EARSessionType : uint8;
enum class EARWorldAlignment : uint8;
struct FARVideoFormat;

// ********** Begin Class UARSessionConfig *********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSceneReconstructionMethod); \
	DECLARE_FUNCTION(execSetSessionTrackingFeatureToEnable); \
	DECLARE_FUNCTION(execGetSceneReconstructionMethod); \
	DECLARE_FUNCTION(execGetEnabledSessionTrackingFeature); \
	DECLARE_FUNCTION(execSetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execGetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execSetFaceTrackingDirection); \
	DECLARE_FUNCTION(execGetFaceTrackingDirection); \
	DECLARE_FUNCTION(execSetDesiredVideoFormat); \
	DECLARE_FUNCTION(execGetDesiredVideoFormat); \
	DECLARE_FUNCTION(execAddCandidateObject); \
	DECLARE_FUNCTION(execSetCandidateObjectList); \
	DECLARE_FUNCTION(execGetCandidateObjectList); \
	DECLARE_FUNCTION(execSetWorldMapData); \
	DECLARE_FUNCTION(execGetWorldMapData); \
	DECLARE_FUNCTION(execGetEnvironmentCaptureProbeType); \
	DECLARE_FUNCTION(execGetMaxNumSimultaneousImagesTracked); \
	DECLARE_FUNCTION(execClearCandidateImages); \
	DECLARE_FUNCTION(execRemoveCandidateImageAtIndex); \
	DECLARE_FUNCTION(execRemoveCandidateImage); \
	DECLARE_FUNCTION(execAddCandidateImage); \
	DECLARE_FUNCTION(execGetCandidateImageList); \
	DECLARE_FUNCTION(execSetResetTrackedObjects); \
	DECLARE_FUNCTION(execShouldResetTrackedObjects); \
	DECLARE_FUNCTION(execSetResetCameraTracking); \
	DECLARE_FUNCTION(execShouldResetCameraTracking); \
	DECLARE_FUNCTION(execSetEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableCameraTracking); \
	DECLARE_FUNCTION(execShouldRenderCameraOverlay); \
	DECLARE_FUNCTION(execGetFrameSyncMode); \
	DECLARE_FUNCTION(execGetLightEstimationMode); \
	DECLARE_FUNCTION(execGetPlaneDetectionMode); \
	DECLARE_FUNCTION(execGetSessionType); \
	DECLARE_FUNCTION(execGetWorldAlignment);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UARSessionConfig, AUGMENTEDREALITY_API)


struct Z_Construct_UClass_UARSessionConfig_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend struct ::Z_Construct_UClass_UARSessionConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARSessionConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARSessionConfig_NoRegister) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARSessionConfig(UARSessionConfig&&) = delete; \
	UARSessionConfig(const UARSessionConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARSessionConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARSessionConfig) \
	AUGMENTEDREALITY_API virtual ~UARSessionConfig();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_181_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARSessionConfig;

// ********** End Class UARSessionConfig ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h

// ********** Begin Enum EARWorldAlignment *********************************************************
#define FOREACH_ENUM_EARWORLDALIGNMENT(op) \
	op(EARWorldAlignment::Gravity) \
	op(EARWorldAlignment::GravityAndHeading) \
	op(EARWorldAlignment::Camera) 

enum class EARWorldAlignment : uint8;
template<> struct TIsUEnumClass<EARWorldAlignment> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARWorldAlignment>();
// ********** End Enum EARWorldAlignment ***********************************************************

// ********** Begin Enum EARSessionType ************************************************************
#define FOREACH_ENUM_EARSESSIONTYPE(op) \
	op(EARSessionType::None) \
	op(EARSessionType::Orientation) \
	op(EARSessionType::World) \
	op(EARSessionType::Face) \
	op(EARSessionType::Image) \
	op(EARSessionType::ObjectScanning) \
	op(EARSessionType::PoseTracking) \
	op(EARSessionType::GeoTracking) 

enum class EARSessionType : uint8;
template<> struct TIsUEnumClass<EARSessionType> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARSessionType>();
// ********** End Enum EARSessionType **************************************************************

// ********** Begin Enum EARPlaneDetectionMode *****************************************************
#define FOREACH_ENUM_EARPLANEDETECTIONMODE(op) \
	op(EARPlaneDetectionMode::None) \
	op(EARPlaneDetectionMode::HorizontalPlaneDetection) \
	op(EARPlaneDetectionMode::VerticalPlaneDetection) 

enum class EARPlaneDetectionMode : uint8;
template<> struct TIsUEnumClass<EARPlaneDetectionMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARPlaneDetectionMode>();
// ********** End Enum EARPlaneDetectionMode *******************************************************

// ********** Begin Enum EARLightEstimationMode ****************************************************
#define FOREACH_ENUM_EARLIGHTESTIMATIONMODE(op) \
	op(EARLightEstimationMode::None) \
	op(EARLightEstimationMode::AmbientLightEstimate) \
	op(EARLightEstimationMode::DirectionalLightEstimate) 

enum class EARLightEstimationMode : uint8;
template<> struct TIsUEnumClass<EARLightEstimationMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARLightEstimationMode>();
// ********** End Enum EARLightEstimationMode ******************************************************

// ********** Begin Enum EARFrameSyncMode **********************************************************
#define FOREACH_ENUM_EARFRAMESYNCMODE(op) \
	op(EARFrameSyncMode::SyncTickWithCameraImage) \
	op(EARFrameSyncMode::SyncTickWithoutCameraImage) 

enum class EARFrameSyncMode : uint8;
template<> struct TIsUEnumClass<EARFrameSyncMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARFrameSyncMode>();
// ********** End Enum EARFrameSyncMode ************************************************************

// ********** Begin Enum EAREnvironmentCaptureProbeType ********************************************
#define FOREACH_ENUM_EARENVIRONMENTCAPTUREPROBETYPE(op) \
	op(EAREnvironmentCaptureProbeType::None) \
	op(EAREnvironmentCaptureProbeType::Manual) \
	op(EAREnvironmentCaptureProbeType::Automatic) 

enum class EAREnvironmentCaptureProbeType : uint8;
template<> struct TIsUEnumClass<EAREnvironmentCaptureProbeType> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAREnvironmentCaptureProbeType>();
// ********** End Enum EAREnvironmentCaptureProbeType **********************************************

// ********** Begin Enum EARFaceTrackingUpdate *****************************************************
#define FOREACH_ENUM_EARFACETRACKINGUPDATE(op) \
	op(EARFaceTrackingUpdate::CurvesAndGeo) \
	op(EARFaceTrackingUpdate::CurvesOnly) 

enum class EARFaceTrackingUpdate : uint8;
template<> struct TIsUEnumClass<EARFaceTrackingUpdate> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARFaceTrackingUpdate>();
// ********** End Enum EARFaceTrackingUpdate *******************************************************

// ********** Begin Enum EARSessionTrackingFeature *************************************************
#define FOREACH_ENUM_EARSESSIONTRACKINGFEATURE(op) \
	op(EARSessionTrackingFeature::None) \
	op(EARSessionTrackingFeature::PoseDetection2D) \
	op(EARSessionTrackingFeature::PersonSegmentation) \
	op(EARSessionTrackingFeature::PersonSegmentationWithDepth) \
	op(EARSessionTrackingFeature::SceneDepth) \
	op(EARSessionTrackingFeature::SmoothedSceneDepth) 

enum class EARSessionTrackingFeature : uint8;
template<> struct TIsUEnumClass<EARSessionTrackingFeature> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARSessionTrackingFeature>();
// ********** End Enum EARSessionTrackingFeature ***************************************************

// ********** Begin Enum EARSceneReconstruction ****************************************************
#define FOREACH_ENUM_EARSCENERECONSTRUCTION(op) \
	op(EARSceneReconstruction::None) \
	op(EARSceneReconstruction::MeshOnly) \
	op(EARSceneReconstruction::MeshWithClassification) 

enum class EARSceneReconstruction : uint8;
template<> struct TIsUEnumClass<EARSceneReconstruction> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARSceneReconstruction>();
// ********** End Enum EARSceneReconstruction ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
