// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Math/Simulation/CRSimPointConstraint.h"

#ifdef CONTROLRIG_CRSimPointConstraint_generated_h
#error "CRSimPointConstraint.generated.h already included, missing '#pragma once' in CRSimPointConstraint.h"
#endif
#define CONTROLRIG_CRSimPointConstraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCRSimPointConstraint *********************************************
struct Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FCRSimPointConstraint;
// ********** End ScriptStruct FCRSimPointConstraint ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h

// ********** Begin Enum ECRSimConstraintType ******************************************************
#define FOREACH_ENUM_ECRSIMCONSTRAINTTYPE(op) \
	op(ECRSimConstraintType::Distance) \
	op(ECRSimConstraintType::DistanceFromA) \
	op(ECRSimConstraintType::DistanceFromB) \
	op(ECRSimConstraintType::Plane) 

enum class ECRSimConstraintType : uint8;
template<> struct TIsUEnumClass<ECRSimConstraintType> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ECRSimConstraintType>();
// ********** End Enum ECRSimConstraintType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
