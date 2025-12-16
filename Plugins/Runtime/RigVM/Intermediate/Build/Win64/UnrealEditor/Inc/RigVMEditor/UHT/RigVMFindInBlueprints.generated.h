// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/Kismet/RigVMFindInBlueprints.h"

#ifdef RIGVMEDITOR_RigVMFindInBlueprints_generated_h
#error "RigVMFindInBlueprints.generated.h already included, missing '#pragma once' in RigVMFindInBlueprints.h"
#endif
#define RIGVMEDITOR_RigVMFindInBlueprints_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Private_Editor_Kismet_RigVMFindInBlueprints_h

// ********** Begin Enum ERigVMFiBIndexAllPermission ***********************************************
#define FOREACH_ENUM_ERIGVMFIBINDEXALLPERMISSION(op) \
	op(ERigVMFiBIndexAllPermission::None) \
	op(ERigVMFiBIndexAllPermission::LoadOnly) \
	op(ERigVMFiBIndexAllPermission::CheckoutAndResave) 

enum class ERigVMFiBIndexAllPermission;
template<> struct TIsUEnumClass<ERigVMFiBIndexAllPermission> { enum { Value = true }; };
template<> RIGVMEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMFiBIndexAllPermission>();
// ********** End Enum ERigVMFiBIndexAllPermission *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
