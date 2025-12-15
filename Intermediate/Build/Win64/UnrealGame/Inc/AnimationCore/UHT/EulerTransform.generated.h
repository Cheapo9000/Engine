// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EulerTransform.h"

#ifdef ANIMATIONCORE_EulerTransform_generated_h
#error "EulerTransform.generated.h already included, missing '#pragma once' in EulerTransform.h"
#endif
#define ANIMATIONCORE_EulerTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEulerTransform ***************************************************
struct Z_Construct_UScriptStruct_FEulerTransform_Statics;
#define FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEulerTransform_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


struct FEulerTransform;
// ********** End ScriptStruct FEulerTransform *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h

// ********** Begin Enum EEulerRotationOrder *******************************************************
#define FOREACH_ENUM_EEULERROTATIONORDER(op) \
	op(EEulerRotationOrder::XYZ) \
	op(EEulerRotationOrder::XZY) \
	op(EEulerRotationOrder::YXZ) \
	op(EEulerRotationOrder::YZX) \
	op(EEulerRotationOrder::ZXY) \
	op(EEulerRotationOrder::ZYX) 

enum class EEulerRotationOrder : uint8;
template<> struct TIsUEnumClass<EEulerRotationOrder> { enum { Value = true }; };
template<> ANIMATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEulerRotationOrder>();
// ********** End Enum EEulerRotationOrder *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
