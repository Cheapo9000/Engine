// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuT/NodeModifier.h"

#ifdef MUTABLETOOLS_NodeModifier_generated_h
#error "NodeModifier.generated.h already included, missing '#pragma once' in NodeModifier.h"
#endif
#define MUTABLETOOLS_NodeModifier_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_MutableTools_Internal_MuT_NodeModifier_h

// ********** Begin Enum EMutableMultipleTagPolicy *************************************************
#define FOREACH_ENUM_EMUTABLEMULTIPLETAGPOLICY(op) \
	op(EMutableMultipleTagPolicy::OnlyOneRequired) \
	op(EMutableMultipleTagPolicy::AllRequired) 

enum class EMutableMultipleTagPolicy : uint8;
template<> struct TIsUEnumClass<EMutableMultipleTagPolicy> { enum { Value = true }; };
template<> MUTABLETOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMutableMultipleTagPolicy>();
// ********** End Enum EMutableMultipleTagPolicy ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
