// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/DataValidation.h"

#ifdef COREUOBJECT_DataValidation_generated_h
#error "DataValidation.generated.h already included, missing '#pragma once' in DataValidation.h"
#endif
#define COREUOBJECT_DataValidation_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_Misc_DataValidation_h

// ********** Begin Enum EDataValidationUsecase ****************************************************
#define FOREACH_ENUM_EDATAVALIDATIONUSECASE(op) \
	op(EDataValidationUsecase::None) \
	op(EDataValidationUsecase::Manual) \
	op(EDataValidationUsecase::Commandlet) \
	op(EDataValidationUsecase::Save) \
	op(EDataValidationUsecase::PreSubmit) \
	op(EDataValidationUsecase::Script) 

enum class EDataValidationUsecase : uint8;
template<> struct TIsUEnumClass<EDataValidationUsecase> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataValidationUsecase>();
// ********** End Enum EDataValidationUsecase ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
