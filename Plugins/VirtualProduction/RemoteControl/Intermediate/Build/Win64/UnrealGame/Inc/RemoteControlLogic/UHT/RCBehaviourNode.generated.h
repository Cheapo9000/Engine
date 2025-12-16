// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/RCBehaviourNode.h"

#ifdef REMOTECONTROLLOGIC_RCBehaviourNode_generated_h
#error "RCBehaviourNode.generated.h already included, missing '#pragma once' in RCBehaviourNode.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviourNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCBehaviourNode *********************************************************
struct Z_Construct_UClass_URCBehaviourNode_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviourNode(); \
	friend struct ::Z_Construct_UClass_URCBehaviourNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCBehaviourNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URCBehaviourNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCBehaviourNode_NoRegister) \
	DECLARE_SERIALIZER(URCBehaviourNode)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCBehaviourNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCBehaviourNode(URCBehaviourNode&&) = delete; \
	URCBehaviourNode(const URCBehaviourNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviourNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviourNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCBehaviourNode) \
	NO_API virtual ~URCBehaviourNode();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCBehaviourNode;

// ********** End Class URCBehaviourNode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
