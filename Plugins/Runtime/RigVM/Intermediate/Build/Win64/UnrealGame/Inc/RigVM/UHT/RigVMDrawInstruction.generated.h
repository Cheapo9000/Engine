// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMDrawInstruction.h"

#ifdef RIGVM_RigVMDrawInstruction_generated_h
#error "RigVMDrawInstruction.generated.h already included, missing '#pragma once' in RigVMDrawInstruction.h"
#endif
#define RIGVM_RigVMDrawInstruction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMDrawInstruction *********************************************
struct Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMDrawInstruction;
// ********** End ScriptStruct FRigVMDrawInstruction ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h

// ********** Begin Enum ERigVMDrawSettings ********************************************************
#define FOREACH_ENUM_ERIGVMDRAWSETTINGS(op) \
	op(ERigVMDrawSettings::Points) \
	op(ERigVMDrawSettings::Lines) \
	op(ERigVMDrawSettings::LineStrip) \
	op(ERigVMDrawSettings::DynamicMesh) 

namespace ERigVMDrawSettings { enum Primitive : int; }
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMDrawSettings::Primitive>();
// ********** End Enum ERigVMDrawSettings **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
