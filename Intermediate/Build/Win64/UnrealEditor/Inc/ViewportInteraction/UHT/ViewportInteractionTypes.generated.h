// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractionTypes.h"

#ifdef VIEWPORTINTERACTION_ViewportInteractionTypes_generated_h
#error "ViewportInteractionTypes.generated.h already included, missing '#pragma once' in ViewportInteractionTypes.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractionTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FViewportActionKeyInput *******************************************
struct Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics;
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics; \
	VIEWPORTINTERACTION_API static class UScriptStruct* StaticStruct();


struct FViewportActionKeyInput;
// ********** End ScriptStruct FViewportActionKeyInput *********************************************

// ********** Begin ScriptStruct FTransformGizmoHandlePlacement ************************************
struct Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics;
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics; \
	VIEWPORTINTERACTION_API static class UScriptStruct* StaticStruct();


struct FTransformGizmoHandlePlacement;
// ********** End ScriptStruct FTransformGizmoHandlePlacement **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h

// ********** Begin Enum EViewportInteractionDraggingMode ******************************************
#define FOREACH_ENUM_EVIEWPORTINTERACTIONDRAGGINGMODE(op) \
	op(EViewportInteractionDraggingMode::Nothing) \
	op(EViewportInteractionDraggingMode::TransformablesWithGizmo) \
	op(EViewportInteractionDraggingMode::TransformablesAtLaserImpact) \
	op(EViewportInteractionDraggingMode::AssistingDrag) \
	op(EViewportInteractionDraggingMode::TransformablesFreely) \
	op(EViewportInteractionDraggingMode::World) \
	op(EViewportInteractionDraggingMode::Interactable) \
	op(EViewportInteractionDraggingMode::Material) 

enum class EViewportInteractionDraggingMode : uint8;
template<> struct TIsUEnumClass<EViewportInteractionDraggingMode> { enum { Value = true }; };
template<> VIEWPORTINTERACTION_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewportInteractionDraggingMode>();
// ********** End Enum EViewportInteractionDraggingMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
