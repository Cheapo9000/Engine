// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/AnimNextUniversalObjectLocatorBindingData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTUNCOOKEDONLY_AnimNextUniversalObjectLocatorBindingData_generated_h
#error "AnimNextUniversalObjectLocatorBindingData.generated.h already included, missing '#pragma once' in AnimNextUniversalObjectLocatorBindingData.h"
#endif
#define ANIMNEXTUNCOOKEDONLY_AnimNextUniversalObjectLocatorBindingData_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Variables_AnimNextUniversalObjectLocatorBindingData_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextUniversalObjectLocatorBindingData_Statics; \
	ANIMNEXTUNCOOKEDONLY_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextVariableBindingData Super;


template<> ANIMNEXTUNCOOKEDONLY_API UScriptStruct* StaticStruct<struct FAnimNextUniversalObjectLocatorBindingData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Variables_AnimNextUniversalObjectLocatorBindingData_h


#define FOREACH_ENUM_FANIMNEXTUNIVERSALOBJECTLOCATORBINDINGTYPE(op) \
	op(FAnimNextUniversalObjectLocatorBindingType::Property) \
	op(FAnimNextUniversalObjectLocatorBindingType::Function) \
	op(FAnimNextUniversalObjectLocatorBindingType::HoistedFunction) 

enum class FAnimNextUniversalObjectLocatorBindingType : uint8;
template<> struct TIsUEnumClass<FAnimNextUniversalObjectLocatorBindingType> { enum { Value = true }; };
template<> ANIMNEXTUNCOOKEDONLY_API UEnum* StaticEnum<FAnimNextUniversalObjectLocatorBindingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
