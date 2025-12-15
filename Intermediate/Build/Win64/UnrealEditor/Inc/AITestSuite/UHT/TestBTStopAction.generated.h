// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTStopAction.h"

#ifdef AITESTSUITE_TestBTStopAction_generated_h
#error "TestBTStopAction.generated.h already included, missing '#pragma once' in TestBTStopAction.h"
#endif
#define AITESTSUITE_TestBTStopAction_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h

// ********** Begin Enum EBTTestStopAction *********************************************************
#define FOREACH_ENUM_EBTTESTSTOPACTION(op) \
	op(EBTTestStopAction::StopTree) \
	op(EBTTestStopAction::UnInitialize) \
	op(EBTTestStopAction::Cleanup) \
	op(EBTTestStopAction::Restart_ForceReevaluateRootNode) \
	op(EBTTestStopAction::Restart_Complete) \
	op(EBTTestStopAction::StartTree) 

enum class EBTTestStopAction : uint8;
template<> struct TIsUEnumClass<EBTTestStopAction> { enum { Value = true }; };
template<> AITESTSUITE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBTTestStopAction>();
// ********** End Enum EBTTestStopAction ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
