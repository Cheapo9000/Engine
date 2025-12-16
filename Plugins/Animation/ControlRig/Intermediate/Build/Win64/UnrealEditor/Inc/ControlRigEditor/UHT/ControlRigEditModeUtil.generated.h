// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditMode/ControlRigEditModeUtil.h"

#ifdef CONTROLRIGEDITOR_ControlRigEditModeUtil_generated_h
#error "ControlRigEditModeUtil.generated.h already included, missing '#pragma once' in ControlRigEditModeUtil.h"
#endif
#define CONTROLRIGEDITOR_ControlRigEditModeUtil_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigInteractionTransformContext ****************************
struct Z_Construct_UScriptStruct_FControlRigInteractionTransformContext_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditModeUtil_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigInteractionTransformContext_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FControlRigInteractionTransformContext;
// ********** End ScriptStruct FControlRigInteractionTransformContext ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditModeUtil_h

// ********** Begin Enum EControlRigInteractionTransformSpace **************************************
#define FOREACH_ENUM_ECONTROLRIGINTERACTIONTRANSFORMSPACE(op) \
	op(EControlRigInteractionTransformSpace::World) \
	op(EControlRigInteractionTransformSpace::Local) \
	op(EControlRigInteractionTransformSpace::Parent) \
	op(EControlRigInteractionTransformSpace::Explicit) 

enum class EControlRigInteractionTransformSpace;
template<> struct TIsUEnumClass<EControlRigInteractionTransformSpace> { enum { Value = true }; };
template<> CONTROLRIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigInteractionTransformSpace>();
// ********** End Enum EControlRigInteractionTransformSpace ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
