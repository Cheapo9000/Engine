// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FindInBlueprints.h"

#ifdef KISMET_FindInBlueprints_generated_h
#error "FindInBlueprints.generated.h already included, missing '#pragma once' in FindInBlueprints.h"
#endif
#define KISMET_FindInBlueprints_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_FindInBlueprints_h

// ********** Begin Enum EFiBIndexAllPermission ****************************************************
#define FOREACH_ENUM_EFIBINDEXALLPERMISSION(op) \
	op(EFiBIndexAllPermission::None) \
	op(EFiBIndexAllPermission::LoadOnly) \
	op(EFiBIndexAllPermission::CheckoutAndResave) 

enum class EFiBIndexAllPermission;
template<> struct TIsUEnumClass<EFiBIndexAllPermission> { enum { Value = true }; };
template<> KISMET_NON_ATTRIBUTED_API UEnum* StaticEnum<EFiBIndexAllPermission>();
// ********** End Enum EFiBIndexAllPermission ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
