// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/Builtin/RCBehaviourOnValueChangedNode.h"

#ifdef REMOTECONTROLLOGIC_RCBehaviourOnValueChangedNode_generated_h
#error "RCBehaviourOnValueChangedNode.generated.h already included, missing '#pragma once' in RCBehaviourOnValueChangedNode.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviourOnValueChangedNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URCBehaviour;

// ********** Begin Class URCBehaviourOnValueChangedNode *******************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsSupported_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool Execute_Implementation(URCBehaviour* InBehaviour) const; \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourOnValueChangedNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviourOnValueChangedNode(); \
	friend struct ::Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCBehaviourOnValueChangedNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URCBehaviourOnValueChangedNode, URCBehaviourNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCBehaviourOnValueChangedNode_NoRegister) \
	DECLARE_SERIALIZER(URCBehaviourOnValueChangedNode)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCBehaviourOnValueChangedNode(URCBehaviourOnValueChangedNode&&) = delete; \
	URCBehaviourOnValueChangedNode(const URCBehaviourOnValueChangedNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviourOnValueChangedNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviourOnValueChangedNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCBehaviourOnValueChangedNode) \
	NO_API virtual ~URCBehaviourOnValueChangedNode();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCBehaviourOnValueChangedNode;

// ********** End Class URCBehaviourOnValueChangedNode *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
