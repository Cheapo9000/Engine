// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Expressions/T_Maths_OneInput.h"

#ifdef TEXTUREGRAPHENGINE_T_Maths_OneInput_generated_h
#error "T_Maths_OneInput.generated.h already included, missing '#pragma once' in T_Maths_OneInput.h"
#endif
#define TEXTUREGRAPHENGINE_T_Maths_OneInput_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Transform_Expressions_T_Maths_OneInput_h

// ********** Begin Enum ETrigFunction *************************************************************
#define FOREACH_ENUM_ETRIGFUNCTION(op) \
	op(ETrigFunction::Sin) \
	op(ETrigFunction::Cos) \
	op(ETrigFunction::Tan) \
	op(ETrigFunction::ASin) \
	op(ETrigFunction::ACos) \
	op(ETrigFunction::ATan) 

enum class ETrigFunction : uint8;
template<> struct TIsUEnumClass<ETrigFunction> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrigFunction>();
// ********** End Enum ETrigFunction ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
