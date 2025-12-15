// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/NoExportTypes.h"

#ifdef COREUOBJECT_NoExportTypes_generated_h
#error "NoExportTypes.generated.h already included, missing '#pragma once' in NoExportTypes.h"
#endif
#define COREUOBJECT_NoExportTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h

// ********** Begin Enum ESearchCase ***************************************************************
#define FOREACH_ENUM_ESEARCHCASE(op) \
	op(ESearchCase::CaseSensitive) \
	op(ESearchCase::IgnoreCase) 

namespace ESearchCase { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESearchCase::Type>();
// ********** End Enum ESearchCase *****************************************************************

// ********** Begin Enum ESearchDir ****************************************************************
#define FOREACH_ENUM_ESEARCHDIR(op) \
	op(ESearchDir::FromStart) \
	op(ESearchDir::FromEnd) 

namespace ESearchDir { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESearchDir::Type>();
// ********** End Enum ESearchDir ******************************************************************

// ********** Begin Enum ELogTimes *****************************************************************
#define FOREACH_ENUM_ELOGTIMES(op) \
	op(ELogTimes::None) \
	op(ELogTimes::UTC) \
	op(ELogTimes::SinceGStartTime) \
	op(ELogTimes::Local) 

namespace ELogTimes { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELogTimes::Type>();
// ********** End Enum ELogTimes *******************************************************************

// ********** Begin Enum EAxis *********************************************************************
#define FOREACH_ENUM_EAXIS(op) \
	op(EAxis::None) \
	op(EAxis::X) \
	op(EAxis::Y) \
	op(EAxis::Z) 

namespace EAxis { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAxis::Type>();
// ********** End Enum EAxis ***********************************************************************

// ********** Begin Enum EAxisList *****************************************************************
#define FOREACH_ENUM_EAXISLIST(op) \
	op(EAxisList::None) \
	op(EAxisList::X) \
	op(EAxisList::Y) \
	op(EAxisList::Z) \
	op(EAxisList::Screen) \
	op(EAxisList::XY) \
	op(EAxisList::XZ) \
	op(EAxisList::YZ) \
	op(EAxisList::XYZ) \
	op(EAxisList::All) \
	op(EAxisList::ZRotation) \
	op(EAxisList::Rotate2D) \
	op(EAxisList::Left) \
	op(EAxisList::Up) \
	op(EAxisList::Forward) \
	op(EAxisList::LU) \
	op(EAxisList::LF) \
	op(EAxisList::UF) \
	op(EAxisList::LeftUpForward) 

namespace EAxisList { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAxisList::Type>();
// ********** End Enum EAxisList *******************************************************************

// ********** Begin Enum EInterpCurveMode **********************************************************
#define FOREACH_ENUM_EINTERPCURVEMODE(op) \
	op(CIM_Linear) \
	op(CIM_CurveAuto) \
	op(CIM_Constant) \
	op(CIM_CurveUser) \
	op(CIM_CurveBreak) \
	op(CIM_CurveAutoClamped) 

enum EInterpCurveMode : int;
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterpCurveMode>();
// ********** End Enum EInterpCurveMode ************************************************************

// ********** Begin Enum EPixelFormat **************************************************************
#define FOREACH_ENUM_EPIXELFORMAT(op) \
	op(PF_Unknown) \
	op(PF_A32B32G32R32F) \
	op(PF_B8G8R8A8) \
	op(PF_G8) \
	op(PF_G16) \
	op(PF_DXT1) \
	op(PF_DXT3) \
	op(PF_DXT5) \
	op(PF_UYVY) \
	op(PF_FloatRGB) \
	op(PF_FloatRGBA) \
	op(PF_DepthStencil) \
	op(PF_ShadowDepth) \
	op(PF_R32_FLOAT) \
	op(PF_G16R16) \
	op(PF_G16R16F) \
	op(PF_G16R16F_FILTER) \
	op(PF_G32R32F) \
	op(PF_A2B10G10R10) \
	op(PF_A16B16G16R16) \
	op(PF_D24) \
	op(PF_R16F) \
	op(PF_R16F_FILTER) \
	op(PF_BC5) \
	op(PF_V8U8) \
	op(PF_A1) \
	op(PF_FloatR11G11B10) \
	op(PF_A8) \
	op(PF_R32_UINT) \
	op(PF_R32_SINT) \
	op(PF_PVRTC2) \
	op(PF_PVRTC4) \
	op(PF_R16_UINT) \
	op(PF_R16_SINT) \
	op(PF_R16G16B16A16_UINT) \
	op(PF_R16G16B16A16_SINT) \
	op(PF_R5G6B5_UNORM) \
	op(PF_R8G8B8A8) \
	op(PF_A8R8G8B8) \
	op(PF_BC4) \
	op(PF_R8G8) \
	op(PF_ATC_RGB) \
	op(PF_ATC_RGBA_E) \
	op(PF_ATC_RGBA_I) \
	op(PF_X24_G8) \
	op(PF_ETC1) \
	op(PF_ETC2_RGB) \
	op(PF_ETC2_RGBA) \
	op(PF_R32G32B32A32_UINT) \
	op(PF_R16G16_UINT) \
	op(PF_ASTC_4x4) \
	op(PF_ASTC_6x6) \
	op(PF_ASTC_8x8) \
	op(PF_ASTC_10x10) \
	op(PF_ASTC_12x12) \
	op(PF_BC6H) \
	op(PF_BC7) \
	op(PF_R8_UINT) \
	op(PF_L8) \
	op(PF_XGXR8) \
	op(PF_R8G8B8A8_UINT) \
	op(PF_R8G8B8A8_SNORM) \
	op(PF_R16G16B16A16_UNORM) \
	op(PF_R16G16B16A16_SNORM) \
	op(PF_PLATFORM_HDR_0) \
	op(PF_PLATFORM_HDR_1) \
	op(PF_PLATFORM_HDR_2) \
	op(PF_NV12) \
	op(PF_R32G32_UINT) \
	op(PF_ETC2_R11_EAC) \
	op(PF_ETC2_RG11_EAC) \
	op(PF_R8) \
	op(PF_B5G5R5A1_UNORM) \
	op(PF_ASTC_4x4_HDR) \
	op(PF_ASTC_6x6_HDR) \
	op(PF_ASTC_8x8_HDR) \
	op(PF_ASTC_10x10_HDR) \
	op(PF_ASTC_12x12_HDR) \
	op(PF_G16R16_SNORM) \
	op(PF_R8G8_UINT) \
	op(PF_R32G32B32_UINT) \
	op(PF_R32G32B32_SINT) \
	op(PF_R32G32B32F) \
	op(PF_R8_SINT) \
	op(PF_R64_UINT) \
	op(PF_R9G9B9EXP5) \
	op(PF_P010) \
	op(PF_ASTC_4x4_NORM_RG) \
	op(PF_ASTC_6x6_NORM_RG) \
	op(PF_ASTC_8x8_NORM_RG) \
	op(PF_ASTC_10x10_NORM_RG) \
	op(PF_ASTC_12x12_NORM_RG) \
	op(PF_R16G16_SINT) 

enum EPixelFormat : int;
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPixelFormat>();
// ********** End Enum EPixelFormat ****************************************************************

// ********** Begin Enum EMouseCursor **************************************************************
#define FOREACH_ENUM_EMOUSECURSOR(op) \
	op(EMouseCursor::None) \
	op(EMouseCursor::Default) \
	op(EMouseCursor::TextEditBeam) \
	op(EMouseCursor::ResizeLeftRight) \
	op(EMouseCursor::ResizeUpDown) \
	op(EMouseCursor::ResizeSouthEast) \
	op(EMouseCursor::ResizeSouthWest) \
	op(EMouseCursor::CardinalCross) \
	op(EMouseCursor::Crosshairs) \
	op(EMouseCursor::Hand) \
	op(EMouseCursor::GrabHand) \
	op(EMouseCursor::GrabHandClosed) \
	op(EMouseCursor::SlashedCircle) \
	op(EMouseCursor::EyeDropper) \
	op(EMouseCursor::Custom) 

namespace EMouseCursor { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMouseCursor::Type>();
// ********** End Enum EMouseCursor ****************************************************************

// ********** Begin Enum EUnit *********************************************************************
#define FOREACH_ENUM_EUNIT(op) \
	op(EUnit::Micrometers) \
	op(EUnit::Millimeters) \
	op(EUnit::Centimeters) \
	op(EUnit::Meters) \
	op(EUnit::Kilometers) \
	op(EUnit::Inches) \
	op(EUnit::Feet) \
	op(EUnit::Yards) \
	op(EUnit::Miles) \
	op(EUnit::Lightyears) \
	op(EUnit::Degrees) \
	op(EUnit::Radians) \
	op(EUnit::CentimetersPerSecond) \
	op(EUnit::MetersPerSecond) \
	op(EUnit::KilometersPerHour) \
	op(EUnit::MilesPerHour) \
	op(EUnit::DegreesPerSecond) \
	op(EUnit::RadiansPerSecond) \
	op(EUnit::CentimetersPerSecondSquared) \
	op(EUnit::MetersPerSecondSquared) \
	op(EUnit::Celsius) \
	op(EUnit::Farenheit) \
	op(EUnit::Kelvin) \
	op(EUnit::Micrograms) \
	op(EUnit::Milligrams) \
	op(EUnit::Grams) \
	op(EUnit::Kilograms) \
	op(EUnit::MetricTons) \
	op(EUnit::Ounces) \
	op(EUnit::Pounds) \
	op(EUnit::Stones) \
	op(EUnit::GramsPerCubicCentimeter) \
	op(EUnit::GramsPerCubicMeter) \
	op(EUnit::KilogramsPerCubicCentimeter) \
	op(EUnit::KilogramsPerCubicMeter) \
	op(EUnit::Newtons) \
	op(EUnit::PoundsForce) \
	op(EUnit::KilogramsForce) \
	op(EUnit::KilogramCentimetersPerSecondSquared) \
	op(EUnit::NewtonMeters) \
	op(EUnit::KilogramCentimetersSquaredPerSecondSquared) \
	op(EUnit::NewtonSeconds) \
	op(EUnit::KilogramCentimeters) \
	op(EUnit::KilogramMeters) \
	op(EUnit::Hertz) \
	op(EUnit::Kilohertz) \
	op(EUnit::Megahertz) \
	op(EUnit::Gigahertz) \
	op(EUnit::RevolutionsPerMinute) \
	op(EUnit::Bytes) \
	op(EUnit::Kilobytes) \
	op(EUnit::Megabytes) \
	op(EUnit::Gigabytes) \
	op(EUnit::Terabytes) \
	op(EUnit::Lumens) \
	op(EUnit::Candela) \
	op(EUnit::Lux) \
	op(EUnit::CandelaPerMeter2) \
	op(EUnit::ExposureValue) \
	op(EUnit::Nanoseconds) \
	op(EUnit::Microseconds) \
	op(EUnit::Milliseconds) \
	op(EUnit::Seconds) \
	op(EUnit::Minutes) \
	op(EUnit::Hours) \
	op(EUnit::Days) \
	op(EUnit::Months) \
	op(EUnit::Years) \
	op(EUnit::PixelsPerInch) \
	op(EUnit::Percentage) \
	op(EUnit::Multiplier) \
	op(EUnit::Pascals) \
	op(EUnit::KiloPascals) \
	op(EUnit::MegaPascals) \
	op(EUnit::GigaPascals) \
	op(EUnit::Unspecified) 

enum class EUnit : uint8;
template<> struct TIsUEnumClass<EUnit> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EUnit>();
// ********** End Enum EUnit ***********************************************************************

// ********** Begin Enum EAppMsgCategory ***********************************************************
#define FOREACH_ENUM_EAPPMSGCATEGORY(op) \
	op(EAppMsgCategory::Warning) \
	op(EAppMsgCategory::Error) \
	op(EAppMsgCategory::Success) \
	op(EAppMsgCategory::Info) 

enum class EAppMsgCategory : uint8;
template<> struct TIsUEnumClass<EAppMsgCategory> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAppMsgCategory>();
// ********** End Enum EAppMsgCategory *************************************************************

// ********** Begin Enum EAppReturnType ************************************************************
#define FOREACH_ENUM_EAPPRETURNTYPE(op) \
	op(EAppReturnType::No) \
	op(EAppReturnType::Yes) \
	op(EAppReturnType::YesAll) \
	op(EAppReturnType::NoAll) \
	op(EAppReturnType::Cancel) \
	op(EAppReturnType::Ok) \
	op(EAppReturnType::Retry) \
	op(EAppReturnType::Continue) 

namespace EAppReturnType { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAppReturnType::Type>();
// ********** End Enum EAppReturnType **************************************************************

// ********** Begin Enum EAppMsgType ***************************************************************
#define FOREACH_ENUM_EAPPMSGTYPE(op) \
	op(EAppMsgType::Ok) \
	op(EAppMsgType::YesNo) \
	op(EAppMsgType::OkCancel) \
	op(EAppMsgType::YesNoCancel) \
	op(EAppMsgType::CancelRetryContinue) \
	op(EAppMsgType::YesNoYesAllNoAll) \
	op(EAppMsgType::YesNoYesAllNoAllCancel) \
	op(EAppMsgType::YesNoYesAll) 

namespace EAppMsgType { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAppMsgType::Type>();
// ********** End Enum EAppMsgType *****************************************************************

// ********** Begin Enum ERangeBoundTypes **********************************************************
#define FOREACH_ENUM_ERANGEBOUNDTYPES(op) \
	op(ERangeBoundTypes::Exclusive) \
	op(ERangeBoundTypes::Inclusive) \
	op(ERangeBoundTypes::Open) 

namespace ERangeBoundTypes { enum Type : int; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERangeBoundTypes::Type>();
// ********** End Enum ERangeBoundTypes ************************************************************

// ********** Begin Enum ELocalizedTextSourceCategory **********************************************
#define FOREACH_ENUM_ELOCALIZEDTEXTSOURCECATEGORY(op) \
	op(ELocalizedTextSourceCategory::Game) \
	op(ELocalizedTextSourceCategory::Engine) \
	op(ELocalizedTextSourceCategory::Editor) 

enum class ELocalizedTextSourceCategory : uint8;
template<> struct TIsUEnumClass<ELocalizedTextSourceCategory> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocalizedTextSourceCategory>();
// ********** End Enum ELocalizedTextSourceCategory ************************************************

// ********** Begin Enum EAutomationEventType ******************************************************
#define FOREACH_ENUM_EAUTOMATIONEVENTTYPE(op) \
	op(EAutomationEventType::Info) \
	op(EAutomationEventType::Warning) \
	op(EAutomationEventType::Error) 

enum class EAutomationEventType : uint8;
template<> struct TIsUEnumClass<EAutomationEventType> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutomationEventType>();
// ********** End Enum EAutomationEventType ********************************************************

// ********** Begin Enum EInputDeviceConnectionState ***********************************************
#define FOREACH_ENUM_EINPUTDEVICECONNECTIONSTATE(op) \
	op(EInputDeviceConnectionState::Invalid) \
	op(EInputDeviceConnectionState::Unknown) \
	op(EInputDeviceConnectionState::Disconnected) \
	op(EInputDeviceConnectionState::Connected) 

enum class EInputDeviceConnectionState : uint8;
template<> struct TIsUEnumClass<EInputDeviceConnectionState> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputDeviceConnectionState>();
// ********** End Enum EInputDeviceConnectionState *************************************************

// ********** Begin Enum EInputDeviceMappingPolicy *************************************************
#define FOREACH_ENUM_EINPUTDEVICEMAPPINGPOLICY(op) \
	op(EInputDeviceMappingPolicy::Invalid) \
	op(EInputDeviceMappingPolicy::UseManagedPlatformLogin) \
	op(EInputDeviceMappingPolicy::PrimaryUserSharesKeyboardAndFirstGamepad) \
	op(EInputDeviceMappingPolicy::CreateUniquePlatformUserForEachDevice) \
	op(EInputDeviceMappingPolicy::MapAllDevicesToPrimaryUser) 

enum class EInputDeviceMappingPolicy : int32;
template<> struct TIsUEnumClass<EInputDeviceMappingPolicy> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputDeviceMappingPolicy>();
// ********** End Enum EInputDeviceMappingPolicy ***************************************************

// ********** Begin Enum EInputDeviceTriggerMask ***************************************************
#define FOREACH_ENUM_EINPUTDEVICETRIGGERMASK(op) \
	op(EInputDeviceTriggerMask::None) \
	op(EInputDeviceTriggerMask::Left) \
	op(EInputDeviceTriggerMask::Right) \
	op(EInputDeviceTriggerMask::All) 

enum class EInputDeviceTriggerMask : uint8;
template<> struct TIsUEnumClass<EInputDeviceTriggerMask> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputDeviceTriggerMask>();
// ********** End Enum EInputDeviceTriggerMask *****************************************************

// ********** Begin Enum EInputDeviceAnalogStickMask ***********************************************
#define FOREACH_ENUM_EINPUTDEVICEANALOGSTICKMASK(op) \
	op(EInputDeviceAnalogStickMask::None) \
	op(EInputDeviceAnalogStickMask::Left) \
	op(EInputDeviceAnalogStickMask::Right) 

enum class EInputDeviceAnalogStickMask : uint8;
template<> struct TIsUEnumClass<EInputDeviceAnalogStickMask> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputDeviceAnalogStickMask>();
// ********** End Enum EInputDeviceAnalogStickMask *************************************************

// ********** Begin Enum EDataValidationResult *****************************************************
#define FOREACH_ENUM_EDATAVALIDATIONRESULT(op) \
	op(EDataValidationResult::Invalid) \
	op(EDataValidationResult::Valid) \
	op(EDataValidationResult::NotValidated) 

enum class EDataValidationResult : uint8;
template<> struct TIsUEnumClass<EDataValidationResult> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataValidationResult>();
// ********** End Enum EDataValidationResult *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
