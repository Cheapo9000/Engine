// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMUserWorkflow.h"

#ifdef RIGVM_RigVMUserWorkflow_generated_h
#error "RigVMUserWorkflow.generated.h already included, missing '#pragma once' in RigVMUserWorkflow.h"
#endif
#define RIGVM_RigVMUserWorkflow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMUserWorkflowOptions;

// ********** Begin Delegate FRigVMPeformUserWorkflowDynamicDelegate *******************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_31_DELEGATE \
RIGVM_API bool FRigVMPeformUserWorkflowDynamicDelegate_DelegateWrapper(const FScriptDelegate& RigVMPeformUserWorkflowDynamicDelegate, const URigVMUserWorkflowOptions* InOptions, UObject* InController);


// ********** End Delegate FRigVMPeformUserWorkflowDynamicDelegate *********************************

// ********** Begin ScriptStruct FRigVMUserWorkflow ************************************************
struct Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMUserWorkflow;
// ********** End ScriptStruct FRigVMUserWorkflow **************************************************

// ********** Begin Class URigVMUserWorkflowOptions ************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReportInfo); \
	DECLARE_FUNCTION(execReportWarning); \
	DECLARE_FUNCTION(execReportError); \
	DECLARE_FUNCTION(execRequiresDialog); \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_URigVMUserWorkflowOptions_Statics;
RIGVM_API UClass* Z_Construct_UClass_URigVMUserWorkflowOptions_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMUserWorkflowOptions(); \
	friend struct ::Z_Construct_UClass_URigVMUserWorkflowOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_URigVMUserWorkflowOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMUserWorkflowOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_URigVMUserWorkflowOptions_NoRegister) \
	DECLARE_SERIALIZER(URigVMUserWorkflowOptions)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API URigVMUserWorkflowOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMUserWorkflowOptions(URigVMUserWorkflowOptions&&) = delete; \
	URigVMUserWorkflowOptions(const URigVMUserWorkflowOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, URigVMUserWorkflowOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMUserWorkflowOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMUserWorkflowOptions) \
	RIGVM_API virtual ~URigVMUserWorkflowOptions();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMUserWorkflowOptions;

// ********** End Class URigVMUserWorkflowOptions **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUserWorkflow_h

// ********** Begin Enum ERigVMUserWorkflowType ****************************************************
#define FOREACH_ENUM_ERIGVMUSERWORKFLOWTYPE(op) \
	op(ERigVMUserWorkflowType::Invalid) \
	op(ERigVMUserWorkflowType::NodeContext) \
	op(ERigVMUserWorkflowType::PinContext) \
	op(ERigVMUserWorkflowType::OnPinDefaultChanged) \
	op(ERigVMUserWorkflowType::NodeContextButton) \
	op(ERigVMUserWorkflowType::All) 

enum class ERigVMUserWorkflowType : uint8;
template<> struct TIsUEnumClass<ERigVMUserWorkflowType> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMUserWorkflowType>();
// ********** End Enum ERigVMUserWorkflowType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
