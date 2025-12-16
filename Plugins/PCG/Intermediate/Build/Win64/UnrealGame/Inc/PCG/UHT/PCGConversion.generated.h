// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGConversion.h"

#ifdef PCG_PCGConversion_generated_h
#error "PCGConversion.generated.h already included, missing '#pragma once' in PCGConversion.h"
#endif
#define PCG_PCGConversion_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Helpers_PCGConversion_h

// ********** Begin Enum EPCGConversionStatus ******************************************************
#define FOREACH_ENUM_EPCGCONVERSIONSTATUS(op) \
	op(EPCGConversionStatus::Uninitialized) \
	op(EPCGConversionStatus::InitializedGraph) \
	op(EPCGConversionStatus::InitializedSource) \
	op(EPCGConversionStatus::DataPrepared) \
	op(EPCGConversionStatus::StructuralChangesApplied) \
	op(EPCGConversionStatus::Complete) 

enum class EPCGConversionStatus : uint8;
template<> struct TIsUEnumClass<EPCGConversionStatus> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGConversionStatus>();
// ********** End Enum EPCGConversionStatus ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
