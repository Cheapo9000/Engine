// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonAnimationTypes.h"

#ifdef ANIMGRAPHRUNTIME_CommonAnimationTypes_generated_h
#error "CommonAnimationTypes.generated.h already included, missing '#pragma once' in CommonAnimationTypes.h"
#endif
#define ANIMGRAPHRUNTIME_CommonAnimationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRotationRetargetingInfo ******************************************
struct Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRotationRetargetingInfo_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


struct FRotationRetargetingInfo;
// ********** End ScriptStruct FRotationRetargetingInfo ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_CommonAnimationTypes_h

// ********** Begin Enum EEasingFuncType ***********************************************************
#define FOREACH_ENUM_EEASINGFUNCTYPE(op) \
	op(EEasingFuncType::Linear) \
	op(EEasingFuncType::Sinusoidal) \
	op(EEasingFuncType::Cubic) \
	op(EEasingFuncType::QuadraticInOut) \
	op(EEasingFuncType::CubicInOut) \
	op(EEasingFuncType::HermiteCubic) \
	op(EEasingFuncType::QuarticInOut) \
	op(EEasingFuncType::QuinticInOut) \
	op(EEasingFuncType::CircularIn) \
	op(EEasingFuncType::CircularOut) \
	op(EEasingFuncType::CircularInOut) \
	op(EEasingFuncType::ExpIn) \
	op(EEasingFuncType::ExpOut) \
	op(EEasingFuncType::ExpInOut) \
	op(EEasingFuncType::CustomCurve) 

enum class EEasingFuncType : uint8;
template<> struct TIsUEnumClass<EEasingFuncType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EEasingFuncType>();
// ********** End Enum EEasingFuncType *************************************************************

// ********** Begin Enum ERotationComponent ********************************************************
#define FOREACH_ENUM_EROTATIONCOMPONENT(op) \
	op(ERotationComponent::EulerX) \
	op(ERotationComponent::EulerY) \
	op(ERotationComponent::EulerZ) \
	op(ERotationComponent::QuaternionAngle) \
	op(ERotationComponent::SwingAngle) \
	op(ERotationComponent::TwistAngle) 

enum class ERotationComponent : uint8;
template<> struct TIsUEnumClass<ERotationComponent> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERotationComponent>();
// ********** End Enum ERotationComponent **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
