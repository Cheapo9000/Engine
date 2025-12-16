// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IKRigDataTypes.h"

#ifdef IKRIG_IKRigDataTypes_generated_h
#error "IKRigDataTypes.generated.h already included, missing '#pragma once' in IKRigDataTypes.h"
#endif
#define IKRIG_IKRigDataTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIKRigGoal ********************************************************
struct Z_Construct_UScriptStruct_FIKRigGoal_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigGoal_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRigGoal;
// ********** End ScriptStruct FIKRigGoal **********************************************************

// ********** Begin ScriptStruct FIKRigGoalContainer ***********************************************
struct Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRigGoalContainer;
// ********** End ScriptStruct FIKRigGoalContainer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDataTypes_h

// ********** Begin Enum EIKRigGoalSpace ***********************************************************
#define FOREACH_ENUM_EIKRIGGOALSPACE(op) \
	op(EIKRigGoalSpace::Component) \
	op(EIKRigGoalSpace::Additive) \
	op(EIKRigGoalSpace::World) 

enum class EIKRigGoalSpace : uint8;
template<> struct TIsUEnumClass<EIKRigGoalSpace> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EIKRigGoalSpace>();
// ********** End Enum EIKRigGoalSpace *************************************************************

// ********** Begin Enum EIKRigGoalTransformSource *************************************************
#define FOREACH_ENUM_EIKRIGGOALTRANSFORMSOURCE(op) \
	op(EIKRigGoalTransformSource::Manual) \
	op(EIKRigGoalTransformSource::Bone) \
	op(EIKRigGoalTransformSource::ActorComponent) 

enum class EIKRigGoalTransformSource : uint8;
template<> struct TIsUEnumClass<EIKRigGoalTransformSource> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EIKRigGoalTransformSource>();
// ********** End Enum EIKRigGoalTransformSource ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
