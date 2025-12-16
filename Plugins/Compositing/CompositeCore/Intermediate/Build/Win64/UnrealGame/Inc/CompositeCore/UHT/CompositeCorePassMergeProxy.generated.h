// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositeCorePassMergeProxy.h"

#ifdef COMPOSITECORE_CompositeCorePassMergeProxy_generated_h
#error "CompositeCorePassMergeProxy.generated.h already included, missing '#pragma once' in CompositeCorePassMergeProxy.h"
#endif
#define COMPOSITECORE_CompositeCorePassMergeProxy_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_Passes_CompositeCorePassMergeProxy_h

// ********** Begin Enum ECompositeCoreMergeOp *****************************************************
#define FOREACH_ENUM_ECOMPOSITECOREMERGEOP(op) \
	op(ECompositeCoreMergeOp::None) \
	op(ECompositeCoreMergeOp::Over) \
	op(ECompositeCoreMergeOp::Under) \
	op(ECompositeCoreMergeOp::Add) \
	op(ECompositeCoreMergeOp::Subtract) \
	op(ECompositeCoreMergeOp::Multiply) \
	op(ECompositeCoreMergeOp::Divide) \
	op(ECompositeCoreMergeOp::Min) \
	op(ECompositeCoreMergeOp::Max) \
	op(ECompositeCoreMergeOp::In) \
	op(ECompositeCoreMergeOp::Mask) \
	op(ECompositeCoreMergeOp::Screen) \
	op(ECompositeCoreMergeOp::Overlay) \
	op(ECompositeCoreMergeOp::Darken) \
	op(ECompositeCoreMergeOp::Lighten) \
	op(ECompositeCoreMergeOp::ColorDodge) \
	op(ECompositeCoreMergeOp::ColorBurn) \
	op(ECompositeCoreMergeOp::HardLight) \
	op(ECompositeCoreMergeOp::SoftLight) \
	op(ECompositeCoreMergeOp::Difference) \
	op(ECompositeCoreMergeOp::Exclusion) 

enum class ECompositeCoreMergeOp : uint8;
template<> struct TIsUEnumClass<ECompositeCoreMergeOp> { enum { Value = true }; };
template<> COMPOSITECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeCoreMergeOp>();
// ********** End Enum ECompositeCoreMergeOp *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
