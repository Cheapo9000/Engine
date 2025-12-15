// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/HLSLMaterialDerivativeAutogen.h"

#ifdef ENGINE_HLSLMaterialDerivativeAutogen_generated_h
#error "HLSLMaterialDerivativeAutogen.generated.h already included, missing '#pragma once' in HLSLMaterialDerivativeAutogen.h"
#endif
#define ENGINE_HLSLMaterialDerivativeAutogen_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Materials_HLSLMaterialDerivativeAutogen_h

// ********** Begin Enum EDerivativeStatus *********************************************************
#define FOREACH_ENUM_EDERIVATIVESTATUS(op) \
	op(EDerivativeStatus::NotAware) \
	op(EDerivativeStatus::NotValid) \
	op(EDerivativeStatus::Zero) \
	op(EDerivativeStatus::Valid) 

enum class EDerivativeStatus : uint8;
template<> struct TIsUEnumClass<EDerivativeStatus> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDerivativeStatus>();
// ********** End Enum EDerivativeStatus ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
