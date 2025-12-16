// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/Kismet/RigVMFindInBlueprintManager.h"

#ifdef RIGVMEDITOR_RigVMFindInBlueprintManager_generated_h
#error "RigVMFindInBlueprintManager.generated.h already included, missing '#pragma once' in RigVMFindInBlueprintManager.h"
#endif
#define RIGVMEDITOR_RigVMFindInBlueprintManager_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMFindInBlueprintManager_h

// ********** Begin Enum ERigVMFiBVersion **********************************************************
#define FOREACH_ENUM_ERIGVMFIBVERSION(op) \
	op(RIGVM_FIB_VER_NONE) \
	op(RIGVM_FIB_VER_BASE) \
	op(RIGVM_FIB_VER_VARIABLE_REFERENCE) \
	op(RIGVM_FIB_VER_INTERFACE_GRAPHS) \
	op(RIGVM_FIB_VER_FUNC_CALL_SITES) \
	op(RIGVM_FIB_VER_PLUS_ONE) \
	op(RIGVM_FIB_VER_LATEST) 

enum ERigVMFiBVersion : int;
template<> RIGVMEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMFiBVersion>();
// ********** End Enum ERigVMFiBVersion ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
