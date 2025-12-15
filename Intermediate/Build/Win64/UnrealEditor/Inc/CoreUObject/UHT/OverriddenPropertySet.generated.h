// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/OverriddenPropertySet.h"

#ifdef COREUOBJECT_OverriddenPropertySet_generated_h
#error "OverriddenPropertySet.generated.h already included, missing '#pragma once' in OverriddenPropertySet.h"
#endif
#define COREUOBJECT_OverriddenPropertySet_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOverriddenPropertyPath *******************************************
struct Z_Construct_UScriptStruct_FOverriddenPropertyPath_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOverriddenPropertyPath_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FOverriddenPropertyPath;
// ********** End ScriptStruct FOverriddenPropertyPath *********************************************

// ********** Begin ScriptStruct FOverriddenPropertyNodeID *****************************************
struct Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_260_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FOverriddenPropertyNodeID;
// ********** End ScriptStruct FOverriddenPropertyNodeID *******************************************

// ********** Begin ScriptStruct FOverriddenPropertyNode *******************************************
struct Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FOverriddenPropertyNode;
// ********** End ScriptStruct FOverriddenPropertyNode *********************************************

// ********** Begin ScriptStruct FOverriddenPropertySet ********************************************
struct Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_422_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FOverriddenPropertySet;
// ********** End ScriptStruct FOverriddenPropertySet **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h

// ********** Begin Enum EOverriddenPropertyOperation **********************************************
#define FOREACH_ENUM_EOVERRIDDENPROPERTYOPERATION(op) \
	op(EOverriddenPropertyOperation::None) \
	op(EOverriddenPropertyOperation::Modified) \
	op(EOverriddenPropertyOperation::Replace) \
	op(EOverriddenPropertyOperation::Add) \
	op(EOverriddenPropertyOperation::Remove) \
	op(EOverriddenPropertyOperation::SubObjectsShadowing) 

enum class EOverriddenPropertyOperation : uint8;
template<> struct TIsUEnumClass<EOverriddenPropertyOperation> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EOverriddenPropertyOperation>();
// ********** End Enum EOverriddenPropertyOperation ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
