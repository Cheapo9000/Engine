// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/StateTreeTaskBlueprintBase.h"

#ifdef STATETREEMODULE_StateTreeTaskBlueprintBase_generated_h
#error "StateTreeTaskBlueprintBase.generated.h already included, missing '#pragma once' in StateTreeTaskBlueprintBase.h"
#endif
#define STATETREEMODULE_StateTreeTaskBlueprintBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateTreeRunStatus : uint8;
struct FStateTreeActiveStates;
struct FStateTreeDelegateDispatcher;
struct FStateTreeDelegateListener;
struct FStateTreeTransitionResult;

// ********** Begin Delegate FStateTreeDynamicDelegate *********************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_15_DELEGATE \
STATETREEMODULE_API void FStateTreeDynamicDelegate_DelegateWrapper(const FScriptDelegate& StateTreeDynamicDelegate);


// ********** End Delegate FStateTreeDynamicDelegate ***********************************************

// ********** Begin Class UStateTreeTaskBlueprintBase **********************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnbindDelegate); \
	DECLARE_FUNCTION(execBindDelegate); \
	DECLARE_FUNCTION(execBroadcastDelegate); \
	DECLARE_FUNCTION(execFinishTask);


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics;
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeTaskBlueprintBase(); \
	friend struct ::Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeTaskBlueprintBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeTaskBlueprintBase, UStateTreeNodeBlueprintBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeTaskBlueprintBase_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeTaskBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeTaskBlueprintBase(UStateTreeTaskBlueprintBase&&) = delete; \
	UStateTreeTaskBlueprintBase(const UStateTreeTaskBlueprintBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeTaskBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeTaskBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeTaskBlueprintBase) \
	STATETREEMODULE_API virtual ~UStateTreeTaskBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeTaskBlueprintBase;

// ********** End Class UStateTreeTaskBlueprintBase ************************************************

// ********** Begin ScriptStruct FStateTreeBlueprintTaskWrapper ************************************
struct Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskBase Super;


struct FStateTreeBlueprintTaskWrapper;
// ********** End ScriptStruct FStateTreeBlueprintTaskWrapper **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
