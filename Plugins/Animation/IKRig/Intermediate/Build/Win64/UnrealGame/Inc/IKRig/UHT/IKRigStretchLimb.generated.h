// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigStretchLimb.h"

#ifdef IKRIG_IKRigStretchLimb_generated_h
#error "IKRigStretchLimb.generated.h already included, missing '#pragma once' in IKRigStretchLimb.h"
#endif
#define IKRIG_IKRigStretchLimb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIKRigStretchLimbBoneSettings *************************************
struct Z_Construct_UScriptStruct_FIKRigStretchLimbBoneSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigStretchLimbBoneSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigBoneSettingsBase Super;


struct FIKRigStretchLimbBoneSettings;
// ********** End ScriptStruct FIKRigStretchLimbBoneSettings ***************************************

// ********** Begin ScriptStruct FIKRigStretchLimbSettings *****************************************
struct Z_Construct_UScriptStruct_FIKRigStretchLimbSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigStretchLimbSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverSettingsBase Super;


struct FIKRigStretchLimbSettings;
// ********** End ScriptStruct FIKRigStretchLimbSettings *******************************************

// ********** Begin ScriptStruct FIKRigStretchLimbSolver *******************************************
struct Z_Construct_UScriptStruct_FIKRigStretchLimbSolver_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigStretchLimbSolver_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverBase Super;


struct FIKRigStretchLimbSolver;
// ********** End ScriptStruct FIKRigStretchLimbSolver *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigStretchLimb_h

// ********** Begin Enum EStretchLimbSquashMode ****************************************************
#define FOREACH_ENUM_ESTRETCHLIMBSQUASHMODE(op) \
	op(EStretchLimbSquashMode::None) \
	op(EStretchLimbSquashMode::Uniform) \
	op(EStretchLimbSquashMode::Bulge) 

enum class EStretchLimbSquashMode : uint8;
template<> struct TIsUEnumClass<EStretchLimbSquashMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EStretchLimbSquashMode>();
// ********** End Enum EStretchLimbSquashMode ******************************************************

// ********** Begin Enum EStretchLimbRotationMode **************************************************
#define FOREACH_ENUM_ESTRETCHLIMBROTATIONMODE(op) \
	op(EStretchLimbRotationMode::None) \
	op(EStretchLimbRotationMode::OrientToGoal) 

enum class EStretchLimbRotationMode : uint8;
template<> struct TIsUEnumClass<EStretchLimbRotationMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EStretchLimbRotationMode>();
// ********** End Enum EStretchLimbRotationMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
