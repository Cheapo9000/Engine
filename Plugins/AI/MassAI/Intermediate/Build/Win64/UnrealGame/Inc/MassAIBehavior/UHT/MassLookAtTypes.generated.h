// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtTypes.h"

#ifdef MASSAIBEHAVIOR_MassLookAtTypes_generated_h
#error "MassLookAtTypes.generated.h already included, missing '#pragma once' in MassLookAtTypes.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassLookAtPriority ***********************************************
struct Z_Construct_UScriptStruct_FMassLookAtPriority_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTypes_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtPriority_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct();


struct FMassLookAtPriority;
// ********** End ScriptStruct FMassLookAtPriority *************************************************

// ********** Begin ScriptStruct FMassLookAtPriorityInfo *******************************************
struct Z_Construct_UScriptStruct_FMassLookAtPriorityInfo_Statics;
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTypes_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassLookAtPriorityInfo_Statics; \
	MASSAIBEHAVIOR_API static class UScriptStruct* StaticStruct();


struct FMassLookAtPriorityInfo;
// ********** End ScriptStruct FMassLookAtPriorityInfo *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTypes_h

// ********** Begin Enum EMassLookAtInterpolationSpeed *********************************************
#define FOREACH_ENUM_EMASSLOOKATINTERPOLATIONSPEED(op) \
	op(EMassLookAtInterpolationSpeed::Instant) \
	op(EMassLookAtInterpolationSpeed::Fast) \
	op(EMassLookAtInterpolationSpeed::Regular) \
	op(EMassLookAtInterpolationSpeed::Slow) \
	op(EMassLookAtInterpolationSpeed::Custom) 

enum class EMassLookAtInterpolationSpeed : uint8;
template<> struct TIsUEnumClass<EMassLookAtInterpolationSpeed> { enum { Value = true }; };
template<> MASSAIBEHAVIOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassLookAtInterpolationSpeed>();
// ********** End Enum EMassLookAtInterpolationSpeed ***********************************************

// ********** Begin Enum EMassLookAtPriorities *****************************************************
#define FOREACH_ENUM_EMASSLOOKATPRIORITIES(op) \
	op(EMassLookAtPriorities::MaxPriorities) \
	op(EMassLookAtPriorities::MaxPriorityIndex) \
	op(EMassLookAtPriorities::LowestPriority) 

enum class EMassLookAtPriorities : uint8;
template<> struct TIsUEnumClass<EMassLookAtPriorities> { enum { Value = true }; };
template<> MASSAIBEHAVIOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassLookAtPriorities>();
// ********** End Enum EMassLookAtPriorities *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
