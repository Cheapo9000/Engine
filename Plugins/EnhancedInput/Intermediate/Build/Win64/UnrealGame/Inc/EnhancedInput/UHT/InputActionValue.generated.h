// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputActionValue.h"

#ifdef ENHANCEDINPUT_InputActionValue_generated_h
#error "InputActionValue.generated.h already included, missing '#pragma once' in InputActionValue.h"
#endif
#define ENHANCEDINPUT_InputActionValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInputActionValue *************************************************
struct Z_Construct_UScriptStruct_FInputActionValue_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputActionValue_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FInputActionValue;
// ********** End ScriptStruct FInputActionValue ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h

// ********** Begin Enum EInputActionValueType *****************************************************
#define FOREACH_ENUM_EINPUTACTIONVALUETYPE(op) \
	op(EInputActionValueType::Boolean) \
	op(EInputActionValueType::Axis1D) \
	op(EInputActionValueType::Axis2D) \
	op(EInputActionValueType::Axis3D) 

enum class EInputActionValueType : uint8;
template<> struct TIsUEnumClass<EInputActionValueType> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputActionValueType>();
// ********** End Enum EInputActionValueType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
