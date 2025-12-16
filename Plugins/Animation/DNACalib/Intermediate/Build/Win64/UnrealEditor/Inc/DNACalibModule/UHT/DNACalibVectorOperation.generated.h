// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commands/DNACalibVectorOperation.h"

#ifdef DNACALIBMODULE_DNACalibVectorOperation_generated_h
#error "DNACalibVectorOperation.generated.h already included, missing '#pragma once' in DNACalibVectorOperation.h"
#endif
#define DNACALIBMODULE_DNACalibVectorOperation_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DNACalib_Source_DNACalibModule_Public_Commands_DNACalibVectorOperation_h

// ********** Begin Enum EDNACalibVectorOperation **************************************************
#define FOREACH_ENUM_EDNACALIBVECTOROPERATION(op) \
	op(EDNACalibVectorOperation::Interpolate) \
	op(EDNACalibVectorOperation::Add) \
	op(EDNACalibVectorOperation::Subtract) \
	op(EDNACalibVectorOperation::Multiply) 

enum class EDNACalibVectorOperation : uint8;
template<> struct TIsUEnumClass<EDNACalibVectorOperation> { enum { Value = true }; };
template<> DNACALIBMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDNACalibVectorOperation>();
// ********** End Enum EDNACalibVectorOperation ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
