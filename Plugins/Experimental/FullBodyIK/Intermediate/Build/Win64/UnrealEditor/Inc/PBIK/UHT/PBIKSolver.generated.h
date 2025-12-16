// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/PBIKSolver.h"

#ifdef PBIK_PBIKSolver_generated_h
#error "PBIKSolver.generated.h already included, missing '#pragma once' in PBIKSolver.h"
#endif
#define PBIK_PBIKSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRootPrePullSettings **********************************************
struct Z_Construct_UScriptStruct_FRootPrePullSettings_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRootPrePullSettings_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


struct FRootPrePullSettings;
// ********** End ScriptStruct FRootPrePullSettings ************************************************

// ********** Begin ScriptStruct FPBIKSolverSettings ***********************************************
struct Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


struct FPBIKSolverSettings;
// ********** End ScriptStruct FPBIKSolverSettings *************************************************

// ********** Begin ScriptStruct FPBIKSolver *******************************************************
struct Z_Construct_UScriptStruct_FPBIKSolver_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPBIKSolver_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


struct FPBIKSolver;
// ********** End ScriptStruct FPBIKSolver *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h

// ********** Begin Enum EPBIKRootBehavior *********************************************************
#define FOREACH_ENUM_EPBIKROOTBEHAVIOR(op) \
	op(EPBIKRootBehavior::PrePull) \
	op(EPBIKRootBehavior::PinToInput) \
	op(EPBIKRootBehavior::Free) 

enum class EPBIKRootBehavior : uint8;
template<> struct TIsUEnumClass<EPBIKRootBehavior> { enum { Value = true }; };
template<> PBIK_NON_ATTRIBUTED_API UEnum* StaticEnum<EPBIKRootBehavior>();
// ********** End Enum EPBIKRootBehavior ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
