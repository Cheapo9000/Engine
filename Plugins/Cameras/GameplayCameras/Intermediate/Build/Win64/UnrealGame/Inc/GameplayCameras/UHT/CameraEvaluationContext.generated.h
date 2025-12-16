// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraEvaluationContext.h"

#ifdef GAMEPLAYCAMERAS_CameraEvaluationContext_generated_h
#error "CameraEvaluationContext.generated.h already included, missing '#pragma once' in CameraEvaluationContext.h"
#endif
#define GAMEPLAYCAMERAS_CameraEvaluationContext_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraEvaluationContext_h

// ********** Begin Enum ECameraEvaluationDataCondition ********************************************
#define FOREACH_ENUM_ECAMERAEVALUATIONDATACONDITION(op) \
	op(ECameraEvaluationDataCondition::ActiveCameraRig) 

enum class ECameraEvaluationDataCondition : uint8;
template<> struct TIsUEnumClass<ECameraEvaluationDataCondition> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraEvaluationDataCondition>();
// ********** End Enum ECameraEvaluationDataCondition **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
