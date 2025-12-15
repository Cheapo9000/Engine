// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeadMountedDisplayTypes.h"

#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h
#error "HeadMountedDisplayTypes.generated.h already included, missing '#pragma once' in HeadMountedDisplayTypes.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHandKeypoint : uint8;

// ********** Begin Class UHandKeypointConversion **************************************************
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_HandKeypointToInt32);


struct Z_Construct_UClass_UHandKeypointConversion_Statics;
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHandKeypointConversion_NoRegister();

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandKeypointConversion(); \
	friend struct ::Z_Construct_UClass_UHandKeypointConversion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HEADMOUNTEDDISPLAY_API UClass* ::Z_Construct_UClass_UHandKeypointConversion_NoRegister(); \
public: \
	DECLARE_CLASS2(UHandKeypointConversion, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), Z_Construct_UClass_UHandKeypointConversion_NoRegister) \
	DECLARE_SERIALIZER(UHandKeypointConversion)


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HEADMOUNTEDDISPLAY_API UHandKeypointConversion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHandKeypointConversion(UHandKeypointConversion&&) = delete; \
	UHandKeypointConversion(const UHandKeypointConversion&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HEADMOUNTEDDISPLAY_API, UHandKeypointConversion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandKeypointConversion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandKeypointConversion) \
	HEADMOUNTEDDISPLAY_API virtual ~UHandKeypointConversion();


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_292_PROLOG
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_295_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHandKeypointConversion;

// ********** End Class UHandKeypointConversion ****************************************************

// ********** Begin ScriptStruct FXRHMDData ********************************************************
struct Z_Construct_UScriptStruct_FXRHMDData_Statics;
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_344_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FXRHMDData_Statics; \
	HEADMOUNTEDDISPLAY_API static class UScriptStruct* StaticStruct();


struct FXRHMDData;
// ********** End ScriptStruct FXRHMDData **********************************************************

// ********** Begin ScriptStruct FXRMotionControllerState ******************************************
struct Z_Construct_UScriptStruct_FXRMotionControllerState_Statics;
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FXRMotionControllerState_Statics; \
	HEADMOUNTEDDISPLAY_API static class UScriptStruct* StaticStruct();


struct FXRMotionControllerState;
// ********** End ScriptStruct FXRMotionControllerState ********************************************

// ********** Begin ScriptStruct FXRHandTrackingState **********************************************
struct Z_Construct_UScriptStruct_FXRHandTrackingState_Statics;
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_404_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FXRHandTrackingState_Statics; \
	HEADMOUNTEDDISPLAY_API static class UScriptStruct* StaticStruct();


struct FXRHandTrackingState;
// ********** End ScriptStruct FXRHandTrackingState ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h

// ********** Begin Enum EOrientPositionSelector ***************************************************
#define FOREACH_ENUM_EORIENTPOSITIONSELECTOR(op) \
	op(EOrientPositionSelector::Orientation) \
	op(EOrientPositionSelector::Position) \
	op(EOrientPositionSelector::OrientationAndPosition) 

namespace EOrientPositionSelector { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrientPositionSelector::Type>();
// ********** End Enum EOrientPositionSelector *****************************************************

// ********** Begin Enum EHMDTrackingOrigin ********************************************************
#define FOREACH_ENUM_EHMDTRACKINGORIGIN(op) \
	op(EHMDTrackingOrigin::View) \
	op(EHMDTrackingOrigin::LocalFloor) \
	op(EHMDTrackingOrigin::Local) \
	op(EHMDTrackingOrigin::Stage) \
	op(EHMDTrackingOrigin::CustomOpenXR) 

namespace EHMDTrackingOrigin { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EHMDTrackingOrigin::Type>();
// ********** End Enum EHMDTrackingOrigin **********************************************************

// ********** Begin Enum EHMDWornState *************************************************************
#define FOREACH_ENUM_EHMDWORNSTATE(op) \
	op(EHMDWornState::Unknown) \
	op(EHMDWornState::Worn) \
	op(EHMDWornState::NotWorn) 

namespace EHMDWornState { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EHMDWornState::Type>();
// ********** End Enum EHMDWornState ***************************************************************

// ********** Begin Enum EXRDeviceConnectionResult *************************************************
#define FOREACH_ENUM_EXRDEVICECONNECTIONRESULT(op) \
	op(EXRDeviceConnectionResult::NoTrackingSystem) \
	op(EXRDeviceConnectionResult::FeatureNotSupported) \
	op(EXRDeviceConnectionResult::NoValidViewport) \
	op(EXRDeviceConnectionResult::MiscFailure) \
	op(EXRDeviceConnectionResult::Success) 

namespace EXRDeviceConnectionResult { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRDeviceConnectionResult::Type>();
// ********** End Enum EXRDeviceConnectionResult ***************************************************

// ********** Begin Enum EXRSystemFlags ************************************************************
#define FOREACH_ENUM_EXRSYSTEMFLAGS(op) \
	op(EXRSystemFlags::NoFlags) \
	op(EXRSystemFlags::IsAR) \
	op(EXRSystemFlags::IsTablet) \
	op(EXRSystemFlags::IsHeadMounted) \
	op(EXRSystemFlags::SupportsHandTracking) 

namespace EXRSystemFlags { enum Type : int; }
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRSystemFlags::Type>();
// ********** End Enum EXRSystemFlags **************************************************************

// ********** Begin Enum ESpectatorScreenMode ******************************************************
#define FOREACH_ENUM_ESPECTATORSCREENMODE(op) \
	op(ESpectatorScreenMode::Disabled) \
	op(ESpectatorScreenMode::SingleEyeLetterboxed) \
	op(ESpectatorScreenMode::Undistorted) \
	op(ESpectatorScreenMode::Distorted) \
	op(ESpectatorScreenMode::SingleEye) \
	op(ESpectatorScreenMode::SingleEyeCroppedToFill) \
	op(ESpectatorScreenMode::Texture) \
	op(ESpectatorScreenMode::TexturePlusEye) 

enum class ESpectatorScreenMode : uint8;
template<> struct TIsUEnumClass<ESpectatorScreenMode> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpectatorScreenMode>();
// ********** End Enum ESpectatorScreenMode ********************************************************

// ********** Begin Enum EXRTrackedDeviceType ******************************************************
#define FOREACH_ENUM_EXRTRACKEDDEVICETYPE(op) \
	op(EXRTrackedDeviceType::HeadMountedDisplay) \
	op(EXRTrackedDeviceType::Controller) \
	op(EXRTrackedDeviceType::TrackingReference) \
	op(EXRTrackedDeviceType::Tracker) \
	op(EXRTrackedDeviceType::Other) \
	op(EXRTrackedDeviceType::Invalid) \
	op(EXRTrackedDeviceType::Any) 

enum class EXRTrackedDeviceType : uint8;
template<> struct TIsUEnumClass<EXRTrackedDeviceType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRTrackedDeviceType>();
// ********** End Enum EXRTrackedDeviceType ********************************************************

// ********** Begin Enum EHandKeypoint *************************************************************
#define FOREACH_ENUM_EHANDKEYPOINT(op) \
	op(EHandKeypoint::Palm) \
	op(EHandKeypoint::Wrist) \
	op(EHandKeypoint::ThumbMetacarpal) \
	op(EHandKeypoint::ThumbProximal) \
	op(EHandKeypoint::ThumbDistal) \
	op(EHandKeypoint::ThumbTip) \
	op(EHandKeypoint::IndexMetacarpal) \
	op(EHandKeypoint::IndexProximal) \
	op(EHandKeypoint::IndexIntermediate) \
	op(EHandKeypoint::IndexDistal) \
	op(EHandKeypoint::IndexTip) \
	op(EHandKeypoint::MiddleMetacarpal) \
	op(EHandKeypoint::MiddleProximal) \
	op(EHandKeypoint::MiddleIntermediate) \
	op(EHandKeypoint::MiddleDistal) \
	op(EHandKeypoint::MiddleTip) \
	op(EHandKeypoint::RingMetacarpal) \
	op(EHandKeypoint::RingProximal) \
	op(EHandKeypoint::RingIntermediate) \
	op(EHandKeypoint::RingDistal) \
	op(EHandKeypoint::RingTip) \
	op(EHandKeypoint::LittleMetacarpal) \
	op(EHandKeypoint::LittleProximal) \
	op(EHandKeypoint::LittleIntermediate) \
	op(EHandKeypoint::LittleDistal) \
	op(EHandKeypoint::LittleTip) 

enum class EHandKeypoint : uint8;
template<> struct TIsUEnumClass<EHandKeypoint> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EHandKeypoint>();
// ********** End Enum EHandKeypoint ***************************************************************

// ********** Begin Enum EXRVisualType *************************************************************
#define FOREACH_ENUM_EXRVISUALTYPE(op) \
	op(EXRVisualType::Controller) \
	op(EXRVisualType::Hand) 

enum class EXRVisualType : uint8;
template<> struct TIsUEnumClass<EXRVisualType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRVisualType>();
// ********** End Enum EXRVisualType ***************************************************************

// ********** Begin Enum EXRSpaceType **************************************************************
#define FOREACH_ENUM_EXRSPACETYPE(op) \
	op(EXRSpaceType::UnrealWorldSpace) \
	op(EXRSpaceType::XRTrackingSpace) 

enum class EXRSpaceType : uint8;
template<> struct TIsUEnumClass<EXRSpaceType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRSpaceType>();
// ********** End Enum EXRSpaceType ****************************************************************

// ********** Begin Enum EXRControllerPoseType *****************************************************
#define FOREACH_ENUM_EXRCONTROLLERPOSETYPE(op) \
	op(EXRControllerPoseType::Aim) \
	op(EXRControllerPoseType::Grip) \
	op(EXRControllerPoseType::Palm) 

enum class EXRControllerPoseType : uint8;
template<> struct TIsUEnumClass<EXRControllerPoseType> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRControllerPoseType>();
// ********** End Enum EXRControllerPoseType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
