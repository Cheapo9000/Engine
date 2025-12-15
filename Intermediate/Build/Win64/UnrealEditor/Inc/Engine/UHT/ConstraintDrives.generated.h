// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ConstraintDrives.h"

#ifdef ENGINE_ConstraintDrives_generated_h
#error "ConstraintDrives.generated.h already included, missing '#pragma once' in ConstraintDrives.h"
#endif
#define ENGINE_ConstraintDrives_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConstraintDrive **************************************************
struct Z_Construct_UScriptStruct_FConstraintDrive_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintDrive_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FConstraintDrive;
// ********** End ScriptStruct FConstraintDrive ****************************************************

// ********** Begin ScriptStruct FLinearDriveConstraint ********************************************
struct Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLinearDriveConstraint;
// ********** End ScriptStruct FLinearDriveConstraint **********************************************

// ********** Begin ScriptStruct FAngularDriveConstraint *******************************************
struct Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAngularDriveConstraint;
// ********** End ScriptStruct FAngularDriveConstraint *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h

// ********** Begin Enum EAngularDriveMode *********************************************************
#define FOREACH_ENUM_EANGULARDRIVEMODE(op) \
	op(EAngularDriveMode::SLERP) \
	op(EAngularDriveMode::TwistAndSwing) 

namespace EAngularDriveMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAngularDriveMode::Type>();
// ********** End Enum EAngularDriveMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
