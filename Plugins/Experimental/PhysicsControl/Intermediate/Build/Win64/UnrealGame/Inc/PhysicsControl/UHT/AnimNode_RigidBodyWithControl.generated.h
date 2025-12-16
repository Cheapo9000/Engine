// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNode_RigidBodyWithControl.h"

#ifdef PHYSICSCONTROL_AnimNode_RigidBodyWithControl_generated_h
#error "AnimNode_RigidBodyWithControl.generated.h already included, missing '#pragma once' in AnimNode_RigidBodyWithControl.h"
#endif
#define PHYSICSCONTROL_AnimNode_RigidBodyWithControl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_RigidBodyWithControl ************************************
struct Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics;
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_AnimNode_RigidBodyWithControl_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics; \
	PHYSICSCONTROL_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


struct FAnimNode_RigidBodyWithControl;
// ********** End ScriptStruct FAnimNode_RigidBodyWithControl **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_AnimNode_RigidBodyWithControl_h

// ********** Begin Enum MapConstraintsBehaviorType ************************************************
#define FOREACH_ENUM_MAPCONSTRAINTSBEHAVIORTYPE(op) \
	op(MapConstraintsBehaviorType::AuthoredSkeleton) \
	op(MapConstraintsBehaviorType::DefaultTransform) \
	op(MapConstraintsBehaviorType::None) 

enum class MapConstraintsBehaviorType : uint8;
template<> struct TIsUEnumClass<MapConstraintsBehaviorType> { enum { Value = true }; };
template<> PHYSICSCONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<MapConstraintsBehaviorType>();
// ********** End Enum MapConstraintsBehaviorType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
