// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VectorVM.h"

#ifdef VECTORVM_VectorVM_generated_h
#error "VectorVM.generated.h already included, missing '#pragma once' in VectorVM.h"
#endif
#define VECTORVM_VectorVM_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_VectorVM_Public_VectorVM_h

// ********** Begin Enum EVectorVMBaseTypes ********************************************************
#define FOREACH_ENUM_EVECTORVMBASETYPES(op) \
	op(EVectorVMBaseTypes::Float) \
	op(EVectorVMBaseTypes::Int) \
	op(EVectorVMBaseTypes::Bool) \
	op(EVectorVMBaseTypes::Num) 

enum class EVectorVMBaseTypes : uint8;
template<> struct TIsUEnumClass<EVectorVMBaseTypes> { enum { Value = true }; };
template<> VECTORVM_NON_ATTRIBUTED_API UEnum* StaticEnum<EVectorVMBaseTypes>();
// ********** End Enum EVectorVMBaseTypes **********************************************************

// ********** Begin Enum EVectorVMOperandLocation **************************************************
#define FOREACH_ENUM_EVECTORVMOPERANDLOCATION(op) \
	op(EVectorVMOperandLocation::Register) \
	op(EVectorVMOperandLocation::Constant) \
	op(EVectorVMOperandLocation::Num) 

enum class EVectorVMOperandLocation : uint8;
template<> struct TIsUEnumClass<EVectorVMOperandLocation> { enum { Value = true }; };
template<> VECTORVM_NON_ATTRIBUTED_API UEnum* StaticEnum<EVectorVMOperandLocation>();
// ********** End Enum EVectorVMOperandLocation ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
