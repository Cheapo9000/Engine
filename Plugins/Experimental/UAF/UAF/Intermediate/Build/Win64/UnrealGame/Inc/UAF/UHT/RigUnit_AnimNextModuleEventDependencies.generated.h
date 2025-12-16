// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/RigUnit_AnimNextModuleEventDependencies.h"

#ifdef UAF_RigUnit_AnimNextModuleEventDependencies_generated_h
#error "RigUnit_AnimNextModuleEventDependencies.generated.h already included, missing '#pragma once' in RigUnit_AnimNextModuleEventDependencies.h"
#endif
#define UAF_RigUnit_AnimNextModuleEventDependencies_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextAddDependencyMenuContext ****************************************
struct Z_Construct_UClass_UAnimNextAddDependencyMenuContext_Statics;
UAF_API UClass* Z_Construct_UClass_UAnimNextAddDependencyMenuContext_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextAddDependencyMenuContext(); \
	friend struct ::Z_Construct_UClass_UAnimNextAddDependencyMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAnimNextAddDependencyMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextAddDependencyMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAnimNextAddDependencyMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextAddDependencyMenuContext)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextAddDependencyMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextAddDependencyMenuContext(UAnimNextAddDependencyMenuContext&&) = delete; \
	UAnimNextAddDependencyMenuContext(const UAnimNextAddDependencyMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextAddDependencyMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextAddDependencyMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextAddDependencyMenuContext) \
	NO_API virtual ~UAnimNextAddDependencyMenuContext();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextAddDependencyMenuContext;

// ********** End Class UAnimNextAddDependencyMenuContext ******************************************

// ********** Begin ScriptStruct FRigUnit_AnimNextModuleDependenciesBase ***************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleDependenciesBase_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleDependenciesBase_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextModuleDependenciesBase;
// ********** End ScriptStruct FRigUnit_AnimNextModuleDependenciesBase *****************************

// ********** Begin ScriptStruct FRigUnit_AnimNextModuleAddDependencies ****************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleAddDependencies_Statics;

#define FRigUnit_AnimNextModuleAddDependencies_Execute() \
	void FRigUnit_AnimNextModuleAddDependencies::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleAddDependencies_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
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
	typedef FRigUnit_AnimNextModuleDependenciesBase Super;


struct FRigUnit_AnimNextModuleAddDependencies;
// ********** End ScriptStruct FRigUnit_AnimNextModuleAddDependencies ******************************

// ********** Begin ScriptStruct FRigUnit_AnimNextModuleRemoveDependencies *************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleRemoveDependencies_Statics;

#define FRigUnit_AnimNextModuleRemoveDependencies_Execute() \
	void FRigUnit_AnimNextModuleRemoveDependencies::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleRemoveDependencies_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
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
	typedef FRigUnit_AnimNextModuleDependenciesBase Super;


struct FRigUnit_AnimNextModuleRemoveDependencies;
// ********** End ScriptStruct FRigUnit_AnimNextModuleRemoveDependencies ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEventDependencies_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
