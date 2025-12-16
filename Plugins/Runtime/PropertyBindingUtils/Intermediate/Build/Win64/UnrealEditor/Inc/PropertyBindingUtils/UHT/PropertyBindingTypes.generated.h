// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyBindingTypes.h"

#ifdef PROPERTYBINDINGUTILS_PropertyBindingTypes_generated_h
#error "PropertyBindingTypes.generated.h already included, missing '#pragma once' in PropertyBindingTypes.h"
#endif
#define PROPERTYBINDINGUTILS_PropertyBindingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyBindingIndex16 *******************************************
struct Z_Construct_UScriptStruct_FPropertyBindingIndex16_Statics;
#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingTypes_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyBindingIndex16_Statics; \
	PROPERTYBINDINGUTILS_API static class UScriptStruct* StaticStruct();


struct FPropertyBindingIndex16;
// ********** End ScriptStruct FPropertyBindingIndex16 *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingTypes_h

// ********** Begin Enum EPropertyBindingAccessType ************************************************
#define FOREACH_ENUM_EPROPERTYBINDINGACCESSTYPE(op) \
	op(EPropertyBindingAccessType::Offset) \
	op(EPropertyBindingAccessType::Object) \
	op(EPropertyBindingAccessType::WeakObject) \
	op(EPropertyBindingAccessType::SoftObject) \
	op(EPropertyBindingAccessType::ObjectInstance) \
	op(EPropertyBindingAccessType::StructInstance) \
	op(EPropertyBindingAccessType::IndexArray) 

enum class EPropertyBindingAccessType : uint8;
template<> struct TIsUEnumClass<EPropertyBindingAccessType> { enum { Value = true }; };
template<> PROPERTYBINDINGUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBindingAccessType>();
// ********** End Enum EPropertyBindingAccessType **************************************************

// ********** Begin Enum EPropertyBindingPropertyAccessType ****************************************
#define FOREACH_ENUM_EPROPERTYBINDINGPROPERTYACCESSTYPE(op) \
	op(EPropertyBindingPropertyAccessType::Offset) \
	op(EPropertyBindingPropertyAccessType::Object) \
	op(EPropertyBindingPropertyAccessType::WeakObject) \
	op(EPropertyBindingPropertyAccessType::SoftObject) \
	op(EPropertyBindingPropertyAccessType::ObjectInstance) \
	op(EPropertyBindingPropertyAccessType::StructInstance) \
	op(EPropertyBindingPropertyAccessType::IndexArray) \
	op(EPropertyBindingPropertyAccessType::SharedStruct) \
	op(EPropertyBindingPropertyAccessType::StructInstanceContainer) \
	op(EPropertyBindingPropertyAccessType::Unset) 

enum class EPropertyBindingPropertyAccessType : uint8;
template<> struct TIsUEnumClass<EPropertyBindingPropertyAccessType> { enum { Value = true }; };
template<> PROPERTYBINDINGUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBindingPropertyAccessType>();
// ********** End Enum EPropertyBindingPropertyAccessType ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
