// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/Builtin/Path/RCBehaviorSetAssetByPathNodeNew.h"

#ifdef REMOTECONTROLLOGIC_RCBehaviorSetAssetByPathNodeNew_generated_h
#error "RCBehaviorSetAssetByPathNodeNew.generated.h already included, missing '#pragma once' in RCBehaviorSetAssetByPathNodeNew.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviorSetAssetByPathNodeNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URCBehaviour;

// ********** Begin Class URCBehaviorSetAssetByPathNodeNew *****************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	REMOTECONTROLLOGIC_API virtual bool IsSupported_Implementation(URCBehaviour* InBehavior) const; \
	REMOTECONTROLLOGIC_API virtual bool Execute_Implementation(URCBehaviour* InBehavior) const; \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URCBehaviorSetAssetByPathNodeNew_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviorSetAssetByPathNodeNew_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviorSetAssetByPathNodeNew(); \
	friend struct ::Z_Construct_UClass_URCBehaviorSetAssetByPathNodeNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCBehaviorSetAssetByPathNodeNew_NoRegister(); \
public: \
	DECLARE_CLASS2(URCBehaviorSetAssetByPathNodeNew, URCBehaviourNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCBehaviorSetAssetByPathNodeNew_NoRegister) \
	DECLARE_SERIALIZER(URCBehaviorSetAssetByPathNodeNew)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCBehaviorSetAssetByPathNodeNew(URCBehaviorSetAssetByPathNodeNew&&) = delete; \
	URCBehaviorSetAssetByPathNodeNew(const URCBehaviorSetAssetByPathNodeNew&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REMOTECONTROLLOGIC_API, URCBehaviorSetAssetByPathNodeNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviorSetAssetByPathNodeNew); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCBehaviorSetAssetByPathNodeNew) \
	REMOTECONTROLLOGIC_API virtual ~URCBehaviorSetAssetByPathNodeNew();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCBehaviorSetAssetByPathNodeNew;

// ********** End Class URCBehaviorSetAssetByPathNodeNew *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviorSetAssetByPathNodeNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
