// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionOperator.h"

#ifdef ENGINE_MaterialExpressionOperator_generated_h
#error "MaterialExpressionOperator.generated.h already included, missing '#pragma once' in MaterialExpressionOperator.h"
#endif
#define ENGINE_MaterialExpressionOperator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialExpressionOperatorInput **********************************
struct Z_Construct_UScriptStruct_FMaterialExpressionOperatorInput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExpressionOperatorInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExpressionOperatorInput;
// ********** End ScriptStruct FMaterialExpressionOperatorInput ************************************

// ********** Begin Class UMaterialExpressionOperator **********************************************
struct Z_Construct_UClass_UMaterialExpressionOperator_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionOperator_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionOperator(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionOperator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionOperator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionOperator, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionOperator_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionOperator)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h_114_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionOperator(UMaterialExpressionOperator&&) = delete; \
	UMaterialExpressionOperator(const UMaterialExpressionOperator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionOperator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionOperator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionOperator) \
	ENGINE_API virtual ~UMaterialExpressionOperator();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h_111_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionOperator;

// ********** End Class UMaterialExpressionOperator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionOperator_h

// ********** Begin Enum EMaterialExpressionOperatorKind *******************************************
#define FOREACH_ENUM_EMATERIALEXPRESSIONOPERATORKIND(op) \
	op(EMaterialExpressionOperatorKind::BitwiseNot) \
	op(EMaterialExpressionOperatorKind::Negate) \
	op(EMaterialExpressionOperatorKind::Not) \
	op(EMaterialExpressionOperatorKind::Abs) \
	op(EMaterialExpressionOperatorKind::ACos) \
	op(EMaterialExpressionOperatorKind::ACosFast) \
	op(EMaterialExpressionOperatorKind::ACosh) \
	op(EMaterialExpressionOperatorKind::ASin) \
	op(EMaterialExpressionOperatorKind::ASinFast) \
	op(EMaterialExpressionOperatorKind::ASinh) \
	op(EMaterialExpressionOperatorKind::ATan) \
	op(EMaterialExpressionOperatorKind::ATanFast) \
	op(EMaterialExpressionOperatorKind::ATanh) \
	op(EMaterialExpressionOperatorKind::Ceil) \
	op(EMaterialExpressionOperatorKind::Cos) \
	op(EMaterialExpressionOperatorKind::Cosh) \
	op(EMaterialExpressionOperatorKind::Exponential) \
	op(EMaterialExpressionOperatorKind::Exponential2) \
	op(EMaterialExpressionOperatorKind::Floor) \
	op(EMaterialExpressionOperatorKind::Frac) \
	op(EMaterialExpressionOperatorKind::IsFinite) \
	op(EMaterialExpressionOperatorKind::IsInf) \
	op(EMaterialExpressionOperatorKind::IsNan) \
	op(EMaterialExpressionOperatorKind::Length) \
	op(EMaterialExpressionOperatorKind::Logarithm) \
	op(EMaterialExpressionOperatorKind::Logarithm10) \
	op(EMaterialExpressionOperatorKind::Logarithm2) \
	op(EMaterialExpressionOperatorKind::LWCTile) \
	op(EMaterialExpressionOperatorKind::Reciprocal) \
	op(EMaterialExpressionOperatorKind::Round) \
	op(EMaterialExpressionOperatorKind::Rsqrt) \
	op(EMaterialExpressionOperatorKind::Saturate) \
	op(EMaterialExpressionOperatorKind::Sign) \
	op(EMaterialExpressionOperatorKind::Sin) \
	op(EMaterialExpressionOperatorKind::Sinh) \
	op(EMaterialExpressionOperatorKind::Sqrt) \
	op(EMaterialExpressionOperatorKind::Tan) \
	op(EMaterialExpressionOperatorKind::Tanh) \
	op(EMaterialExpressionOperatorKind::Transpose) \
	op(EMaterialExpressionOperatorKind::Truncate) \
	op(EMaterialExpressionOperatorKind::Equals) \
	op(EMaterialExpressionOperatorKind::GreaterThan) \
	op(EMaterialExpressionOperatorKind::GreaterThanOrEquals) \
	op(EMaterialExpressionOperatorKind::LessThan) \
	op(EMaterialExpressionOperatorKind::LessThanOrEquals) \
	op(EMaterialExpressionOperatorKind::NotEquals) \
	op(EMaterialExpressionOperatorKind::And) \
	op(EMaterialExpressionOperatorKind::Or) \
	op(EMaterialExpressionOperatorKind::Add) \
	op(EMaterialExpressionOperatorKind::Subtract) \
	op(EMaterialExpressionOperatorKind::Multiply) \
	op(EMaterialExpressionOperatorKind::MatrixMultiply) \
	op(EMaterialExpressionOperatorKind::Divide) \
	op(EMaterialExpressionOperatorKind::Modulo) \
	op(EMaterialExpressionOperatorKind::BitwiseAnd) \
	op(EMaterialExpressionOperatorKind::BitwiseOr) \
	op(EMaterialExpressionOperatorKind::BitShiftLeft) \
	op(EMaterialExpressionOperatorKind::BitShiftRight) \
	op(EMaterialExpressionOperatorKind::ATan2) \
	op(EMaterialExpressionOperatorKind::ATan2Fast) \
	op(EMaterialExpressionOperatorKind::Cross) \
	op(EMaterialExpressionOperatorKind::Distance) \
	op(EMaterialExpressionOperatorKind::Dot) \
	op(EMaterialExpressionOperatorKind::Fmod) \
	op(EMaterialExpressionOperatorKind::Max) \
	op(EMaterialExpressionOperatorKind::Min) \
	op(EMaterialExpressionOperatorKind::Pow) \
	op(EMaterialExpressionOperatorKind::Step) \
	op(EMaterialExpressionOperatorKind::Clamp) \
	op(EMaterialExpressionOperatorKind::Lerp) \
	op(EMaterialExpressionOperatorKind::Select) \
	op(EMaterialExpressionOperatorKind::Smoothstep) 

enum class EMaterialExpressionOperatorKind;
template<> struct TIsUEnumClass<EMaterialExpressionOperatorKind> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialExpressionOperatorKind>();
// ********** End Enum EMaterialExpressionOperatorKind *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
