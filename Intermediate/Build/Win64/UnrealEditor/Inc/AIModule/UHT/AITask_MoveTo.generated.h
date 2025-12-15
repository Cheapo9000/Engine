// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/AITask_MoveTo.h"

#ifdef AIMODULE_AITask_MoveTo_generated_h
#error "AITask_MoveTo.generated.h already included, missing '#pragma once' in AITask_MoveTo.h"
#endif
#define AIMODULE_AITask_MoveTo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class UAITask_MoveTo;

// ********** Begin Delegate FMoveTaskCompletedSignature *******************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_14_DELEGATE \
AIMODULE_API void FMoveTaskCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& MoveTaskCompletedSignature, EPathFollowingResult::Type Result, AAIController* AIController);


// ********** End Delegate FMoveTaskCompletedSignature *********************************************

// ********** Begin Class UAITask_MoveTo ***********************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAIMoveTo);


struct Z_Construct_UClass_UAITask_MoveTo_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_MoveTo(); \
	friend struct ::Z_Construct_UClass_UAITask_MoveTo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAITask_MoveTo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAITask_MoveTo, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAITask_MoveTo_NoRegister) \
	DECLARE_SERIALIZER(UAITask_MoveTo)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAITask_MoveTo(UAITask_MoveTo&&) = delete; \
	UAITask_MoveTo(const UAITask_MoveTo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAITask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_MoveTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_MoveTo) \
	AIMODULE_API virtual ~UAITask_MoveTo();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAITask_MoveTo;

// ********** End Class UAITask_MoveTo *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
