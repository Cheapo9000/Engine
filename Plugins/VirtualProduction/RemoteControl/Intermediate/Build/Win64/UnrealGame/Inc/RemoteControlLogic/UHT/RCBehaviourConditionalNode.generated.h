// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h"

#ifdef REMOTECONTROLLOGIC_RCBehaviourConditionalNode_generated_h
#error "RCBehaviourConditionalNode.generated.h already included, missing '#pragma once' in RCBehaviourConditionalNode.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviourConditionalNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URCBehaviour;

// ********** Begin Class URCBehaviourConditionalNode **********************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPassed_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool IsSupported_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool Execute_Implementation(URCBehaviour* InBehaviour) const; \
	DECLARE_FUNCTION(execOnPassed); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URCBehaviourConditionalNode_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourConditionalNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviourConditionalNode(); \
	friend struct ::Z_Construct_UClass_URCBehaviourConditionalNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCBehaviourConditionalNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URCBehaviourConditionalNode, URCBehaviourNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCBehaviourConditionalNode_NoRegister) \
	DECLARE_SERIALIZER(URCBehaviourConditionalNode)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCBehaviourConditionalNode(URCBehaviourConditionalNode&&) = delete; \
	URCBehaviourConditionalNode(const URCBehaviourConditionalNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviourConditionalNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviourConditionalNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCBehaviourConditionalNode) \
	NO_API virtual ~URCBehaviourConditionalNode();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCBehaviourConditionalNode;

// ********** End Class URCBehaviourConditionalNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
