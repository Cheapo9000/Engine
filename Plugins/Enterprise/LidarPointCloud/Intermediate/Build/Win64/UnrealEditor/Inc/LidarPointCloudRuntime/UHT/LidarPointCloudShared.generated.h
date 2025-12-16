// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LidarPointCloudShared.h"

#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudShared_generated_h
#error "LidarPointCloudShared.generated.h already included, missing '#pragma once' in LidarPointCloudShared.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudShared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLidarPointCloudNormal ********************************************
struct Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics;
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLidarPointCloudNormal;
// ********** End ScriptStruct FLidarPointCloudNormal **********************************************

// ********** Begin ScriptStruct FLidarPointCloudPoint *********************************************
struct Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics;
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLidarPointCloudPoint;
// ********** End ScriptStruct FLidarPointCloudPoint ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h

// ********** Begin Enum ELidarPointCloudAsyncMode *************************************************
#define FOREACH_ENUM_ELIDARPOINTCLOUDASYNCMODE(op) \
	op(ELidarPointCloudAsyncMode::Success) \
	op(ELidarPointCloudAsyncMode::Failure) \
	op(ELidarPointCloudAsyncMode::Progress) 

enum class ELidarPointCloudAsyncMode : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudAsyncMode> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELidarPointCloudAsyncMode>();
// ********** End Enum ELidarPointCloudAsyncMode ***************************************************

// ********** Begin Enum ELidarPointCloudScalingMethod *********************************************
#define FOREACH_ENUM_ELIDARPOINTCLOUDSCALINGMETHOD(op) \
	op(ELidarPointCloudScalingMethod::PerNode) \
	op(ELidarPointCloudScalingMethod::PerNodeAdaptive) \
	op(ELidarPointCloudScalingMethod::PerPoint) \
	op(ELidarPointCloudScalingMethod::FixedScreenSize) 

enum class ELidarPointCloudScalingMethod : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudScalingMethod> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELidarPointCloudScalingMethod>();
// ********** End Enum ELidarPointCloudScalingMethod ***********************************************

// ********** Begin Enum ELidarClippingVolumeMode **************************************************
#define FOREACH_ENUM_ELIDARCLIPPINGVOLUMEMODE(op) \
	op(ELidarClippingVolumeMode::ClipInside) \
	op(ELidarClippingVolumeMode::ClipOutside) 

enum class ELidarClippingVolumeMode : uint8;
template<> struct TIsUEnumClass<ELidarClippingVolumeMode> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELidarClippingVolumeMode>();
// ********** End Enum ELidarClippingVolumeMode ****************************************************

// ********** Begin Enum ELidarPointCloudColorationMode ********************************************
#define FOREACH_ENUM_ELIDARPOINTCLOUDCOLORATIONMODE(op) \
	op(ELidarPointCloudColorationMode::None) \
	op(ELidarPointCloudColorationMode::Data) \
	op(ELidarPointCloudColorationMode::DataWithClassificationAlpha) \
	op(ELidarPointCloudColorationMode::Elevation) \
	op(ELidarPointCloudColorationMode::Position) \
	op(ELidarPointCloudColorationMode::Classification) 

enum class ELidarPointCloudColorationMode : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudColorationMode> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELidarPointCloudColorationMode>();
// ********** End Enum ELidarPointCloudColorationMode **********************************************

// ********** Begin Enum ELidarPointCloudSpriteShape ***********************************************
#define FOREACH_ENUM_ELIDARPOINTCLOUDSPRITESHAPE(op) \
	op(ELidarPointCloudSpriteShape::Square) \
	op(ELidarPointCloudSpriteShape::Circle) 

enum class ELidarPointCloudSpriteShape : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudSpriteShape> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELidarPointCloudSpriteShape>();
// ********** End Enum ELidarPointCloudSpriteShape *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
