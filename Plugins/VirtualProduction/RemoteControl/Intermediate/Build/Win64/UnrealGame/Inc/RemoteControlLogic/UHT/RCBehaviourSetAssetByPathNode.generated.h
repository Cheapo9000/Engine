// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/Builtin/Path/RCBehaviourSetAssetByPathNode.h"

#ifdef REMOTECONTROLLOGIC_RCBehaviourSetAssetByPathNode_generated_h
#error "RCBehaviourSetAssetByPathNode.generated.h already included, missing '#pragma once' in RCBehaviourSetAssetByPathNode.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviourSetAssetByPathNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URCBehaviour;

// ********** Begin Class URCBehaviourSetAssetByPathNode *******************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsSupported_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool Execute_Implementation(URCBehaviour* InBehaviour) const; \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourSetAssetByPathNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviourSetAssetByPathNode(); \
	friend struct ::Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCBehaviourSetAssetByPathNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URCBehaviourSetAssetByPathNode, URCBehaviourNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCBehaviourSetAssetByPathNode_NoRegister) \
	DECLARE_SERIALIZER(URCBehaviourSetAssetByPathNode)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCBehaviourSetAssetByPathNode(URCBehaviourSetAssetByPathNode&&) = delete; \
	URCBehaviourSetAssetByPathNode(const URCBehaviourSetAssetByPathNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviourSetAssetByPathNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviourSetAssetByPathNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCBehaviourSetAssetByPathNode) \
	NO_API virtual ~URCBehaviourSetAssetByPathNode();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCBehaviourSetAssetByPathNode;

// ********** End Class URCBehaviourSetAssetByPathNode *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
