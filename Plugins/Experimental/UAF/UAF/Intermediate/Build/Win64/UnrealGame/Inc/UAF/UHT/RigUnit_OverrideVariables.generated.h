// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/RigUnit_OverrideVariables.h"

#ifdef UAF_RigUnit_OverrideVariables_generated_h
#error "RigUnit_OverrideVariables.generated.h already included, missing '#pragma once' in RigUnit_OverrideVariables.h"
#endif
#define UAF_RigUnit_OverrideVariables_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextOverrideVariablesMenuContext ************************************
struct Z_Construct_UClass_UAnimNextOverrideVariablesMenuContext_Statics;
UAF_API UClass* Z_Construct_UClass_UAnimNextOverrideVariablesMenuContext_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextOverrideVariablesMenuContext(); \
	friend struct ::Z_Construct_UClass_UAnimNextOverrideVariablesMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAnimNextOverrideVariablesMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextOverrideVariablesMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAnimNextOverrideVariablesMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextOverrideVariablesMenuContext)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextOverrideVariablesMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextOverrideVariablesMenuContext(UAnimNextOverrideVariablesMenuContext&&) = delete; \
	UAnimNextOverrideVariablesMenuContext(const UAnimNextOverrideVariablesMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextOverrideVariablesMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextOverrideVariablesMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextOverrideVariablesMenuContext) \
	NO_API virtual ~UAnimNextOverrideVariablesMenuContext();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextOverrideVariablesMenuContext;

// ********** End Class UAnimNextOverrideVariablesMenuContext **************************************

// ********** Begin ScriptStruct FAnimNextOverrideVariablesWorkData ********************************
struct Z_Construct_UScriptStruct_FAnimNextOverrideVariablesWorkData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextOverrideVariablesWorkData_Statics; \
	UAF_API static class UScriptStruct* StaticStruct();


struct FAnimNextOverrideVariablesWorkData;
// ********** End ScriptStruct FAnimNextOverrideVariablesWorkData **********************************

// ********** Begin ScriptStruct FRigUnit_OverrideVariables ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_OverrideVariables_Statics;

#define FRigUnit_OverrideVariables_Execute() \
	void FRigUnit_OverrideVariables::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FAnimNextVariableOverridesCollection& Overrides, \
		FAnimNextOverrideVariablesWorkData& WorkData \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_OverrideVariables_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FAnimNextVariableOverridesCollection& Overrides, \
		FAnimNextOverrideVariablesWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FAnimNextVariableOverridesCollection& Overrides = *(FAnimNextVariableOverridesCollection*)RigVMMemoryHandles[0].GetOutputData(); \
		FAnimNextOverrideVariablesWorkData& WorkData = *(FAnimNextOverrideVariablesWorkData*)RigVMMemoryHandles[1].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Overrides, \
			WorkData \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_OverrideVariables;
// ********** End ScriptStruct FRigUnit_OverrideVariables ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Private_Variables_RigUnit_OverrideVariables_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
