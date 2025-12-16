// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtFragments.h"

#ifdef MASSAIBEHAVIOR_MassLookAtFragments_generated_h
#error "MassLookAtFragments.generated.h already included, missing '#pragma once' in MassLookAtFragments.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtFragments_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassLookAtFragment ***********************************************
struct Z_Construct_UScriptStruct_FMassLookAtFragment_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtFragment_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassLookAtFragment;
// ********** End ScriptStruct FMassLookAtFragment *************************************************

// ********** Begin ScriptStruct FMassLookAtTargetTag **********************************************
struct Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_200_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassLookAtTargetTag;
// ********** End ScriptStruct FMassLookAtTargetTag ************************************************

// ********** Begin ScriptStruct FMassLookAtRequestFragment ****************************************
struct Z_Construct_UScriptStruct_FMassLookAtRequestFragment_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_209_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtRequestFragment_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassLookAtRequestFragment;
// ********** End ScriptStruct FMassLookAtRequestFragment ******************************************

// ********** Begin ScriptStruct FMassLookAtTargetFragment *****************************************
struct Z_Construct_UScriptStruct_FMassLookAtTargetFragment_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtTargetFragment_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassLookAtTargetFragment;
// ********** End ScriptStruct FMassLookAtTargetFragment *******************************************

// ********** Begin ScriptStruct FMassInLookAtTargetGridTag ****************************************
struct Z_Construct_UScriptStruct_FMassInLookAtTargetGridTag_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassInLookAtTargetGridTag_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassInLookAtTargetGridTag;
// ********** End ScriptStruct FMassInLookAtTargetGridTag ******************************************

// ********** Begin ScriptStruct FMassLookAtTrajectoryPoint ****************************************
struct Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_297_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct();


struct FMassLookAtTrajectoryPoint;
// ********** End ScriptStruct FMassLookAtTrajectoryPoint ******************************************

// ********** Begin ScriptStruct FMassLookAtTrajectoryFragment *************************************
struct Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_319_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassLookAtTrajectoryFragment;
// ********** End ScriptStruct FMassLookAtTrajectoryFragment ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h

// ********** Begin Enum EMassLookAtMode ***********************************************************
#define FOREACH_ENUM_EMASSLOOKATMODE(op) \
	op(EMassLookAtMode::LookForward) \
	op(EMassLookAtMode::LookAlongPath) \
	op(EMassLookAtMode::LookAtEntity) 

enum class EMassLookAtMode : uint8;
template<> struct TIsUEnumClass<EMassLookAtMode> { enum { Value = true }; };
template<> MASSAIBEHAVIOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassLookAtMode>();
// ********** End Enum EMassLookAtMode *************************************************************

// ********** Begin Enum EMassLookAtGazeMode *******************************************************
#define FOREACH_ENUM_EMASSLOOKATGAZEMODE(op) \
	op(EMassLookAtGazeMode::None) \
	op(EMassLookAtGazeMode::Constant) \
	op(EMassLookAtGazeMode::Glance) 

enum class EMassLookAtGazeMode : uint8;
template<> struct TIsUEnumClass<EMassLookAtGazeMode> { enum { Value = true }; };
template<> MASSAIBEHAVIOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassLookAtGazeMode>();
// ********** End Enum EMassLookAtGazeMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
