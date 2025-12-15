// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimInstanceProxy.h"

#ifdef ENGINE_AnimInstanceProxy_generated_h
#error "AnimInstanceProxy.generated.h already included, missing '#pragma once' in AnimInstanceProxy.h"
#endif
#define ENGINE_AnimInstanceProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimInstanceProxy ************************************************
struct Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimInstanceProxy;
// ********** End ScriptStruct FAnimInstanceProxy **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h

// ********** Begin Enum EDrawDebugItemType ********************************************************
#define FOREACH_ENUM_EDRAWDEBUGITEMTYPE(op) \
	op(EDrawDebugItemType::DirectionalArrow) \
	op(EDrawDebugItemType::Sphere) \
	op(EDrawDebugItemType::Line) \
	op(EDrawDebugItemType::OnScreenMessage) \
	op(EDrawDebugItemType::CoordinateSystem) \
	op(EDrawDebugItemType::Point) \
	op(EDrawDebugItemType::Circle) \
	op(EDrawDebugItemType::Cone) \
	op(EDrawDebugItemType::InWorldMessage) \
	op(EDrawDebugItemType::Capsule) 

namespace EDrawDebugItemType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDrawDebugItemType::Type>();
// ********** End Enum EDrawDebugItemType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
