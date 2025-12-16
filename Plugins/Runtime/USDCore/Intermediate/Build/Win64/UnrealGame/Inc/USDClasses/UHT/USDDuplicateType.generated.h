// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDDuplicateType.h"

#ifdef USDCLASSES_USDDuplicateType_generated_h
#error "USDDuplicateType.generated.h already included, missing '#pragma once' in USDDuplicateType.h"
#endif
#define USDCLASSES_USDDuplicateType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDuplicateType_h

// ********** Begin Enum EUsdDuplicateType *********************************************************
#define FOREACH_ENUM_EUSDDUPLICATETYPE(op) \
	op(EUsdDuplicateType::FlattenComposedPrim) \
	op(EUsdDuplicateType::SingleLayerSpecs) \
	op(EUsdDuplicateType::AllLocalLayerSpecs) 

enum class EUsdDuplicateType : uint8;
template<> struct TIsUEnumClass<EUsdDuplicateType> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdDuplicateType>();
// ********** End Enum EUsdDuplicateType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
