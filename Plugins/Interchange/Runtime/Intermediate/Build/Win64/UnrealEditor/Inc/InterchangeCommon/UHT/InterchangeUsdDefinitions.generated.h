// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Usd/InterchangeUsdDefinitions.h"

#ifdef INTERCHANGECOMMON_InterchangeUsdDefinitions_generated_h
#error "InterchangeUsdDefinitions.generated.h already included, missing '#pragma once' in InterchangeUsdDefinitions.h"
#endif
#define INTERCHANGECOMMON_InterchangeUsdDefinitions_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Common_Public_Usd_InterchangeUsdDefinitions_h

// ********** Begin Enum EInterchangeUsdPrimvar ****************************************************
#define FOREACH_ENUM_EINTERCHANGEUSDPRIMVAR(op) \
	op(EInterchangeUsdPrimvar::Standard) \
	op(EInterchangeUsdPrimvar::Bake) \
	op(EInterchangeUsdPrimvar::All) 

enum class EInterchangeUsdPrimvar : uint8;
template<> struct TIsUEnumClass<EInterchangeUsdPrimvar> { enum { Value = true }; };
template<> INTERCHANGECOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeUsdPrimvar>();
// ********** End Enum EInterchangeUsdPrimvar ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
