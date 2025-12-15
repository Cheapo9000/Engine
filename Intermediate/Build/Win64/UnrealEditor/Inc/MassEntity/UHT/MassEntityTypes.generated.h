// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityTypes.h"

#ifdef MASSENTITY_MassEntityTypes_generated_h
#error "MassEntityTypes.generated.h already included, missing '#pragma once' in MassEntityTypes.h"
#endif
#define MASSENTITY_MassEntityTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassEntityTypes_h

// ********** Begin Enum EMassObservedOperation ****************************************************
#define FOREACH_ENUM_EMASSOBSERVEDOPERATION(op) \
	op(EMassObservedOperation::AddElement) \
	op(EMassObservedOperation::RemoveElement) \
	op(EMassObservedOperation::DestroyEntity) \
	op(EMassObservedOperation::CreateEntity) \
	op(EMassObservedOperation::MAX) \
	op(EMassObservedOperation::Add) 

enum class EMassObservedOperation : uint8;
template<> struct TIsUEnumClass<EMassObservedOperation> { enum { Value = true }; };
template<> MASSENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassObservedOperation>();
// ********** End Enum EMassObservedOperation ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
