// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/PawnAction_Move.h"

#ifdef AIMODULE_PawnAction_Move_generated_h
#error "PawnAction_Move.generated.h already included, missing '#pragma once' in PawnAction_Move.h"
#endif
#define AIMODULE_PawnAction_Move_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h

// ********** Begin Enum EPawnActionMoveMode *******************************************************
#define FOREACH_ENUM_EPAWNACTIONMOVEMODE(op) \
	op(EPawnActionMoveMode::UsePathfinding) \
	op(EPawnActionMoveMode::StraightLine) 

namespace EPawnActionMoveMode { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPawnActionMoveMode::Type>();
// ********** End Enum EPawnActionMoveMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
