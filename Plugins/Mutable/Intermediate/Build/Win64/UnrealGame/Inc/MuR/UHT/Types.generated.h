// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuR/Types.h"

#ifdef MUTABLERUNTIME_Types_generated_h
#error "Types.generated.h already included, missing '#pragma once' in Types.h"
#endif
#define MUTABLERUNTIME_Types_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_MutableRuntime_Internal_MuR_Types_h

// ********** Begin Enum EFaceCullStrategy *********************************************************
#define FOREACH_ENUM_EFACECULLSTRATEGY(op) \
	op(EFaceCullStrategy::AllVerticesCulled) \
	op(EFaceCullStrategy::OneVertexCulled) 

enum class EFaceCullStrategy : uint8;
template<> struct TIsUEnumClass<EFaceCullStrategy> { enum { Value = true }; };
template<> MUTABLERUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFaceCullStrategy>();
// ********** End Enum EFaceCullStrategy ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
