// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Core/RigUnit_UserData.h"

#ifdef CONTROLRIG_RigUnit_UserData_generated_h
#error "RigUnit_UserData.generated.h already included, missing '#pragma once' in RigUnit_UserData.h"
#endif
#define CONTROLRIG_RigUnit_UserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigDispatch_GetUserData ******************************************
struct Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


struct FRigDispatch_GetUserData;
// ********** End ScriptStruct FRigDispatch_GetUserData ********************************************

// ********** Begin ScriptStruct FRigUnit_SetupShapeLibraryFromUserData ****************************
struct Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics;

#define FRigUnit_SetupShapeLibraryFromUserData_Execute() \
	void FRigUnit_SetupShapeLibraryFromUserData::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FString& NameSpace, \
		const FString& Path, \
		const FString& LibraryName, \
		const bool LogShapeLibraries \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FString& NameSpace, \
		const FString& Path, \
		const FString& LibraryName, \
		const bool LogShapeLibraries \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& NameSpace = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Path = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		const FString& LibraryName = *(FString*)RigVMMemoryHandles[2].GetInputData(); \
		const bool LogShapeLibraries = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			NameSpace, \
			Path, \
			LibraryName, \
			LogShapeLibraries \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetupShapeLibraryFromUserData;
// ********** End ScriptStruct FRigUnit_SetupShapeLibraryFromUserData ******************************

// ********** Begin ScriptStruct FRigUnit_ShapeExists **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics;

#define FRigUnit_ShapeExists_Execute() \
	void FRigUnit_ShapeExists::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& ShapeName, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& ShapeName, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& ShapeName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ShapeName, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ShapeExists;
// ********** End ScriptStruct FRigUnit_ShapeExists ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
