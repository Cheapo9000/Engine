// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDiagnostic.h"

#ifdef OPTIMUSCORE_OptimusDiagnostic_generated_h
#error "OptimusDiagnostic.generated.h already included, missing '#pragma once' in OptimusDiagnostic.h"
#endif
#define OPTIMUSCORE_OptimusDiagnostic_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDiagnostic_h

// ********** Begin Enum EOptimusDiagnosticLevel ***************************************************
#define FOREACH_ENUM_EOPTIMUSDIAGNOSTICLEVEL(op) \
	op(EOptimusDiagnosticLevel::None) \
	op(EOptimusDiagnosticLevel::Info) \
	op(EOptimusDiagnosticLevel::Warning) \
	op(EOptimusDiagnosticLevel::Error) 

enum class EOptimusDiagnosticLevel : uint8;
template<> struct TIsUEnumClass<EOptimusDiagnosticLevel> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusDiagnosticLevel>();
// ********** End Enum EOptimusDiagnosticLevel *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
