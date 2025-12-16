// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraVariableSetter.h"

#ifdef GAMEPLAYCAMERAS_CameraVariableSetter_generated_h
#error "CameraVariableSetter.generated.h already included, missing '#pragma once' in CameraVariableSetter.h"
#endif
#define GAMEPLAYCAMERAS_CameraVariableSetter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraVariableSetterHandle ***************************************
struct Z_Construct_UScriptStruct_FCameraVariableSetterHandle_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableSetter_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraVariableSetterHandle_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraVariableSetterHandle;
// ********** End ScriptStruct FCameraVariableSetterHandle *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableSetter_h

// ********** Begin Enum ECameraVariableSetterBlendType ********************************************
#define FOREACH_ENUM_ECAMERAVARIABLESETTERBLENDTYPE(op) \
	op(ECameraVariableSetterBlendType::None) \
	op(ECameraVariableSetterBlendType::Linear) \
	op(ECameraVariableSetterBlendType::SmoothStep) \
	op(ECameraVariableSetterBlendType::SmootherStep) 

enum class ECameraVariableSetterBlendType : uint8;
template<> struct TIsUEnumClass<ECameraVariableSetterBlendType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraVariableSetterBlendType>();
// ********** End Enum ECameraVariableSetterBlendType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
