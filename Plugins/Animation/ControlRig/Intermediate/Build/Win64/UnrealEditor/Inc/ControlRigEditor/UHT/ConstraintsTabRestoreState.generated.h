// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditMode/Settings/ConstraintsTabRestoreState.h"

#ifdef CONTROLRIGEDITOR_ConstraintsTabRestoreState_generated_h
#error "ConstraintsTabRestoreState.generated.h already included, missing '#pragma once' in ConstraintsTabRestoreState.h"
#endif
#define CONTROLRIGEDITOR_ConstraintsTabRestoreState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigConstraintsTabRestoreState *****************************
struct Z_Construct_UScriptStruct_FControlRigConstraintsTabRestoreState_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_Settings_ConstraintsTabRestoreState_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigConstraintsTabRestoreState_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FControlRigConstraintsTabRestoreState;
// ********** End ScriptStruct FControlRigConstraintsTabRestoreState *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_Settings_ConstraintsTabRestoreState_h

// ********** Begin Enum EControlRigConstrainTab ***************************************************
#define FOREACH_ENUM_ECONTROLRIGCONSTRAINTAB(op) \
	op(EControlRigConstrainTab::Spaces) \
	op(EControlRigConstrainTab::Constraints) \
	op(EControlRigConstrainTab::Snapper) 

enum class EControlRigConstrainTab : uint8;
template<> struct TIsUEnumClass<EControlRigConstrainTab> { enum { Value = true }; };
template<> CONTROLRIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigConstrainTab>();
// ********** End Enum EControlRigConstrainTab *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
