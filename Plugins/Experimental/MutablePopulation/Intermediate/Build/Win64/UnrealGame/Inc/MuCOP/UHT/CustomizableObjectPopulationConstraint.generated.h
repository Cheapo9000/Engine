// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOP/CustomizableObjectPopulationConstraint.h"

#ifdef CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulationConstraint_generated_h
#error "CustomizableObjectPopulationConstraint.generated.h already included, missing '#pragma once' in CustomizableObjectPopulationConstraint.h"
#endif
#define CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulationConstraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConstraintRanges *************************************************
struct Z_Construct_UScriptStruct_FConstraintRanges_Statics;
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationConstraint_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstraintRanges_Statics; \
	CUSTOMIZABLEOBJECTPOPULATION_API static class UScriptStruct* StaticStruct();


struct FConstraintRanges;
// ********** End ScriptStruct FConstraintRanges ***************************************************

// ********** Begin ScriptStruct FCustomizableObjectPopulationConstraint ***************************
struct Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics;
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationConstraint_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics; \
	CUSTOMIZABLEOBJECTPOPULATION_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectPopulationConstraint;
// ********** End ScriptStruct FCustomizableObjectPopulationConstraint *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Internal_MuCOP_CustomizableObjectPopulationConstraint_h

// ********** Begin Enum EPopulationConstraintType *************************************************
#define FOREACH_ENUM_EPOPULATIONCONSTRAINTTYPE(op) \
	op(EPopulationConstraintType::NONE) \
	op(EPopulationConstraintType::BOOL) \
	op(EPopulationConstraintType::DISCRETE) \
	op(EPopulationConstraintType::DISCRETE_FLOAT) \
	op(EPopulationConstraintType::DISCRETE_COLOR) \
	op(EPopulationConstraintType::TAG) \
	op(EPopulationConstraintType::RANGE) \
	op(EPopulationConstraintType::CURVE) \
	op(EPopulationConstraintType::CURVE_COLOR) 

enum class EPopulationConstraintType : uint8;
template<> struct TIsUEnumClass<EPopulationConstraintType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTPOPULATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPopulationConstraintType>();
// ********** End Enum EPopulationConstraintType ***************************************************

// ********** Begin Enum ECurveColor ***************************************************************
#define FOREACH_ENUM_ECURVECOLOR(op) \
	op(ECurveColor::RED) \
	op(ECurveColor::GREEN) \
	op(ECurveColor::BLUE) \
	op(ECurveColor::ALPHA) 

enum class ECurveColor : uint8;
template<> struct TIsUEnumClass<ECurveColor> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTPOPULATION_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveColor>();
// ********** End Enum ECurveColor *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
