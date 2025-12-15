// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNode_Inertialization.h"

#ifdef ENGINE_AnimNode_Inertialization_generated_h
#error "AnimNode_Inertialization.generated.h already included, missing '#pragma once' in AnimNode_Inertialization.h"
#endif
#define ENGINE_AnimNode_Inertialization_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInertializationPose **********************************************
struct Z_Construct_UScriptStruct_FInertializationPose_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInertializationPose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInertializationPose;
// ********** End ScriptStruct FInertializationPose ************************************************

// ********** Begin ScriptStruct FInertializationBoneDiff ******************************************
struct Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_206_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInertializationBoneDiff;
// ********** End ScriptStruct FInertializationBoneDiff ********************************************

// ********** Begin ScriptStruct FInertializationPoseDiff ******************************************
struct Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_266_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInertializationPoseDiff;
// ********** End ScriptStruct FInertializationPoseDiff ********************************************

// ********** Begin ScriptStruct FAnimNode_Inertialization *****************************************
struct Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_305_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_Inertialization;
// ********** End ScriptStruct FAnimNode_Inertialization *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h

// ********** Begin Enum EInertializationState *****************************************************
#define FOREACH_ENUM_EINERTIALIZATIONSTATE(op) \
	op(EInertializationState::Inactive) \
	op(EInertializationState::Pending) \
	op(EInertializationState::Active) 

enum class EInertializationState : uint8;
template<> struct TIsUEnumClass<EInertializationState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInertializationState>();
// ********** End Enum EInertializationState *******************************************************

// ********** Begin Enum EInertializationBoneState *************************************************
#define FOREACH_ENUM_EINERTIALIZATIONBONESTATE(op) \
	op(EInertializationBoneState::Invalid) \
	op(EInertializationBoneState::Valid) \
	op(EInertializationBoneState::Excluded) 

enum class EInertializationBoneState : uint8;
template<> struct TIsUEnumClass<EInertializationBoneState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInertializationBoneState>();
// ********** End Enum EInertializationBoneState ***************************************************

// ********** Begin Enum EInertializationSpace *****************************************************
#define FOREACH_ENUM_EINERTIALIZATIONSPACE(op) \
	op(EInertializationSpace::Default) \
	op(EInertializationSpace::WorldSpace) \
	op(EInertializationSpace::WorldRotation) 

enum class EInertializationSpace : uint8;
template<> struct TIsUEnumClass<EInertializationSpace> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInertializationSpace>();
// ********** End Enum EInertializationSpace *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
