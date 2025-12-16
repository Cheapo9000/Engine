// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Framing/CameraActorTargetInfo.h"

#ifdef GAMEPLAYCAMERAS_CameraActorTargetInfo_generated_h
#error "CameraActorTargetInfo.generated.h already included, missing '#pragma once' in CameraActorTargetInfo.h"
#endif
#define GAMEPLAYCAMERAS_CameraActorTargetInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraActorTargetInfo ********************************************
struct Z_Construct_UScriptStruct_FCameraActorTargetInfo_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraActorTargetInfo_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraActorTargetInfo_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraActorTargetInfo;
// ********** End ScriptStruct FCameraActorTargetInfo **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraActorTargetInfo_h

// ********** Begin Enum ECameraTargetShape ********************************************************
#define FOREACH_ENUM_ECAMERATARGETSHAPE(op) \
	op(ECameraTargetShape::Point) \
	op(ECameraTargetShape::AutomaticBounds) \
	op(ECameraTargetShape::ManualBounds) 

enum class ECameraTargetShape : uint8;
template<> struct TIsUEnumClass<ECameraTargetShape> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraTargetShape>();
// ********** End Enum ECameraTargetShape **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
