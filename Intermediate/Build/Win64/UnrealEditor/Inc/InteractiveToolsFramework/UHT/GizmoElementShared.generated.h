// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementShared.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementShared_generated_h
#error "GizmoElementShared.generated.h already included, missing '#pragma once' in GizmoElementShared.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementShared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGizmoPerStateValueDouble *****************************************
struct Z_Construct_UScriptStruct_FGizmoPerStateValueDouble_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmoPerStateValueDouble_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FGizmoPerStateValueDouble;
// ********** End ScriptStruct FGizmoPerStateValueDouble *******************************************

// ********** Begin ScriptStruct FGizmoPerStateValueLinearColor ************************************
struct Z_Construct_UScriptStruct_FGizmoPerStateValueLinearColor_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmoPerStateValueLinearColor_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FGizmoPerStateValueLinearColor;
// ********** End ScriptStruct FGizmoPerStateValueLinearColor **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h

// ********** Begin Enum EGizmoElementState ********************************************************
#define FOREACH_ENUM_EGIZMOELEMENTSTATE(op) \
	op(EGizmoElementState::None) \
	op(EGizmoElementState::Visible) \
	op(EGizmoElementState::Hittable) \
	op(EGizmoElementState::VisibleAndHittable) 

enum class EGizmoElementState : uint8;
template<> struct TIsUEnumClass<EGizmoElementState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementState>();
// ********** End Enum EGizmoElementState **********************************************************

// ********** Begin Enum EGizmoElementInteractionState *********************************************
#define FOREACH_ENUM_EGIZMOELEMENTINTERACTIONSTATE(op) \
	op(EGizmoElementInteractionState::None) \
	op(EGizmoElementInteractionState::Hovering) \
	op(EGizmoElementInteractionState::Interacting) \
	op(EGizmoElementInteractionState::Selected) \
	op(EGizmoElementInteractionState::Subdued) \
	op(EGizmoElementInteractionState::Max) 

enum class EGizmoElementInteractionState;
template<> struct TIsUEnumClass<EGizmoElementInteractionState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementInteractionState>();
// ********** End Enum EGizmoElementInteractionState ***********************************************

// ********** Begin Enum EGizmoElementViewDependentType ********************************************
#define FOREACH_ENUM_EGIZMOELEMENTVIEWDEPENDENTTYPE(op) \
	op(EGizmoElementViewDependentType::None) \
	op(EGizmoElementViewDependentType::Axis) \
	op(EGizmoElementViewDependentType::Plane) 

enum class EGizmoElementViewDependentType;
template<> struct TIsUEnumClass<EGizmoElementViewDependentType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementViewDependentType>();
// ********** End Enum EGizmoElementViewDependentType **********************************************

// ********** Begin Enum EGizmoElementViewAlignType ************************************************
#define FOREACH_ENUM_EGIZMOELEMENTVIEWALIGNTYPE(op) \
	op(EGizmoElementViewAlignType::None) \
	op(EGizmoElementViewAlignType::PointOnly) \
	op(EGizmoElementViewAlignType::PointEye) \
	op(EGizmoElementViewAlignType::PointScreen) \
	op(EGizmoElementViewAlignType::Axial) 

enum class EGizmoElementViewAlignType;
template<> struct TIsUEnumClass<EGizmoElementViewAlignType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementViewAlignType>();
// ********** End Enum EGizmoElementViewAlignType **************************************************

// ********** Begin Enum EGizmoElementPartialType **************************************************
#define FOREACH_ENUM_EGIZMOELEMENTPARTIALTYPE(op) \
	op(EGizmoElementPartialType::None) \
	op(EGizmoElementPartialType::Partial) \
	op(EGizmoElementPartialType::PartialViewDependent) 

enum class EGizmoElementPartialType;
template<> struct TIsUEnumClass<EGizmoElementPartialType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementPartialType>();
// ********** End Enum EGizmoElementPartialType ****************************************************

// ********** Begin Enum EGizmoElementDrawType *****************************************************
#define FOREACH_ENUM_EGIZMOELEMENTDRAWTYPE(op) \
	op(EGizmoElementDrawType::None) \
	op(EGizmoElementDrawType::Fill) \
	op(EGizmoElementDrawType::Line) \
	op(EGizmoElementDrawType::FillAndLine) 

enum class EGizmoElementDrawType : uint8;
template<> struct TIsUEnumClass<EGizmoElementDrawType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementDrawType>();
// ********** End Enum EGizmoElementDrawType *******************************************************

// ********** Begin Enum EGizmoElementHitSortType **************************************************
#define FOREACH_ENUM_EGIZMOELEMENTHITSORTTYPE(op) \
	op(EGizmoElementHitSortType::Closest) \
	op(EGizmoElementHitSortType::Priority) \
	op(EGizmoElementHitSortType::Surface) \
	op(EGizmoElementHitSortType::PriorityThenSurfaceThenClosest) 

enum class EGizmoElementHitSortType : uint8;
template<> struct TIsUEnumClass<EGizmoElementHitSortType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementHitSortType>();
// ********** End Enum EGizmoElementHitSortType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
