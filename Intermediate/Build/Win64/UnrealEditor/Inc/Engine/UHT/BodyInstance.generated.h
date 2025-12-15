// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/BodyInstance.h"

#ifdef ENGINE_BodyInstance_generated_h
#error "BodyInstance.generated.h already included, missing '#pragma once' in BodyInstance.h"
#endif
#define ENGINE_BodyInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCollisionResponse ************************************************
struct Z_Construct_UScriptStruct_FCollisionResponse_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_228_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollisionResponse_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCollisionResponse;
// ********** End ScriptStruct FCollisionResponse **************************************************

// ********** Begin ScriptStruct FBodyInstanceAsyncPhysicsTickHandle *******************************
struct Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_308_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBodyInstanceAsyncPhysicsTickHandle;
// ********** End ScriptStruct FBodyInstanceAsyncPhysicsTickHandle *********************************

// ********** Begin ScriptStruct FBodyInstance *****************************************************
struct Z_Construct_UScriptStruct_FBodyInstance_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBodyInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBodyInstanceCore Super;


struct FBodyInstance;
// ********** End ScriptStruct FBodyInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h

// ********** Begin Enum EDOFMode ******************************************************************
#define FOREACH_ENUM_EDOFMODE(op) \
	op(EDOFMode::Default) \
	op(EDOFMode::SixDOF) \
	op(EDOFMode::YZPlane) \
	op(EDOFMode::XZPlane) \
	op(EDOFMode::XYPlane) \
	op(EDOFMode::CustomPlane) \
	op(EDOFMode::None) 

namespace EDOFMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDOFMode::Type>();
// ********** End Enum EDOFMode ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
