// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigSplineTypes.h"

#ifdef CONTROLRIGSPLINE_ControlRigSplineTypes_generated_h
#error "ControlRigSplineTypes.generated.h already included, missing '#pragma once' in ControlRigSplineTypes.h"
#endif
#define CONTROLRIGSPLINE_ControlRigSplineTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigSplineImpl *********************************************
struct Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics;
#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct();


struct FControlRigSplineImpl;
// ********** End ScriptStruct FControlRigSplineImpl ***********************************************

// ********** Begin ScriptStruct FControlRigSpline *************************************************
struct Z_Construct_UScriptStruct_FControlRigSpline_Statics;
#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct();


struct FControlRigSpline;
// ********** End ScriptStruct FControlRigSpline ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h

// ********** Begin Enum ESplineType ***************************************************************
#define FOREACH_ENUM_ESPLINETYPE(op) \
	op(ESplineType::BSpline) \
	op(ESplineType::Hermite) \
	op(ESplineType::Max) 

enum class ESplineType : uint8;
template<> struct TIsUEnumClass<ESplineType> { enum { Value = true }; };
template<> CONTROLRIGSPLINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESplineType>();
// ********** End Enum ESplineType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
