// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Expressions/T_Maths_TwoInputs.h"

#ifdef TEXTUREGRAPHENGINE_T_Maths_TwoInputs_generated_h
#error "T_Maths_TwoInputs.generated.h already included, missing '#pragma once' in T_Maths_TwoInputs.h"
#endif
#define TEXTUREGRAPHENGINE_T_Maths_TwoInputs_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Expressions_T_Maths_TwoInputs_h

// ********** Begin Enum EIfThenElseOperator *******************************************************
#define FOREACH_ENUM_EIFTHENELSEOPERATOR(op) \
	op(GT) \
	op(GTE) \
	op(LT) \
	op(LTE) \
	op(EQ) \
	op(NEQ) 

enum EIfThenElseOperator : int;
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EIfThenElseOperator>();
// ********** End Enum EIfThenElseOperator *********************************************************

// ********** Begin Enum EIfThenElseType ***********************************************************
#define FOREACH_ENUM_EIFTHENELSETYPE(op) \
	op(IndividualComponent) \
	op(AllComponents) \
	op(Grayscale) 

enum EIfThenElseType : int;
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EIfThenElseType>();
// ********** End Enum EIfThenElseType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
