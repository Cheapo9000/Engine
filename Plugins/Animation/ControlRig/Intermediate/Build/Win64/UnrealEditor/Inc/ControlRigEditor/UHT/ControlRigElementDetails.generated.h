// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigElementDetails.h"

#ifdef CONTROLRIGEDITOR_ControlRigElementDetails_generated_h
#error "ControlRigElementDetails.generated.h already included, missing '#pragma once' in ControlRigElementDetails.h"
#endif
#define CONTROLRIGEDITOR_ControlRigElementDetails_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigElementDetails_h

// ********** Begin Enum ERigElementDetailsTransformComponent **************************************
#define FOREACH_ENUM_ERIGELEMENTDETAILSTRANSFORMCOMPONENT(op) \
	op(ERigElementDetailsTransformComponent::TranslationX) \
	op(ERigElementDetailsTransformComponent::TranslationY) \
	op(ERigElementDetailsTransformComponent::TranslationZ) \
	op(ERigElementDetailsTransformComponent::RotationRoll) \
	op(ERigElementDetailsTransformComponent::RotationPitch) \
	op(ERigElementDetailsTransformComponent::RotationYaw) \
	op(ERigElementDetailsTransformComponent::ScaleX) \
	op(ERigElementDetailsTransformComponent::ScaleY) \
	op(ERigElementDetailsTransformComponent::ScaleZ) 

enum class ERigElementDetailsTransformComponent : uint8;
template<> struct TIsUEnumClass<ERigElementDetailsTransformComponent> { enum { Value = true }; };
template<> CONTROLRIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigElementDetailsTransformComponent>();
// ********** End Enum ERigElementDetailsTransformComponent ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
