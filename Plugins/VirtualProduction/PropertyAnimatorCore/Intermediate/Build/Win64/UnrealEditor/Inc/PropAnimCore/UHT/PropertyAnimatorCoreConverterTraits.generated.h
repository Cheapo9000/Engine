// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/Converters/PropertyAnimatorCoreConverterTraits.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreConverterTraits_generated_h
#error "PropertyAnimatorCoreConverterTraits.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreConverterTraits.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreConverterTraits_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyAnimatorCoreConverterRuleBase ****************************
struct Z_Construct_UScriptStruct_FPropertyAnimatorCoreConverterRuleBase_Statics;
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Converters_PropertyAnimatorCoreConverterTraits_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAnimatorCoreConverterRuleBase_Statics; \
	PROPERTYANIMATORCORE_API static class UScriptStruct* StaticStruct();


struct FPropertyAnimatorCoreConverterRuleBase;
// ********** End ScriptStruct FPropertyAnimatorCoreConverterRuleBase ******************************

// ********** Begin ScriptStruct FBoolConverterCondition *******************************************
struct Z_Construct_UScriptStruct_FBoolConverterCondition_Statics;
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Converters_PropertyAnimatorCoreConverterTraits_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoolConverterCondition_Statics; \
	PROPERTYANIMATORCORE_API static class UScriptStruct* StaticStruct();


struct FBoolConverterCondition;
// ********** End ScriptStruct FBoolConverterCondition *********************************************

// ********** Begin ScriptStruct FBoolConverterRule ************************************************
struct Z_Construct_UScriptStruct_FBoolConverterRule_Statics;
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Converters_PropertyAnimatorCoreConverterTraits_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoolConverterRule_Statics; \
	PROPERTYANIMATORCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyAnimatorCoreConverterRuleBase Super;


struct FBoolConverterRule;
// ********** End ScriptStruct FBoolConverterRule **************************************************

// ********** Begin ScriptStruct FInt32ConverterRule ***********************************************
struct Z_Construct_UScriptStruct_FInt32ConverterRule_Statics;
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Converters_PropertyAnimatorCoreConverterTraits_h_247_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInt32ConverterRule_Statics; \
	PROPERTYANIMATORCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyAnimatorCoreConverterRuleBase Super;


struct FInt32ConverterRule;
// ********** End ScriptStruct FInt32ConverterRule *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Converters_PropertyAnimatorCoreConverterTraits_h

// ********** Begin Enum EBoolConverterComparison **************************************************
#define FOREACH_ENUM_EBOOLCONVERTERCOMPARISON(op) \
	op(EBoolConverterComparison::Equal) \
	op(EBoolConverterComparison::NotEqual) \
	op(EBoolConverterComparison::Greater) \
	op(EBoolConverterComparison::Less) \
	op(EBoolConverterComparison::GreaterEqual) \
	op(EBoolConverterComparison::LessEqual) 

enum class EBoolConverterComparison : uint8;
template<> struct TIsUEnumClass<EBoolConverterComparison> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoolConverterComparison>();
// ********** End Enum EBoolConverterComparison ****************************************************

// ********** Begin Enum EInt32ConverterMethod *****************************************************
#define FOREACH_ENUM_EINT32CONVERTERMETHOD(op) \
	op(EInt32ConverterMethod::Round) \
	op(EInt32ConverterMethod::Floor) \
	op(EInt32ConverterMethod::Ceil) 

enum class EInt32ConverterMethod : uint8;
template<> struct TIsUEnumClass<EInt32ConverterMethod> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInt32ConverterMethod>();
// ********** End Enum EInt32ConverterMethod *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
