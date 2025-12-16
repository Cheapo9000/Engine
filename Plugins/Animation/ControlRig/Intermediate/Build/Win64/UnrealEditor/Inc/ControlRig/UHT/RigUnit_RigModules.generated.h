// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_RigModules.h"

#ifdef CONTROLRIG_RigUnit_RigModules_generated_h
#error "RigUnit_RigModules.generated.h already included, missing '#pragma once' in RigUnit_RigModules.h"
#endif
#define CONTROLRIG_RigUnit_RigModules_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_RigModulesBase *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_RigModulesBase;
// ********** End ScriptStruct FRigUnit_RigModulesBase *********************************************

// ********** Begin ScriptStruct FRigUnit_RigModulesBaseMutable ************************************
struct Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


struct FRigUnit_RigModulesBaseMutable;
// ********** End ScriptStruct FRigUnit_RigModulesBaseMutable **************************************

// ********** Begin ScriptStruct FRigUnit_ResolveConnector *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics;

#define FRigUnit_ResolveConnector_Execute() \
	void FRigUnit_ResolveConnector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Connector, \
		const bool SkipSocket, \
		FRigElementKey& Result, \
		bool& bIsConnected \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Connector, \
		const bool SkipSocket, \
		FRigElementKey& Result, \
		bool& bIsConnected \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Connector = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool SkipSocket = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKey& Result = *(FRigElementKey*)RigVMMemoryHandles[2].GetOutputData(); \
		bool& bIsConnected = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Connector, \
			SkipSocket, \
			Result, \
			bIsConnected \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_ResolveConnector;
// ********** End ScriptStruct FRigUnit_ResolveConnector *******************************************

// ********** Begin ScriptStruct FRigUnit_ResolveArrayConnector ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ResolveArrayConnector_Statics;

#define FRigUnit_ResolveArrayConnector_Execute() \
	void FRigUnit_ResolveArrayConnector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Connector, \
		const bool SkipSocket, \
		TArray<FRigElementKey>& Result, \
		bool& bIsConnected \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ResolveArrayConnector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Connector, \
		const bool SkipSocket, \
		TArray<FRigElementKey>& Result, \
		bool& bIsConnected \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Connector = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool SkipSocket = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetOutputData(); \
		bool& bIsConnected = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Connector, \
			SkipSocket, \
			Result, \
			bIsConnected \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_ResolveArrayConnector;
// ********** End ScriptStruct FRigUnit_ResolveArrayConnector **************************************

// ********** Begin ScriptStruct FRigUnit_GetCurrentNameSpace **************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics;

#define FRigUnit_GetCurrentNameSpace_Execute() \
	void FRigUnit_GetCurrentNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FString& NameSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FString& NameSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FString& NameSpace = *(FString*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			NameSpace \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_GetCurrentNameSpace;
// ********** End ScriptStruct FRigUnit_GetCurrentNameSpace ****************************************

// ********** Begin ScriptStruct FRigUnit_GetItemShortName *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics;

#define FRigUnit_GetItemShortName_Execute() \
	void FRigUnit_GetItemShortName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FName& ShortName \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FName& ShortName \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		FName& ShortName = *(FName*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			ShortName \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_GetItemShortName;
// ********** End ScriptStruct FRigUnit_GetItemShortName *******************************************

// ********** Begin ScriptStruct FRigUnit_GetItemNameSpace *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics;

#define FRigUnit_GetItemNameSpace_Execute() \
	void FRigUnit_GetItemNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& HasNameSpace, \
		FString& NameSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& HasNameSpace, \
		FString& NameSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		bool& HasNameSpace = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		FString& NameSpace = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			HasNameSpace, \
			NameSpace \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_GetItemNameSpace;
// ********** End ScriptStruct FRigUnit_GetItemNameSpace *******************************************

// ********** Begin ScriptStruct FRigUnit_IsItemInCurrentNameSpace *********************************
struct Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics;

#define FRigUnit_IsItemInCurrentNameSpace_Execute() \
	void FRigUnit_IsItemInCurrentNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Result \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_IsItemInCurrentNameSpace;
// ********** End ScriptStruct FRigUnit_IsItemInCurrentNameSpace ***********************************

// ********** Begin ScriptStruct FRigUnit_GetItemsInNameSpace **************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics;

#define FRigUnit_GetItemsInNameSpace_Execute() \
	void FRigUnit_GetItemsInNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_250_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_GetItemsInNameSpace;
// ********** End ScriptStruct FRigUnit_GetItemsInNameSpace ****************************************

// ********** Begin ScriptStruct FRigUnit_GetModuleName ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetModuleName_Statics;

#define FRigUnit_GetModuleName_Execute() \
	void FRigUnit_GetModuleName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FString& Module \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_280_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetModuleName_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FString& Module \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FString& Module = *(FString*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Module \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_GetModuleName;
// ********** End ScriptStruct FRigUnit_GetModuleName **********************************************

// ********** Begin ScriptStruct FRigUnit_GetItemModuleName ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetItemModuleName_Statics;

#define FRigUnit_GetItemModuleName_Execute() \
	void FRigUnit_GetItemModuleName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& IsPartOfModule, \
		FString& Module \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_303_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetItemModuleName_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& IsPartOfModule, \
		FString& Module \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		bool& IsPartOfModule = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		FString& Module = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			IsPartOfModule, \
			Module \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_GetItemModuleName;
// ********** End ScriptStruct FRigUnit_GetItemModuleName ******************************************

// ********** Begin ScriptStruct FRigUnit_IsItemInCurrentModule ************************************
struct Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentModule_Statics;

#define FRigUnit_IsItemInCurrentModule_Execute() \
	void FRigUnit_IsItemInCurrentModule::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_340_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentModule_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Result \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_IsItemInCurrentModule;
// ********** End ScriptStruct FRigUnit_IsItemInCurrentModule **************************************

// ********** Begin ScriptStruct FRigUnit_GetItemsInModule *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetItemsInModule_Statics;

#define FRigUnit_GetItemsInModule_Execute() \
	void FRigUnit_GetItemsInModule::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_370_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetItemsInModule_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


struct FRigUnit_GetItemsInModule;
// ********** End ScriptStruct FRigUnit_GetItemsInModule *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
