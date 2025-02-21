// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CEClonerEffectorShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEClonerEffectorShared_generated_h
#error "CEClonerEffectorShared.generated.h already included, missing '#pragma once' in CEClonerEffectorShared.h"
#endif
#define CLONEREFFECTOR_CEClonerEffectorShared_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_281_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCEClonerAttachmentItem_Statics; \
	CLONEREFFECTOR_API static class UScriptStruct* StaticStruct();


template<> CLONEREFFECTOR_API UScriptStruct* StaticStruct<struct FCEClonerAttachmentItem>();

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_334_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCEClonerAttachmentTree_Statics; \
	CLONEREFFECTOR_API static class UScriptStruct* StaticStruct();


template<> CLONEREFFECTOR_API UScriptStruct* StaticStruct<struct FCEClonerAttachmentTree>();

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_370_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCEClonerEffectorChannelData_Statics; \
	CLONEREFFECTOR_API static class UScriptStruct* StaticStruct();


template<> CLONEREFFECTOR_API UScriptStruct* StaticStruct<struct FCEClonerEffectorChannelData>();

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_455_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCEClonerGridConstraintSphere_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CLONEREFFECTOR_API UScriptStruct* StaticStruct<struct FCEClonerGridConstraintSphere>();

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_467_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCEClonerGridConstraintCylinder_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CLONEREFFECTOR_API UScriptStruct* StaticStruct<struct FCEClonerGridConstraintCylinder>();

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_482_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCEClonerGridConstraintTexture_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CLONEREFFECTOR_API UScriptStruct* StaticStruct<struct FCEClonerGridConstraintTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h


#define FOREACH_ENUM_ECECLONERAXIS(op) \
	op(ECEClonerAxis::X) \
	op(ECEClonerAxis::Y) \
	op(ECEClonerAxis::Z) \
	op(ECEClonerAxis::Custom) 

enum class ECEClonerAxis : uint8;
template<> struct TIsUEnumClass<ECEClonerAxis> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerAxis>();

#define FOREACH_ENUM_ECECLONERPLANE(op) \
	op(ECEClonerPlane::XY) \
	op(ECEClonerPlane::YZ) \
	op(ECEClonerPlane::XZ) \
	op(ECEClonerPlane::Custom) 

enum class ECEClonerPlane : uint8;
template<> struct TIsUEnumClass<ECEClonerPlane> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerPlane>();

#define FOREACH_ENUM_ECECLONERMESHRENDERMODE(op) \
	op(ECEClonerMeshRenderMode::Iterate) \
	op(ECEClonerMeshRenderMode::Random) \
	op(ECEClonerMeshRenderMode::Blend) 

enum class ECEClonerMeshRenderMode : uint8;
template<> struct TIsUEnumClass<ECEClonerMeshRenderMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerMeshRenderMode>();

#define FOREACH_ENUM_ECECLONERGRIDCONSTRAINT(op) \
	op(ECEClonerGridConstraint::None) \
	op(ECEClonerGridConstraint::Sphere) \
	op(ECEClonerGridConstraint::Cylinder) \
	op(ECEClonerGridConstraint::Texture) 

enum class ECEClonerGridConstraint : uint8;
template<> struct TIsUEnumClass<ECEClonerGridConstraint> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerGridConstraint>();

#define FOREACH_ENUM_ECECLONEREASING(op) \
	op(ECEClonerEasing::Linear) \
	op(ECEClonerEasing::InSine) \
	op(ECEClonerEasing::OutSine) \
	op(ECEClonerEasing::InOutSine) \
	op(ECEClonerEasing::InQuad) \
	op(ECEClonerEasing::OutQuad) \
	op(ECEClonerEasing::InOutQuad) \
	op(ECEClonerEasing::InCubic) \
	op(ECEClonerEasing::OutCubic) \
	op(ECEClonerEasing::InOutCubic) \
	op(ECEClonerEasing::InQuart) \
	op(ECEClonerEasing::OutQuart) \
	op(ECEClonerEasing::InOutQuart) \
	op(ECEClonerEasing::InQuint) \
	op(ECEClonerEasing::OutQuint) \
	op(ECEClonerEasing::InOutQuint) \
	op(ECEClonerEasing::InExpo) \
	op(ECEClonerEasing::OutExpo) \
	op(ECEClonerEasing::InOutExpo) \
	op(ECEClonerEasing::InCirc) \
	op(ECEClonerEasing::OutCirc) \
	op(ECEClonerEasing::InOutCirc) \
	op(ECEClonerEasing::InBack) \
	op(ECEClonerEasing::OutBack) \
	op(ECEClonerEasing::InOutBack) \
	op(ECEClonerEasing::InElastic) \
	op(ECEClonerEasing::OutElastic) \
	op(ECEClonerEasing::InOutElastic) \
	op(ECEClonerEasing::InBounce) \
	op(ECEClonerEasing::OutBounce) \
	op(ECEClonerEasing::InOutBounce) \
	op(ECEClonerEasing::Random) 

enum class ECEClonerEasing : uint8;
template<> struct TIsUEnumClass<ECEClonerEasing> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerEasing>();

#define FOREACH_ENUM_ECECLONERMESHASSET(op) \
	op(ECEClonerMeshAsset::StaticMesh) \
	op(ECEClonerMeshAsset::SkeletalMesh) 

enum class ECEClonerMeshAsset : uint8;
template<> struct TIsUEnumClass<ECEClonerMeshAsset> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerMeshAsset>();

#define FOREACH_ENUM_ECECLONERMESHSAMPLEDATA(op) \
	op(ECEClonerMeshSampleData::Vertices) \
	op(ECEClonerMeshSampleData::Triangles) \
	op(ECEClonerMeshSampleData::Sockets) \
	op(ECEClonerMeshSampleData::Bones) \
	op(ECEClonerMeshSampleData::Sections) 

enum class ECEClonerMeshSampleData : uint8;
template<> struct TIsUEnumClass<ECEClonerMeshSampleData> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerMeshSampleData>();

#define FOREACH_ENUM_ECECLONEREFFECTORTYPE(op) \
	op(ECEClonerEffectorType::Sphere) \
	op(ECEClonerEffectorType::Plane) \
	op(ECEClonerEffectorType::Box) \
	op(ECEClonerEffectorType::Unbound) \
	op(ECEClonerEffectorType::Radial) \
	op(ECEClonerEffectorType::Torus) 

enum class ECEClonerEffectorType : uint8;
template<> struct TIsUEnumClass<ECEClonerEffectorType> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerEffectorType>();

#define FOREACH_ENUM_ECECLONEREFFECTORMODE(op) \
	op(ECEClonerEffectorMode::Default) \
	op(ECEClonerEffectorMode::Target) \
	op(ECEClonerEffectorMode::NoiseField) \
	op(ECEClonerEffectorMode::Push) \
	op(ECEClonerEffectorMode::Step) 

enum class ECEClonerEffectorMode : uint8;
template<> struct TIsUEnumClass<ECEClonerEffectorMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerEffectorMode>();

#define FOREACH_ENUM_ECECLONEREFFECTORPUSHDIRECTION(op) \
	op(ECEClonerEffectorPushDirection::Forward) \
	op(ECEClonerEffectorPushDirection::Right) \
	op(ECEClonerEffectorPushDirection::Up) \
	op(ECEClonerEffectorPushDirection::Effector) \
	op(ECEClonerEffectorPushDirection::Random) 

enum class ECEClonerEffectorPushDirection : uint8;
template<> struct TIsUEnumClass<ECEClonerEffectorPushDirection> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerEffectorPushDirection>();

#define FOREACH_ENUM_ECECLONERATTACHMENTSTATUS(op) \
	op(ECEClonerAttachmentStatus::Invalid) \
	op(ECEClonerAttachmentStatus::Outdated) \
	op(ECEClonerAttachmentStatus::Updated) \
	op(ECEClonerAttachmentStatus::Updating) 

enum class ECEClonerAttachmentStatus : uint8;
template<> struct TIsUEnumClass<ECEClonerAttachmentStatus> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerAttachmentStatus>();

#define FOREACH_ENUM_ECECLONERTEXTURESAMPLECHANNEL(op) \
	op(ECEClonerTextureSampleChannel::RGBLuminance) \
	op(ECEClonerTextureSampleChannel::RGBAverage) \
	op(ECEClonerTextureSampleChannel::RGBMax) \
	op(ECEClonerTextureSampleChannel::R) \
	op(ECEClonerTextureSampleChannel::G) \
	op(ECEClonerTextureSampleChannel::B) \
	op(ECEClonerTextureSampleChannel::A) 

enum class ECEClonerTextureSampleChannel : uint8;
template<> struct TIsUEnumClass<ECEClonerTextureSampleChannel> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerTextureSampleChannel>();

#define FOREACH_ENUM_ECECLONERCOMPAREMODE(op) \
	op(ECEClonerCompareMode::Greater) \
	op(ECEClonerCompareMode::GreaterEqual) \
	op(ECEClonerCompareMode::Equal) \
	op(ECEClonerCompareMode::NotEqual) \
	op(ECEClonerCompareMode::Less) \
	op(ECEClonerCompareMode::LessEqual) 

enum class ECEClonerCompareMode : uint8;
template<> struct TIsUEnumClass<ECEClonerCompareMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerCompareMode>();

#define FOREACH_ENUM_ECECLONERSPAWNLOOPMODE(op) \
	op(ECEClonerSpawnLoopMode::Once) \
	op(ECEClonerSpawnLoopMode::Multiple) \
	op(ECEClonerSpawnLoopMode::Infinite) 

enum class ECEClonerSpawnLoopMode : uint8;
template<> struct TIsUEnumClass<ECEClonerSpawnLoopMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerSpawnLoopMode>();

#define FOREACH_ENUM_ECECLONERSPAWNBEHAVIORMODE(op) \
	op(ECEClonerSpawnBehaviorMode::Instant) \
	op(ECEClonerSpawnBehaviorMode::Rate) 

enum class ECEClonerSpawnBehaviorMode : uint8;
template<> struct TIsUEnumClass<ECEClonerSpawnBehaviorMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerSpawnBehaviorMode>();

#define FOREACH_ENUM_ECECLONERCOLLISIONRADIUSMODE(op) \
	op(ECEClonerCollisionRadiusMode::Manual) \
	op(ECEClonerCollisionRadiusMode::MinExtent) \
	op(ECEClonerCollisionRadiusMode::MaxExtent) \
	op(ECEClonerCollisionRadiusMode::ExtentLength) 

enum class ECEClonerCollisionRadiusMode : uint8;
template<> struct TIsUEnumClass<ECEClonerCollisionRadiusMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerCollisionRadiusMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
