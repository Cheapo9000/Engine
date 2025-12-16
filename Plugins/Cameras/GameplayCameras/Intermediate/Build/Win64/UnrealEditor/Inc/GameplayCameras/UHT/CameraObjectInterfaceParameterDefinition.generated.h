// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraObjectInterfaceParameterDefinition.h"

#ifdef GAMEPLAYCAMERAS_CameraObjectInterfaceParameterDefinition_generated_h
#error "CameraObjectInterfaceParameterDefinition.generated.h already included, missing '#pragma once' in CameraObjectInterfaceParameterDefinition.h"
#endif
#define GAMEPLAYCAMERAS_CameraObjectInterfaceParameterDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraObjectInterfaceParameterDefinition *************************
struct Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterDefinition_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterfaceParameterDefinition_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterDefinition_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraObjectInterfaceParameterDefinition;
// ********** End ScriptStruct FCameraObjectInterfaceParameterDefinition ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterfaceParameterDefinition_h

// ********** Begin Enum ECameraObjectInterfaceParameterType ***************************************
#define FOREACH_ENUM_ECAMERAOBJECTINTERFACEPARAMETERTYPE(op) \
	op(ECameraObjectInterfaceParameterType::Blendable) \
	op(ECameraObjectInterfaceParameterType::Data) 

enum class ECameraObjectInterfaceParameterType : uint8;
template<> struct TIsUEnumClass<ECameraObjectInterfaceParameterType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraObjectInterfaceParameterType>();
// ********** End Enum ECameraObjectInterfaceParameterType *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
