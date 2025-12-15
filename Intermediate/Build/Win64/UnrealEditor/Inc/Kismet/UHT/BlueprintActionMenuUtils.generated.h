// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintActionMenuUtils.h"

#ifdef KISMET_BlueprintActionMenuUtils_generated_h
#error "BlueprintActionMenuUtils.generated.h already included, missing '#pragma once' in BlueprintActionMenuUtils.h"
#endif
#define KISMET_BlueprintActionMenuUtils_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuUtils_h

// ********** Begin Enum EContextTargetFlags *******************************************************
#define FOREACH_ENUM_ECONTEXTTARGETFLAGS(op) \
	op(EContextTargetFlags::TARGET_Blueprint) \
	op(EContextTargetFlags::TARGET_SubComponents) \
	op(EContextTargetFlags::TARGET_NodeTarget) \
	op(EContextTargetFlags::TARGET_PinObject) \
	op(EContextTargetFlags::TARGET_SiblingPinObjects) \
	op(EContextTargetFlags::TARGET_BlueprintLibraries) \
	op(EContextTargetFlags::TARGET_NonImportedTypes) \
	op(EContextTargetFlags::ContextTargetFlagsEnd) 

namespace EContextTargetFlags { enum Type : int; }
template<> KISMET_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextTargetFlags::Type>();
// ********** End Enum EContextTargetFlags *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
