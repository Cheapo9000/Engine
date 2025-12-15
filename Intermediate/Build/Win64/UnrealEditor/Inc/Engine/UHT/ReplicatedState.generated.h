// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ReplicatedState.h"

#ifdef ENGINE_ReplicatedState_generated_h
#error "ReplicatedState.generated.h already included, missing '#pragma once' in ReplicatedState.h"
#endif
#define ENGINE_ReplicatedState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRepAttachment ****************************************************
struct Z_Construct_UScriptStruct_FRepAttachment_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRepAttachment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRepAttachment;
// ********** End ScriptStruct FRepAttachment ******************************************************

// ********** Begin ScriptStruct FRigidBodyState ***************************************************
struct Z_Construct_UScriptStruct_FRigidBodyState_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigidBodyState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRigidBodyState;
// ********** End ScriptStruct FRigidBodyState *****************************************************

// ********** Begin ScriptStruct FRepMovement ******************************************************
struct Z_Construct_UScriptStruct_FRepMovement_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRepMovement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRepMovement;
// ********** End ScriptStruct FRepMovement ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h

// ********** Begin Enum EVectorQuantization *******************************************************
#define FOREACH_ENUM_EVECTORQUANTIZATION(op) \
	op(EVectorQuantization::RoundWholeNumber) \
	op(EVectorQuantization::RoundOneDecimal) \
	op(EVectorQuantization::RoundTwoDecimals) 

enum class EVectorQuantization : uint8;
template<> struct TIsUEnumClass<EVectorQuantization> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVectorQuantization>();
// ********** End Enum EVectorQuantization *********************************************************

// ********** Begin Enum ERotatorQuantization ******************************************************
#define FOREACH_ENUM_EROTATORQUANTIZATION(op) \
	op(ERotatorQuantization::ByteComponents) \
	op(ERotatorQuantization::ShortComponents) 

enum class ERotatorQuantization : uint8;
template<> struct TIsUEnumClass<ERotatorQuantization> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERotatorQuantization>();
// ********** End Enum ERotatorQuantization ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
