// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMMemoryDeprecated.h"

#ifdef RIGVM_RigVMMemoryDeprecated_generated_h
#error "RigVMMemoryDeprecated.generated.h already included, missing '#pragma once' in RigVMMemoryDeprecated.h"
#endif
#define RIGVM_RigVMMemoryDeprecated_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMRegister ****************************************************
struct Z_Construct_UScriptStruct_FRigVMRegister_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRegister_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMRegister;
// ********** End ScriptStruct FRigVMRegister ******************************************************

// ********** Begin ScriptStruct FRigVMRegisterOffset **********************************************
struct Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_200_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMRegisterOffset;
// ********** End ScriptStruct FRigVMRegisterOffset ************************************************

// ********** Begin ScriptStruct FRigVMMemoryContainer *********************************************
struct Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_320_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMMemoryContainer;
// ********** End ScriptStruct FRigVMMemoryContainer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h

// ********** Begin Enum ERigVMRegisterType ********************************************************
#define FOREACH_ENUM_ERIGVMREGISTERTYPE(op) \
	op(ERigVMRegisterType::Plain) \
	op(ERigVMRegisterType::String) \
	op(ERigVMRegisterType::Name) \
	op(ERigVMRegisterType::Struct) \
	op(ERigVMRegisterType::Invalid) 

enum class ERigVMRegisterType : uint8;
template<> struct TIsUEnumClass<ERigVMRegisterType> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMRegisterType>();
// ********** End Enum ERigVMRegisterType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
