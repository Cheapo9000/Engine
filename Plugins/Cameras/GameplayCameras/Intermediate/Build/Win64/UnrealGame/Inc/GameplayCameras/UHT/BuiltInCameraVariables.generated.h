// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/BuiltInCameraVariables.h"

#ifdef GAMEPLAYCAMERAS_BuiltInCameraVariables_generated_h
#error "BuiltInCameraVariables.generated.h already included, missing '#pragma once' in BuiltInCameraVariables.h"
#endif
#define GAMEPLAYCAMERAS_BuiltInCameraVariables_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h

// ********** Begin Enum EBuiltInDoubleCameraVariable **********************************************
#define FOREACH_ENUM_EBUILTINDOUBLECAMERAVARIABLE(op) \
	op(EBuiltInDoubleCameraVariable::None) \
	op(EBuiltInDoubleCameraVariable::Yaw) \
	op(EBuiltInDoubleCameraVariable::Pitch) \
	op(EBuiltInDoubleCameraVariable::Roll) \
	op(EBuiltInDoubleCameraVariable::Zoom) 

enum class EBuiltInDoubleCameraVariable;
template<> struct TIsUEnumClass<EBuiltInDoubleCameraVariable> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuiltInDoubleCameraVariable>();
// ********** End Enum EBuiltInDoubleCameraVariable ************************************************

// ********** Begin Enum EBuiltInVector2dCameraVariable ********************************************
#define FOREACH_ENUM_EBUILTINVECTOR2DCAMERAVARIABLE(op) \
	op(EBuiltInVector2dCameraVariable::None) \
	op(EBuiltInVector2dCameraVariable::YawPitch) 

enum class EBuiltInVector2dCameraVariable;
template<> struct TIsUEnumClass<EBuiltInVector2dCameraVariable> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuiltInVector2dCameraVariable>();
// ********** End Enum EBuiltInVector2dCameraVariable **********************************************

// ********** Begin Enum EBuiltInRotator3dCameraVariable *******************************************
#define FOREACH_ENUM_EBUILTINROTATOR3DCAMERAVARIABLE(op) \
	op(EBuiltInRotator3dCameraVariable::None) \
	op(EBuiltInRotator3dCameraVariable::ControlRotation) 

enum class EBuiltInRotator3dCameraVariable;
template<> struct TIsUEnumClass<EBuiltInRotator3dCameraVariable> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuiltInRotator3dCameraVariable>();
// ********** End Enum EBuiltInRotator3dCameraVariable *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
