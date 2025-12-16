// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraVariableTableFwd.h"

#ifdef GAMEPLAYCAMERAS_CameraVariableTableFwd_generated_h
#error "CameraVariableTableFwd.generated.h already included, missing '#pragma once' in CameraVariableTableFwd.h"
#endif
#define GAMEPLAYCAMERAS_CameraVariableTableFwd_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraVariableID *************************************************
struct Z_Construct_UScriptStruct_FCameraVariableID_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraVariableID_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraVariableID;
// ********** End ScriptStruct FCameraVariableID ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h

// ********** Begin Enum ECameraVariableType *******************************************************
#define FOREACH_ENUM_ECAMERAVARIABLETYPE(op) \
	op(ECameraVariableType::Boolean) \
	op(ECameraVariableType::Integer32) \
	op(ECameraVariableType::Float) \
	op(ECameraVariableType::Double) \
	op(ECameraVariableType::Vector2f) \
	op(ECameraVariableType::Vector2d) \
	op(ECameraVariableType::Vector3f) \
	op(ECameraVariableType::Vector3d) \
	op(ECameraVariableType::Vector4f) \
	op(ECameraVariableType::Vector4d) \
	op(ECameraVariableType::Rotator3f) \
	op(ECameraVariableType::Rotator3d) \
	op(ECameraVariableType::Transform3f) \
	op(ECameraVariableType::Transform3d) \
	op(ECameraVariableType::BlendableStruct) 

enum class ECameraVariableType;
template<> struct TIsUEnumClass<ECameraVariableType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraVariableType>();
// ********** End Enum ECameraVariableType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
