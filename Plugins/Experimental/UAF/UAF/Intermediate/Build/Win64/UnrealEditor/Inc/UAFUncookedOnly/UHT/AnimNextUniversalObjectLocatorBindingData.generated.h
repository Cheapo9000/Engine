// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/AnimNextUniversalObjectLocatorBindingData.h"

#ifdef UAFUNCOOKEDONLY_AnimNextUniversalObjectLocatorBindingData_generated_h
#error "AnimNextUniversalObjectLocatorBindingData.generated.h already included, missing '#pragma once' in AnimNextUniversalObjectLocatorBindingData.h"
#endif
#define UAFUNCOOKEDONLY_AnimNextUniversalObjectLocatorBindingData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextUniversalObjectLocatorBindingData ************************
struct Z_Construct_UScriptStruct_FAnimNextUniversalObjectLocatorBindingData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Variables_AnimNextUniversalObjectLocatorBindingData_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextUniversalObjectLocatorBindingData_Statics; \
	UAFUNCOOKEDONLY_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextVariableBindingData Super;


struct FAnimNextUniversalObjectLocatorBindingData;
// ********** End ScriptStruct FAnimNextUniversalObjectLocatorBindingData **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Internal_Variables_AnimNextUniversalObjectLocatorBindingData_h

// ********** Begin Enum FAnimNextUniversalObjectLocatorBindingType ********************************
#define FOREACH_ENUM_FANIMNEXTUNIVERSALOBJECTLOCATORBINDINGTYPE(op) \
	op(FAnimNextUniversalObjectLocatorBindingType::UOL) \
	op(FAnimNextUniversalObjectLocatorBindingType::Property) \
	op(FAnimNextUniversalObjectLocatorBindingType::Function) \
	op(FAnimNextUniversalObjectLocatorBindingType::HoistedFunction) 

enum class FAnimNextUniversalObjectLocatorBindingType : uint8;
template<> struct TIsUEnumClass<FAnimNextUniversalObjectLocatorBindingType> { enum { Value = true }; };
template<> UAFUNCOOKEDONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<FAnimNextUniversalObjectLocatorBindingType>();
// ********** End Enum FAnimNextUniversalObjectLocatorBindingType **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
