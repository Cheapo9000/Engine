// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMUserWorkflowRegistry.h"

#ifdef RIGVMDEVELOPER_RigVMUserWorkflowRegistry_generated_h
#error "RigVMUserWorkflowRegistry.generated.h already included, missing '#pragma once' in RigVMUserWorkflowRegistry.h"
#endif
#define RIGVMDEVELOPER_RigVMUserWorkflowRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMUserWorkflowRegistry;
class UScriptStruct;
enum class ERigVMUserWorkflowType : uint8;
struct FRigVMUserWorkflow;

// ********** Begin Delegate FRigVMUserWorkflowProvider ********************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_24_DELEGATE \
RIGVMDEVELOPER_API TArray<FRigVMUserWorkflow> FRigVMUserWorkflowProvider_DelegateWrapper(const FScriptDelegate& RigVMUserWorkflowProvider, const UObject* InSubject);


// ********** End Delegate FRigVMUserWorkflowProvider **********************************************

// ********** Begin Class URigVMUserWorkflowRegistry ***********************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorkflows); \
	DECLARE_FUNCTION(execUnregisterProvider); \
	DECLARE_FUNCTION(execRegisterProvider); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_URigVMUserWorkflowRegistry_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMUserWorkflowRegistry_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMUserWorkflowRegistry(); \
	friend struct ::Z_Construct_UClass_URigVMUserWorkflowRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMUserWorkflowRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMUserWorkflowRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMUserWorkflowRegistry_NoRegister) \
	DECLARE_SERIALIZER(URigVMUserWorkflowRegistry)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMUserWorkflowRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMUserWorkflowRegistry(URigVMUserWorkflowRegistry&&) = delete; \
	URigVMUserWorkflowRegistry(const URigVMUserWorkflowRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMUserWorkflowRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMUserWorkflowRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMUserWorkflowRegistry) \
	RIGVMDEVELOPER_API virtual ~URigVMUserWorkflowRegistry();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMUserWorkflowRegistry;

// ********** End Class URigVMUserWorkflowRegistry *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
