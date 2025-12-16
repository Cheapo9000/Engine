// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigLogic.h"

#ifdef RIGLOGICMODULE_RigLogic_generated_h
#error "RigLogic.generated.h already included, missing '#pragma once' in RigLogic.h"
#endif
#define RIGLOGICMODULE_RigLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigLogicConfiguration ********************************************
struct Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics;
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


struct FRigLogicConfiguration;
// ********** End ScriptStruct FRigLogicConfiguration **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h

// ********** Begin Enum ERigLogicCalculationType **************************************************
#define FOREACH_ENUM_ERIGLOGICCALCULATIONTYPE(op) \
	op(ERigLogicCalculationType::Scalar) \
	op(ERigLogicCalculationType::SSE) \
	op(ERigLogicCalculationType::AVX) \
	op(ERigLogicCalculationType::NEON) \
	op(ERigLogicCalculationType::AnyVector) 

enum class ERigLogicCalculationType : uint8;
template<> struct TIsUEnumClass<ERigLogicCalculationType> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigLogicCalculationType>();
// ********** End Enum ERigLogicCalculationType ****************************************************

// ********** Begin Enum ERigLogicTranslationType **************************************************
#define FOREACH_ENUM_ERIGLOGICTRANSLATIONTYPE(op) \
	op(ERigLogicTranslationType::None) \
	op(ERigLogicTranslationType::Vector) 

enum class ERigLogicTranslationType : uint8;
template<> struct TIsUEnumClass<ERigLogicTranslationType> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigLogicTranslationType>();
// ********** End Enum ERigLogicTranslationType ****************************************************

// ********** Begin Enum ERigLogicRotationType *****************************************************
#define FOREACH_ENUM_ERIGLOGICROTATIONTYPE(op) \
	op(ERigLogicRotationType::None) \
	op(ERigLogicRotationType::EulerAngles) \
	op(ERigLogicRotationType::Quaternions) 

enum class ERigLogicRotationType : uint8;
template<> struct TIsUEnumClass<ERigLogicRotationType> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigLogicRotationType>();
// ********** End Enum ERigLogicRotationType *******************************************************

// ********** Begin Enum ERigLogicRotationOrder ****************************************************
#define FOREACH_ENUM_ERIGLOGICROTATIONORDER(op) \
	op(ERigLogicRotationOrder::XYZ) \
	op(ERigLogicRotationOrder::XZY) \
	op(ERigLogicRotationOrder::YXZ) \
	op(ERigLogicRotationOrder::YZX) \
	op(ERigLogicRotationOrder::ZXY) \
	op(ERigLogicRotationOrder::ZYX) 

enum class ERigLogicRotationOrder : uint8;
template<> struct TIsUEnumClass<ERigLogicRotationOrder> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigLogicRotationOrder>();
// ********** End Enum ERigLogicRotationOrder ******************************************************

// ********** Begin Enum ERigLogicScaleType ********************************************************
#define FOREACH_ENUM_ERIGLOGICSCALETYPE(op) \
	op(ERigLogicScaleType::None) \
	op(ERigLogicScaleType::Vector) 

enum class ERigLogicScaleType : uint8;
template<> struct TIsUEnumClass<ERigLogicScaleType> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigLogicScaleType>();
// ********** End Enum ERigLogicScaleType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
