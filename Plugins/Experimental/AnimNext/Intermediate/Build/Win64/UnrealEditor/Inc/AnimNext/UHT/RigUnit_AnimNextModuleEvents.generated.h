// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/RigUnit_AnimNextModuleEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_RigUnit_AnimNextModuleEvents_generated_h
#error "RigUnit_AnimNextModuleEvents.generated.h already included, missing '#pragma once' in RigUnit_AnimNextModuleEvents.h"
#endif
#define ANIMNEXT_RigUnit_AnimNextModuleEvents_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextModuleEvents_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleEventBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextModuleEventBase>();


#define FRigUnit_AnimNextExecuteBindings_Execute() \
	void FRigUnit_AnimNextExecuteBindings::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextModuleEvents_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextExecuteBindings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextModuleEventBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextExecuteBindings>();


#define FRigUnit_AnimNextInitializeEvent_Execute() \
	void FRigUnit_AnimNextInitializeEvent::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextModuleEvents_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInitializeEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextModuleEventBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInitializeEvent>();


#define FRigUnit_AnimNextPrePhysicsEvent_Execute() \
	void FRigUnit_AnimNextPrePhysicsEvent::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextModuleEvents_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextPrePhysicsEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextModuleEventBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextPrePhysicsEvent>();


#define FRigUnit_AnimNextPostPhysicsEvent_Execute() \
	void FRigUnit_AnimNextPostPhysicsEvent::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextModuleEvents_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextPostPhysicsEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextModuleEventBase Super;


template<> ANIMNEXT_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextPostPhysicsEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_RigUnit_AnimNextModuleEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
