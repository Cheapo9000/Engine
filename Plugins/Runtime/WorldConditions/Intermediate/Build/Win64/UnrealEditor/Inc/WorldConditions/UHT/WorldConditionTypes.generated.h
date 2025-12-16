// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldConditionTypes.h"

#ifdef WORLDCONDITIONS_WorldConditionTypes_generated_h
#error "WorldConditionTypes.generated.h already included, missing '#pragma once' in WorldConditionTypes.h"
#endif
#define WORLDCONDITIONS_WorldConditionTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldConditionResult *********************************************
struct Z_Construct_UScriptStruct_FWorldConditionResult_Statics;
#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldConditionResult_Statics; \
	WORLDCONDITIONS_API static class UScriptStruct* StaticStruct();


struct FWorldConditionResult;
// ********** End ScriptStruct FWorldConditionResult ***********************************************

// ********** Begin ScriptStruct FWorldConditionContextDataDesc ************************************
struct Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics;
#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics; \
	WORLDCONDITIONS_API static class UScriptStruct* StaticStruct();


struct FWorldConditionContextDataDesc;
// ********** End ScriptStruct FWorldConditionContextDataDesc **************************************

// ********** Begin ScriptStruct FWorldConditionContextDataRef *************************************
struct Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics;
#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics; \
	WORLDCONDITIONS_API static class UScriptStruct* StaticStruct();


struct FWorldConditionContextDataRef;
// ********** End ScriptStruct FWorldConditionContextDataRef ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h

// ********** Begin Enum EWorldConditionResultValue ************************************************
#define FOREACH_ENUM_EWORLDCONDITIONRESULTVALUE(op) \
	op(EWorldConditionResultValue::IsFalse) \
	op(EWorldConditionResultValue::IsTrue) \
	op(EWorldConditionResultValue::Invalid) 

enum class EWorldConditionResultValue : uint8;
template<> struct TIsUEnumClass<EWorldConditionResultValue> { enum { Value = true }; };
template<> WORLDCONDITIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldConditionResultValue>();
// ********** End Enum EWorldConditionResultValue **************************************************

// ********** Begin Enum EWorldConditionOperator ***************************************************
#define FOREACH_ENUM_EWORLDCONDITIONOPERATOR(op) \
	op(EWorldConditionOperator::And) \
	op(EWorldConditionOperator::Or) \
	op(EWorldConditionOperator::Copy) 

enum class EWorldConditionOperator : uint8;
template<> struct TIsUEnumClass<EWorldConditionOperator> { enum { Value = true }; };
template<> WORLDCONDITIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldConditionOperator>();
// ********** End Enum EWorldConditionOperator *****************************************************

// ********** Begin Enum EWorldConditionContextDataType ********************************************
#define FOREACH_ENUM_EWORLDCONDITIONCONTEXTDATATYPE(op) \
	op(EWorldConditionContextDataType::Dynamic) \
	op(EWorldConditionContextDataType::Persistent) 

enum class EWorldConditionContextDataType : uint8;
template<> struct TIsUEnumClass<EWorldConditionContextDataType> { enum { Value = true }; };
template<> WORLDCONDITIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorldConditionContextDataType>();
// ********** End Enum EWorldConditionContextDataType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
