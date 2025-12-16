// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyBindingPath.h"

#ifdef PROPERTYBINDINGUTILS_PropertyBindingPath_generated_h
#error "PropertyBindingPath.generated.h already included, missing '#pragma once' in PropertyBindingPath.h"
#endif
#define PROPERTYBINDINGUTILS_PropertyBindingPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyBindingPathSegment ***************************************
struct Z_Construct_UScriptStruct_FPropertyBindingPathSegment_Statics;
#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingPath_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBindingPathSegment_Statics; \
	PROPERTYBINDINGUTILS_API static class UScriptStruct* StaticStruct();


struct FPropertyBindingPathSegment;
// ********** End ScriptStruct FPropertyBindingPathSegment *****************************************

// ********** Begin ScriptStruct FPropertyBindingPath **********************************************
struct Z_Construct_UScriptStruct_FPropertyBindingPath_Statics;
#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingPath_h_246_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBindingPath_Statics; \
	PROPERTYBINDINGUTILS_API static class UScriptStruct* StaticStruct();


struct FPropertyBindingPath;
// ********** End ScriptStruct FPropertyBindingPath ************************************************

// ********** Begin ScriptStruct FPropertyBindingPropertyIndirection *******************************
struct Z_Construct_UScriptStruct_FPropertyBindingPropertyIndirection_Statics;
#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingPath_h_486_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBindingPropertyIndirection_Statics; \
	PROPERTYBINDINGUTILS_API static class UScriptStruct* StaticStruct();


struct FPropertyBindingPropertyIndirection;
// ********** End ScriptStruct FPropertyBindingPropertyIndirection *********************************

// ********** Begin ScriptStruct FPropertyBindingCopyInfo ******************************************
struct Z_Construct_UScriptStruct_FPropertyBindingCopyInfo_Statics;
#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingPath_h_531_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBindingCopyInfo_Statics; \
	PROPERTYBINDINGUTILS_API static class UScriptStruct* StaticStruct();


struct FPropertyBindingCopyInfo;
// ********** End ScriptStruct FPropertyBindingCopyInfo ********************************************

// ********** Begin ScriptStruct FPropertyBindingCopyInfoBatch *************************************
struct Z_Construct_UScriptStruct_FPropertyBindingCopyInfoBatch_Statics;
#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingPath_h_575_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBindingCopyInfoBatch_Statics; \
	PROPERTYBINDINGUTILS_API static class UScriptStruct* StaticStruct();


struct FPropertyBindingCopyInfoBatch;
// ********** End ScriptStruct FPropertyBindingCopyInfoBatch ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingPath_h

// ********** Begin Enum EPropertyCopyType *********************************************************
#define FOREACH_ENUM_EPROPERTYCOPYTYPE(op) \
	op(EPropertyCopyType::None) \
	op(EPropertyCopyType::CopyPlain) \
	op(EPropertyCopyType::CopyComplex) \
	op(EPropertyCopyType::CopyBool) \
	op(EPropertyCopyType::CopyStruct) \
	op(EPropertyCopyType::CopyObject) \
	op(EPropertyCopyType::CopyName) \
	op(EPropertyCopyType::CopyFixedArray) \
	op(EPropertyCopyType::StructReference) \
	op(EPropertyCopyType::PromoteBoolToByte) \
	op(EPropertyCopyType::PromoteBoolToInt32) \
	op(EPropertyCopyType::PromoteBoolToUInt32) \
	op(EPropertyCopyType::PromoteBoolToInt64) \
	op(EPropertyCopyType::PromoteBoolToFloat) \
	op(EPropertyCopyType::PromoteBoolToDouble) \
	op(EPropertyCopyType::PromoteByteToInt32) \
	op(EPropertyCopyType::PromoteByteToUInt32) \
	op(EPropertyCopyType::PromoteByteToInt64) \
	op(EPropertyCopyType::PromoteByteToFloat) \
	op(EPropertyCopyType::PromoteByteToDouble) \
	op(EPropertyCopyType::PromoteInt32ToInt64) \
	op(EPropertyCopyType::PromoteInt32ToFloat) \
	op(EPropertyCopyType::PromoteInt32ToDouble) \
	op(EPropertyCopyType::PromoteUInt32ToInt64) \
	op(EPropertyCopyType::PromoteUInt32ToFloat) \
	op(EPropertyCopyType::PromoteUInt32ToDouble) \
	op(EPropertyCopyType::PromoteFloatToInt32) \
	op(EPropertyCopyType::PromoteFloatToInt64) \
	op(EPropertyCopyType::PromoteFloatToDouble) \
	op(EPropertyCopyType::DemoteDoubleToInt32) \
	op(EPropertyCopyType::DemoteDoubleToInt64) \
	op(EPropertyCopyType::DemoteDoubleToFloat) 

enum class EPropertyCopyType : uint8;
template<> struct TIsUEnumClass<EPropertyCopyType> { enum { Value = true }; };
template<> PROPERTYBINDINGUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyCopyType>();
// ********** End Enum EPropertyCopyType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
