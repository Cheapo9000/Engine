// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StateTreeComponent.h"

#ifdef GAMEPLAYSTATETREEMODULE_StateTreeComponent_generated_h
#error "StateTreeComponent.generated.h already included, missing '#pragma once' in StateTreeComponent.h"
#endif
#define GAMEPLAYSTATETREEMODULE_StateTreeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStateTree;
enum class EStateTreeRunStatus : uint8;
struct FGameplayTag;
struct FStateTreeEvent;
struct FStateTreeReference;

// ********** Begin ScriptStruct FStateTreeComponentExecutionExtension *****************************
struct Z_Construct_UScriptStruct_FStateTreeComponentExecutionExtension_Statics;
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeComponentExecutionExtension_Statics; \
	GAMEPLAYSTATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeExecutionExtension Super;


struct FStateTreeComponentExecutionExtension;
// ********** End ScriptStruct FStateTreeComponentExecutionExtension *******************************

// ********** Begin Delegate FStateTreeRunStatusChanged ********************************************
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_36_DELEGATE \
GAMEPLAYSTATETREEMODULE_API void FStateTreeRunStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTreeRunStatusChanged, EStateTreeRunStatus StateTreeRunStatus);


// ********** End Delegate FStateTreeRunStatusChanged **********************************************

// ********** Begin Class UStateTreeComponent ******************************************************
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateTreeRunStatus); \
	DECLARE_FUNCTION(execSendStateTreeEvent); \
	DECLARE_FUNCTION(execSetStartLogicAutomatically); \
	DECLARE_FUNCTION(execRemoveLinkedStateTreeOverrides); \
	DECLARE_FUNCTION(execAddLinkedStateTreeOverrides); \
	DECLARE_FUNCTION(execSetStateTreeReference); \
	DECLARE_FUNCTION(execSetStateTree);


struct Z_Construct_UClass_UStateTreeComponent_Statics;
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeComponent(); \
	friend struct ::Z_Construct_UClass_UStateTreeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYSTATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayStateTreeModule"), Z_Construct_UClass_UStateTreeComponent_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStateTreeComponent*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeComponent(UStateTreeComponent&&) = delete; \
	UStateTreeComponent(const UStateTreeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYSTATETREEMODULE_API, UStateTreeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeComponent) \
	GAMEPLAYSTATETREEMODULE_API virtual ~UStateTreeComponent();


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeComponent;

// ********** End Class UStateTreeComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
