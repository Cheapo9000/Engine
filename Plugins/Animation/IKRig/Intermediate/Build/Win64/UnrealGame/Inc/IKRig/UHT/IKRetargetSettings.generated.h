// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargetSettings.h"

#ifdef IKRIG_IKRetargetSettings_generated_h
#error "IKRetargetSettings.generated.h already included, missing '#pragma once' in IKRetargetSettings.h"
#endif
#define IKRIG_IKRetargetSettings_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h

// ********** Begin Enum ERetargetSourceOrTarget ***************************************************
#define FOREACH_ENUM_ERETARGETSOURCEORTARGET(op) \
	op(ERetargetSourceOrTarget::Source) \
	op(ERetargetSourceOrTarget::Target) 

enum class ERetargetSourceOrTarget : uint8;
template<> struct TIsUEnumClass<ERetargetSourceOrTarget> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERetargetSourceOrTarget>();
// ********** End Enum ERetargetSourceOrTarget *****************************************************

// ********** Begin Enum EBasicAxis ****************************************************************
#define FOREACH_ENUM_EBASICAXIS(op) \
	op(EBasicAxis::X) \
	op(EBasicAxis::Y) \
	op(EBasicAxis::Z) \
	op(EBasicAxis::NegX) \
	op(EBasicAxis::NegY) \
	op(EBasicAxis::NegZ) 

enum class EBasicAxis;
template<> struct TIsUEnumClass<EBasicAxis> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EBasicAxis>();
// ********** End Enum EBasicAxis ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
