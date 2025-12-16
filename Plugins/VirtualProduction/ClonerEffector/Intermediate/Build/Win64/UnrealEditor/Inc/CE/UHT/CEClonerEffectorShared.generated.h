// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CEClonerEffectorShared.h"

#ifdef CLONEREFFECTOR_CEClonerEffectorShared_generated_h
#error "CEClonerEffectorShared.generated.h already included, missing '#pragma once' in CEClonerEffectorShared.h"
#endif
#define CLONEREFFECTOR_CEClonerEffectorShared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCEClonerEffectorChannelData **************************************
struct Z_Construct_UScriptStruct_FCEClonerEffectorChannelData_Statics;
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_293_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCEClonerEffectorChannelData_Statics; \
	CLONEREFFECTOR_API static class UScriptStruct* StaticStruct();


struct FCEClonerEffectorChannelData;
// ********** End ScriptStruct FCEClonerEffectorChannelData ****************************************

// ********** Begin ScriptStruct FCEClonerGridConstraintSphere *************************************
struct Z_Construct_UScriptStruct_FCEClonerGridConstraintSphere_Statics;
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_400_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCEClonerGridConstraintSphere_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCEClonerGridConstraintSphere;
// ********** End ScriptStruct FCEClonerGridConstraintSphere ***************************************

// ********** Begin ScriptStruct FCEClonerGridConstraintCylinder ***********************************
struct Z_Construct_UScriptStruct_FCEClonerGridConstraintCylinder_Statics;
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_412_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCEClonerGridConstraintCylinder_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCEClonerGridConstraintCylinder;
// ********** End ScriptStruct FCEClonerGridConstraintCylinder *************************************

// ********** Begin ScriptStruct FCEClonerGridConstraintTexture ************************************
struct Z_Construct_UScriptStruct_FCEClonerGridConstraintTexture_Statics;
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h_427_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCEClonerGridConstraintTexture_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCEClonerGridConstraintTexture;
// ********** End ScriptStruct FCEClonerGridConstraintTexture **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_CEClonerEffectorShared_h

// ********** Begin Enum ECEClonerAxis *************************************************************
#define FOREACH_ENUM_ECECLONERAXIS(op) \
	op(ECEClonerAxis::X) \
	op(ECEClonerAxis::Y) \
	op(ECEClonerAxis::Z) \
	op(ECEClonerAxis::Custom) 

enum class ECEClonerAxis : uint8;
template<> struct TIsUEnumClass<ECEClonerAxis> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerAxis>();
// ********** End Enum ECEClonerAxis ***************************************************************

// ********** Begin Enum ECEClonerPlane ************************************************************
#define FOREACH_ENUM_ECECLONERPLANE(op) \
	op(ECEClonerPlane::XY) \
	op(ECEClonerPlane::YZ) \
	op(ECEClonerPlane::XZ) \
	op(ECEClonerPlane::Custom) 

enum class ECEClonerPlane : uint8;
template<> struct TIsUEnumClass<ECEClonerPlane> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerPlane>();
// ********** End Enum ECEClonerPlane **************************************************************

// ********** Begin Enum ECEClonerMeshRenderMode ***************************************************
#define FOREACH_ENUM_ECECLONERMESHRENDERMODE(op) \
	op(ECEClonerMeshRenderMode::Iterate) \
	op(ECEClonerMeshRenderMode::Random) \
	op(ECEClonerMeshRenderMode::Blend) 

enum class ECEClonerMeshRenderMode : uint8;
template<> struct TIsUEnumClass<ECEClonerMeshRenderMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerMeshRenderMode>();
// ********** End Enum ECEClonerMeshRenderMode *****************************************************

// ********** Begin Enum ECEClonerGridConstraint ***************************************************
#define FOREACH_ENUM_ECECLONERGRIDCONSTRAINT(op) \
	op(ECEClonerGridConstraint::None) \
	op(ECEClonerGridConstraint::Sphere) \
	op(ECEClonerGridConstraint::Cylinder) \
	op(ECEClonerGridConstraint::Texture) 

enum class ECEClonerGridConstraint : uint8;
template<> struct TIsUEnumClass<ECEClonerGridConstraint> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerGridConstraint>();
// ********** End Enum ECEClonerGridConstraint *****************************************************

// ********** Begin Enum ECEClonerEasing ***********************************************************
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
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerEasing>();
// ********** End Enum ECEClonerEasing *************************************************************

// ********** Begin Enum ECEClonerMeshAsset ********************************************************
#define FOREACH_ENUM_ECECLONERMESHASSET(op) \
	op(ECEClonerMeshAsset::StaticMesh) \
	op(ECEClonerMeshAsset::SkeletalMesh) 

enum class ECEClonerMeshAsset : uint8;
template<> struct TIsUEnumClass<ECEClonerMeshAsset> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerMeshAsset>();
// ********** End Enum ECEClonerMeshAsset **********************************************************

// ********** Begin Enum ECEClonerMeshSampleData ***************************************************
#define FOREACH_ENUM_ECECLONERMESHSAMPLEDATA(op) \
	op(ECEClonerMeshSampleData::Vertices) \
	op(ECEClonerMeshSampleData::Triangles) \
	op(ECEClonerMeshSampleData::Sockets) \
	op(ECEClonerMeshSampleData::Bones) \
	op(ECEClonerMeshSampleData::Sections) 

enum class ECEClonerMeshSampleData : uint8;
template<> struct TIsUEnumClass<ECEClonerMeshSampleData> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerMeshSampleData>();
// ********** End Enum ECEClonerMeshSampleData *****************************************************

// ********** Begin Enum ECEClonerEffectorType *****************************************************
#define FOREACH_ENUM_ECECLONEREFFECTORTYPE(op) \
	op(ECEClonerEffectorType::Sphere) \
	op(ECEClonerEffectorType::Plane) \
	op(ECEClonerEffectorType::Box) \
	op(ECEClonerEffectorType::Unbound) \
	op(ECEClonerEffectorType::Radial) \
	op(ECEClonerEffectorType::Torus) 

enum class ECEClonerEffectorType : uint8;
template<> struct TIsUEnumClass<ECEClonerEffectorType> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerEffectorType>();
// ********** End Enum ECEClonerEffectorType *******************************************************

// ********** Begin Enum ECEClonerEffectorMode *****************************************************
#define FOREACH_ENUM_ECECLONEREFFECTORMODE(op) \
	op(ECEClonerEffectorMode::Default) \
	op(ECEClonerEffectorMode::Target) \
	op(ECEClonerEffectorMode::Procedural) \
	op(ECEClonerEffectorMode::Push) \
	op(ECEClonerEffectorMode::Step) \
	op(ECEClonerEffectorMode::Cull) \
	op(ECEClonerEffectorMode::Cancel) 

enum class ECEClonerEffectorMode : uint8;
template<> struct TIsUEnumClass<ECEClonerEffectorMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerEffectorMode>();
// ********** End Enum ECEClonerEffectorMode *******************************************************

// ********** Begin Enum ECEClonerEffectorProceduralPattern ****************************************
#define FOREACH_ENUM_ECECLONEREFFECTORPROCEDURALPATTERN(op) \
	op(ECEClonerEffectorProceduralPattern::CurlNoise) \
	op(ECEClonerEffectorProceduralPattern::DirectionalWave) \
	op(ECEClonerEffectorProceduralPattern::CircularWave) 

enum class ECEClonerEffectorProceduralPattern : uint8;
template<> struct TIsUEnumClass<ECEClonerEffectorProceduralPattern> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerEffectorProceduralPattern>();
// ********** End Enum ECEClonerEffectorProceduralPattern ******************************************

// ********** Begin Enum ECEClonerEffectorPushDirection ********************************************
#define FOREACH_ENUM_ECECLONEREFFECTORPUSHDIRECTION(op) \
	op(ECEClonerEffectorPushDirection::Forward) \
	op(ECEClonerEffectorPushDirection::Right) \
	op(ECEClonerEffectorPushDirection::Up) \
	op(ECEClonerEffectorPushDirection::Effector) \
	op(ECEClonerEffectorPushDirection::Random) 

enum class ECEClonerEffectorPushDirection : uint8;
template<> struct TIsUEnumClass<ECEClonerEffectorPushDirection> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerEffectorPushDirection>();
// ********** End Enum ECEClonerEffectorPushDirection **********************************************

// ********** Begin Enum ECEClonerTextureSampleChannel *********************************************
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
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerTextureSampleChannel>();
// ********** End Enum ECEClonerTextureSampleChannel ***********************************************

// ********** Begin Enum ECEClonerCompareMode ******************************************************
#define FOREACH_ENUM_ECECLONERCOMPAREMODE(op) \
	op(ECEClonerCompareMode::Greater) \
	op(ECEClonerCompareMode::GreaterEqual) \
	op(ECEClonerCompareMode::Equal) \
	op(ECEClonerCompareMode::NotEqual) \
	op(ECEClonerCompareMode::Less) \
	op(ECEClonerCompareMode::LessEqual) 

enum class ECEClonerCompareMode : uint8;
template<> struct TIsUEnumClass<ECEClonerCompareMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerCompareMode>();
// ********** End Enum ECEClonerCompareMode ********************************************************

// ********** Begin Enum ECEClonerSpawnLoopMode ****************************************************
#define FOREACH_ENUM_ECECLONERSPAWNLOOPMODE(op) \
	op(ECEClonerSpawnLoopMode::Once) \
	op(ECEClonerSpawnLoopMode::Multiple) \
	op(ECEClonerSpawnLoopMode::Infinite) 

enum class ECEClonerSpawnLoopMode : uint8;
template<> struct TIsUEnumClass<ECEClonerSpawnLoopMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerSpawnLoopMode>();
// ********** End Enum ECEClonerSpawnLoopMode ******************************************************

// ********** Begin Enum ECEClonerSpawnBehaviorMode ************************************************
#define FOREACH_ENUM_ECECLONERSPAWNBEHAVIORMODE(op) \
	op(ECEClonerSpawnBehaviorMode::Instant) \
	op(ECEClonerSpawnBehaviorMode::Rate) 

enum class ECEClonerSpawnBehaviorMode : uint8;
template<> struct TIsUEnumClass<ECEClonerSpawnBehaviorMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerSpawnBehaviorMode>();
// ********** End Enum ECEClonerSpawnBehaviorMode **************************************************

// ********** Begin Enum ECEClonerCollisionRadiusMode **********************************************
#define FOREACH_ENUM_ECECLONERCOLLISIONRADIUSMODE(op) \
	op(ECEClonerCollisionRadiusMode::Manual) \
	op(ECEClonerCollisionRadiusMode::MinExtent) \
	op(ECEClonerCollisionRadiusMode::MaxExtent) \
	op(ECEClonerCollisionRadiusMode::ExtentLength) 

enum class ECEClonerCollisionRadiusMode : uint8;
template<> struct TIsUEnumClass<ECEClonerCollisionRadiusMode> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerCollisionRadiusMode>();
// ********** End Enum ECEClonerCollisionRadiusMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
