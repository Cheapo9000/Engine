// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_AnimDynamics.h"

#ifdef ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h
#error "AnimNode_AnimDynamics.generated.h already included, missing '#pragma once' in AnimNode_AnimDynamics.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimPhysConstraintSetup ******************************************
struct Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FAnimPhysConstraintSetup;
// ********** End ScriptStruct FAnimPhysConstraintSetup ********************************************

// ********** Begin ScriptStruct FAnimPhysPlanarLimit **********************************************
struct Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FAnimPhysPlanarLimit;
// ********** End ScriptStruct FAnimPhysPlanarLimit ************************************************

// ********** Begin ScriptStruct FAnimPhysSphericalLimit *******************************************
struct Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_213_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FAnimPhysSphericalLimit;
// ********** End ScriptStruct FAnimPhysSphericalLimit *********************************************

// ********** Begin ScriptStruct FAnimPhysBodyDefinition *******************************************
struct Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FAnimPhysBodyDefinition;
// ********** End ScriptStruct FAnimPhysBodyDefinition *********************************************

// ********** Begin ScriptStruct FAnimPhysSimSpaceSettings *****************************************
struct Z_Construct_UScriptStruct_FAnimPhysSimSpaceSettings_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_307_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimPhysSimSpaceSettings_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FAnimPhysSimSpaceSettings;
// ********** End ScriptStruct FAnimPhysSimSpaceSettings *******************************************

// ********** Begin ScriptStruct FAnimNode_AnimDynamics ********************************************
struct Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_352_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


struct FAnimNode_AnimDynamics;
// ********** End ScriptStruct FAnimNode_AnimDynamics **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h

// ********** Begin Enum AnimPhysAngularConstraintType *********************************************
#define FOREACH_ENUM_ANIMPHYSANGULARCONSTRAINTTYPE(op) \
	op(AnimPhysAngularConstraintType::Angular) \
	op(AnimPhysAngularConstraintType::Cone) 

enum class AnimPhysAngularConstraintType : uint8;
template<> struct TIsUEnumClass<AnimPhysAngularConstraintType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<AnimPhysAngularConstraintType>();
// ********** End Enum AnimPhysAngularConstraintType ***********************************************

// ********** Begin Enum AnimPhysLinearConstraintType **********************************************
#define FOREACH_ENUM_ANIMPHYSLINEARCONSTRAINTTYPE(op) \
	op(AnimPhysLinearConstraintType::Free) \
	op(AnimPhysLinearConstraintType::Limited) 

enum class AnimPhysLinearConstraintType : uint8;
template<> struct TIsUEnumClass<AnimPhysLinearConstraintType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<AnimPhysLinearConstraintType>();
// ********** End Enum AnimPhysLinearConstraintType ************************************************

// ********** Begin Enum AnimPhysSimSpaceType ******************************************************
#define FOREACH_ENUM_ANIMPHYSSIMSPACETYPE(op) \
	op(AnimPhysSimSpaceType::Component) \
	op(AnimPhysSimSpaceType::Actor) \
	op(AnimPhysSimSpaceType::World) \
	op(AnimPhysSimSpaceType::RootRelative) \
	op(AnimPhysSimSpaceType::BoneRelative) 

enum class AnimPhysSimSpaceType : uint8;
template<> struct TIsUEnumClass<AnimPhysSimSpaceType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<AnimPhysSimSpaceType>();
// ********** End Enum AnimPhysSimSpaceType ********************************************************

// ********** Begin Enum ESphericalLimitType *******************************************************
#define FOREACH_ENUM_ESPHERICALLIMITTYPE(op) \
	op(ESphericalLimitType::Inner) \
	op(ESphericalLimitType::Outer) 

enum class ESphericalLimitType : uint8;
template<> struct TIsUEnumClass<ESphericalLimitType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESphericalLimitType>();
// ********** End Enum ESphericalLimitType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
