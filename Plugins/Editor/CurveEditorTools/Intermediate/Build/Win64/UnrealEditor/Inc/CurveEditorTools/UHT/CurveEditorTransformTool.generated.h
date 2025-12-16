// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/CurveEditorTransformTool.h"

#ifdef CURVEEDITORTOOLS_CurveEditorTransformTool_generated_h
#error "CurveEditorTransformTool.generated.h already included, missing '#pragma once' in CurveEditorTransformTool.h"
#endif
#define CURVEEDITORTOOLS_CurveEditorTransformTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTransformToolOptions *********************************************
struct Z_Construct_UScriptStruct_FTransformToolOptions_Statics;
#define FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformToolOptions_Statics; \
	CURVEEDITORTOOLS_API static class UScriptStruct* StaticStruct();


struct FTransformToolOptions;
// ********** End ScriptStruct FTransformToolOptions ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h

// ********** Begin Enum EToolTransformInterpType **************************************************
#define FOREACH_ENUM_ETOOLTRANSFORMINTERPTYPE(op) \
	op(EToolTransformInterpType::Linear) \
	op(EToolTransformInterpType::Sinusoidal) \
	op(EToolTransformInterpType::Cubic) \
	op(EToolTransformInterpType::CircularIn) \
	op(EToolTransformInterpType::CircularOut) \
	op(EToolTransformInterpType::ExpIn) \
	op(EToolTransformInterpType::ExpOut) 

enum class EToolTransformInterpType : uint8;
template<> struct TIsUEnumClass<EToolTransformInterpType> { enum { Value = true }; };
template<> CURVEEDITORTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolTransformInterpType>();
// ********** End Enum EToolTransformInterpType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
