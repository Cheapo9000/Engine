// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMMemoryCommon.h"

#ifdef RIGVM_RigVMMemoryCommon_generated_h
#error "RigVMMemoryCommon.generated.h already included, missing '#pragma once' in RigVMMemoryCommon.h"
#endif
#define RIGVM_RigVMMemoryCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMInstructionSetExecuteState **********************************
struct Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMInstructionSetExecuteState_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMInstructionSetExecuteState;
// ********** End ScriptStruct FRigVMInstructionSetExecuteState ************************************

// ********** Begin ScriptStruct FRigVMOperand *****************************************************
struct Z_Construct_UScriptStruct_FRigVMOperand_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMOperand_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMOperand;
// ********** End ScriptStruct FRigVMOperand *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryCommon_h

// ********** Begin Enum ERigVMMemoryType **********************************************************
#define FOREACH_ENUM_ERIGVMMEMORYTYPE(op) \
	op(ERigVMMemoryType::Work) \
	op(ERigVMMemoryType::Literal) \
	op(ERigVMMemoryType::External) \
	op(ERigVMMemoryType::Debug) \
	op(ERigVMMemoryType::Invalid) 

enum class ERigVMMemoryType : uint8;
template<> struct TIsUEnumClass<ERigVMMemoryType> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMMemoryType>();
// ********** End Enum ERigVMMemoryType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
